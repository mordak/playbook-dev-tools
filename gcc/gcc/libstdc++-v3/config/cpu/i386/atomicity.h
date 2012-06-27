// Low-level functions for atomic operations: x86, x >= 3 version  -*- C++ -*-

// Copyright (C) 2003, 2004, 2005, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

#include <ext/atomicity.h>

_GLIBCXX_BEGIN_NAMESPACE(__gnu_cxx)

#ifndef __QNXNTO__
  template<int __inst>
    struct _Atomicity_lock
    {
      static volatile _Atomic_word _S_atomicity_lock;
    };

  template<int __inst>
  volatile _Atomic_word _Atomicity_lock<__inst>::_S_atomicity_lock = 0;

  template volatile _Atomic_word _Atomicity_lock<0>::_S_atomicity_lock;
#endif 
  
  _Atomic_word 
  __attribute__ ((__unused__))
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  {
#ifndef __QNXNTO__
    register _Atomic_word __result, __tmp = 1;
    
    // Obtain the atomic exchange/add spin lock.
    do 
      {
	__asm__ __volatile__ ("xchg{l} {%0,%1|%1,%0}"
			      : "=m" (_Atomicity_lock<0>::_S_atomicity_lock),
			      "+r" (__tmp)
			      : "m" (_Atomicity_lock<0>::_S_atomicity_lock));
      } 
    while (__tmp);
    
    __result = *__mem;
    *__mem += __val;
    
    // Release spin lock.
    _Atomicity_lock<0>::_S_atomicity_lock = 0;
    
    return __result;
#else
    register _Atomic_word __result;
    __asm__ __volatile__ ("lock; xadd{l} {%0,%1|%1,%0}"
                          : "=r" (__result), "=m" (*__mem)
                          : "0" (__val), "m" (*__mem));
     return __result;
#endif
  }
 
#ifndef __QNXNTO__ 
  void
  __attribute__ ((__unused__))
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __exchange_and_add(__mem, __val); }
#else 

  void
  __attribute__ ((__unused__))
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  {
    __asm__ __volatile__ ("lock; add{l} {%1,%0|%0,%1}"
                          : "=m" (*__mem) : "ir" (__val), "m" (*__mem));
  }
#endif
_GLIBCXX_END_NAMESPACE
