#ifndef _NL_TYPES_H_
/*
 * nl_types.h
 *
 * Defines constants and function prototypes used in the manipulation
 * of POSIX style National Language Message Catalogues.
 *
 * This file is part of the MinGW32 package set.
 *
 * Contributed by Keith Marshall <keithmarshall@users.sourceforge.net>
 * Last modification: 15-Dec-2006
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Revision: 1.1.1.1 $
 * $Author: keithmarshall $
 * $Date: 2007/04/06 22:34:56 $
 *
 */
#define _NL_TYPES_H_

/* All the headers include this file. */

/* POSIX wants these in limits.h
 * But __MINGW32__ doesn't target a POSIX host.
 * For now, we'll define them here, and consider moving them later.
 */
#define NL_LANGMAX	   14
#define NL_MSGMAX	32767
#define NL_SETMAX	  255
#define NL_TEXTMAX	 2048

/* Minimum POSIX requirement for nl_types.h is */
#define NL_SETD		    1
#define NL_CAT_LOCALE	0x100

typedef int nl_catd;
typedef int nl_item;

extern nl_catd    catopen( __const char *, int );
extern char     * catgets( nl_catd, int, int, __const char * );
extern int        catclose( nl_catd );

/*****
 *
 * The following are MinGW specific extensions to the POSIX standard;
 * they provide a mechanism for using the `flags' argument to `catopen'
 * to increase the allocation size of the catalogue descriptor table by
 * more than a single slot, when it must be expanded.
 *
 * To utilise this extension, say to allocate a 5-slot descriptor table,
 * `catopen()' should be called as:
 *
 *    nl_catd catd;
 *    catd = catopen( "catname", NL_CATD_BLKSIZ( 5 ));
 *
 * or:
 *
 *    nl_catd catd;
 *    catd = catopen( "catname", NL_CAT_LOCALE | NL_CATD_BLKSIZ( 5 ));
 *
 * Note that using this extension is strictly non-portable; the maximum
 * block size which may be specified is NL_CATD_BLKSIZ( 127 ).
 *
 */
#define NL_CATD_BLKSIZ_MIN            1
#define NL_CATD_BLKSIZ_MAX         0x7F
#define NL_CATD_BLKSIZ(INC)  ((INC) & NL_CATD_BLKSIZ_MAX)

#endif /* !defined(_NL_TYPES_H_): $RCSfile: nl_types.h,v $Revision: 1.1.1.1 $: end of file */
