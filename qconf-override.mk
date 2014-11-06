CP_HOST=/bin/cp -vfpc $(CP_HOST_OPTIONS)

COMPILER_DRIVER= # qcc not yet

CC_nto_x86_gcc=gcc.pkgsrc -c
AS_nto_x86_gcc=gcc.pkgsrc -c
AR_nto_x86_gcc=ar
LR_nto_x86_gcc=gcc.pkgsrc -r
LD_nto_x86_gcc=gcc.pkgsrc
UM_nto_x86_gcc=true # usemsg not yet
OC_nto_x86_gcc=objcopy
