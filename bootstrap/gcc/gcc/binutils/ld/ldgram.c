/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     NAME = 259,
     LNAME = 260,
     OREQ = 261,
     ANDEQ = 262,
     RSHIFTEQ = 263,
     LSHIFTEQ = 264,
     DIVEQ = 265,
     MULTEQ = 266,
     MINUSEQ = 267,
     PLUSEQ = 268,
     OROR = 269,
     ANDAND = 270,
     NE = 271,
     EQ = 272,
     GE = 273,
     LE = 274,
     RSHIFT = 275,
     LSHIFT = 276,
     UNARY = 277,
     END = 278,
     ALIGN_K = 279,
     BLOCK = 280,
     BIND = 281,
     QUAD = 282,
     SQUAD = 283,
     LONG = 284,
     SHORT = 285,
     BYTE = 286,
     SECTIONS = 287,
     PHDRS = 288,
     INSERT_K = 289,
     AFTER = 290,
     BEFORE = 291,
     DATA_SEGMENT_ALIGN = 292,
     DATA_SEGMENT_RELRO_END = 293,
     DATA_SEGMENT_END = 294,
     SORT_BY_NAME = 295,
     SORT_BY_ALIGNMENT = 296,
     SORT_BY_INIT_PRIORITY = 297,
     SIZEOF_HEADERS = 298,
     OUTPUT_FORMAT = 299,
     FORCE_COMMON_ALLOCATION = 300,
     OUTPUT_ARCH = 301,
     INHIBIT_COMMON_ALLOCATION = 302,
     SEGMENT_START = 303,
     INCLUDE = 304,
     MEMORY = 305,
     REGION_ALIAS = 306,
     LD_FEATURE = 307,
     NOLOAD = 308,
     DSECT = 309,
     COPY = 310,
     INFO = 311,
     OVERLAY = 312,
     DEFINED = 313,
     TARGET_K = 314,
     SEARCH_DIR = 315,
     MAP = 316,
     ENTRY = 317,
     NEXT = 318,
     SIZEOF = 319,
     ALIGNOF = 320,
     ADDR = 321,
     LOADADDR = 322,
     MAX_K = 323,
     MIN_K = 324,
     STARTUP = 325,
     HLL = 326,
     SYSLIB = 327,
     FLOAT = 328,
     NOFLOAT = 329,
     NOCROSSREFS = 330,
     ORIGIN = 331,
     FILL = 332,
     LENGTH = 333,
     CREATE_OBJECT_SYMBOLS = 334,
     INPUT = 335,
     GROUP = 336,
     OUTPUT = 337,
     CONSTRUCTORS = 338,
     ALIGNMOD = 339,
     AT = 340,
     SUBALIGN = 341,
     PROVIDE = 342,
     PROVIDE_HIDDEN = 343,
     AS_NEEDED = 344,
     CHIP = 345,
     LIST = 346,
     SECT = 347,
     ABSOLUTE = 348,
     LOAD = 349,
     NEWLINE = 350,
     ENDWORD = 351,
     ORDER = 352,
     NAMEWORD = 353,
     ASSERT_K = 354,
     FORMAT = 355,
     PUBLIC = 356,
     DEFSYMEND = 357,
     BASE = 358,
     ALIAS = 359,
     TRUNCATE = 360,
     REL = 361,
     INPUT_SCRIPT = 362,
     INPUT_MRI_SCRIPT = 363,
     INPUT_DEFSYM = 364,
     CASE = 365,
     EXTERN = 366,
     START = 367,
     VERS_TAG = 368,
     VERS_IDENTIFIER = 369,
     GLOBAL = 370,
     LOCAL = 371,
     VERSIONK = 372,
     INPUT_VERSION_SCRIPT = 373,
     KEEP = 374,
     ONLY_IF_RO = 375,
     ONLY_IF_RW = 376,
     SPECIAL = 377,
     INPUT_SECTION_FLAGS = 378,
     EXCLUDE_FILE = 379,
     CONSTANT = 380,
     INPUT_DYNAMIC_LIST = 381
   };
#endif
/* Tokens.  */
#define INT 258
#define NAME 259
#define LNAME 260
#define OREQ 261
#define ANDEQ 262
#define RSHIFTEQ 263
#define LSHIFTEQ 264
#define DIVEQ 265
#define MULTEQ 266
#define MINUSEQ 267
#define PLUSEQ 268
#define OROR 269
#define ANDAND 270
#define NE 271
#define EQ 272
#define GE 273
#define LE 274
#define RSHIFT 275
#define LSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define SQUAD 283
#define LONG 284
#define SHORT 285
#define BYTE 286
#define SECTIONS 287
#define PHDRS 288
#define INSERT_K 289
#define AFTER 290
#define BEFORE 291
#define DATA_SEGMENT_ALIGN 292
#define DATA_SEGMENT_RELRO_END 293
#define DATA_SEGMENT_END 294
#define SORT_BY_NAME 295
#define SORT_BY_ALIGNMENT 296
#define SORT_BY_INIT_PRIORITY 297
#define SIZEOF_HEADERS 298
#define OUTPUT_FORMAT 299
#define FORCE_COMMON_ALLOCATION 300
#define OUTPUT_ARCH 301
#define INHIBIT_COMMON_ALLOCATION 302
#define SEGMENT_START 303
#define INCLUDE 304
#define MEMORY 305
#define REGION_ALIAS 306
#define LD_FEATURE 307
#define NOLOAD 308
#define DSECT 309
#define COPY 310
#define INFO 311
#define OVERLAY 312
#define DEFINED 313
#define TARGET_K 314
#define SEARCH_DIR 315
#define MAP 316
#define ENTRY 317
#define NEXT 318
#define SIZEOF 319
#define ALIGNOF 320
#define ADDR 321
#define LOADADDR 322
#define MAX_K 323
#define MIN_K 324
#define STARTUP 325
#define HLL 326
#define SYSLIB 327
#define FLOAT 328
#define NOFLOAT 329
#define NOCROSSREFS 330
#define ORIGIN 331
#define FILL 332
#define LENGTH 333
#define CREATE_OBJECT_SYMBOLS 334
#define INPUT 335
#define GROUP 336
#define OUTPUT 337
#define CONSTRUCTORS 338
#define ALIGNMOD 339
#define AT 340
#define SUBALIGN 341
#define PROVIDE 342
#define PROVIDE_HIDDEN 343
#define AS_NEEDED 344
#define CHIP 345
#define LIST 346
#define SECT 347
#define ABSOLUTE 348
#define LOAD 349
#define NEWLINE 350
#define ENDWORD 351
#define ORDER 352
#define NAMEWORD 353
#define ASSERT_K 354
#define FORMAT 355
#define PUBLIC 356
#define DEFSYMEND 357
#define BASE 358
#define ALIAS 359
#define TRUNCATE 360
#define REL 361
#define INPUT_SCRIPT 362
#define INPUT_MRI_SCRIPT 363
#define INPUT_DEFSYM 364
#define CASE 365
#define EXTERN 366
#define START 367
#define VERS_TAG 368
#define VERS_IDENTIFIER 369
#define GLOBAL 370
#define LOCAL 371
#define VERSIONK 372
#define INPUT_VERSION_SCRIPT 373
#define KEEP 374
#define ONLY_IF_RO 375
#define ONLY_IF_RW 376
#define SPECIAL 377
#define INPUT_SECTION_FLAGS 378
#define EXCLUDE_FILE 379
#define CONSTANT 380
#define INPUT_DYNAMIC_LIST 381




/* Copy the first part of user declarations.  */
#line 24 "ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "sysdep.h"
#include "bfd.h"
#include "bfdlink.h"
#include "ld.h"
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldfile.h"
#include "ldemul.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldctor.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;
static lang_memory_region_type *region;

bfd_boolean ldgram_had_keep = FALSE;
char *ldgram_vers_current_lang = NULL;

#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 62 "ldgram.y"
{
  bfd_vma integer;
  struct big_int
    {
      bfd_vma integer;
      char *str;
    } bigint;
  fill_type *fill;
  char *name;
  const char *cname;
  struct wildcard_spec wildcard;
  struct wildcard_list *wildcard_list;
  struct name_list *name_list;
  struct flag_info_list *flag_info_list;
  struct flag_info *flag_info;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      bfd_boolean filehdr;
      bfd_boolean phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;
}
/* Line 193 of yacc.c.  */
#line 418 "ldgram.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 431 "ldgram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1887

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  150
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  364
/* YYNRULES -- Number of states.  */
#define YYNSTATES  787

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   381

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   148,     2,     2,     2,    34,    21,     2,
      37,   145,    32,    30,   143,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   144,
      24,     6,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   146,     2,   147,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,    19,    58,   149,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    20,    21,
      26,    27,    30,    34,    35,    38,    43,    45,    47,    50,
      52,    57,    62,    66,    69,    74,    78,    83,    88,    93,
      98,   103,   106,   109,   112,   117,   122,   125,   128,   131,
     134,   135,   141,   144,   145,   149,   152,   153,   155,   159,
     161,   165,   166,   168,   172,   173,   176,   178,   181,   185,
     186,   189,   192,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   218,   223,   228,   233,   242,   247,
     249,   251,   256,   257,   263,   268,   269,   275,   280,   285,
     289,   293,   300,   305,   307,   311,   314,   316,   320,   323,
     324,   330,   331,   339,   340,   347,   352,   355,   358,   359,
     364,   367,   368,   376,   378,   380,   382,   384,   390,   395,
     400,   408,   416,   424,   432,   441,   446,   448,   452,   457,
     460,   462,   466,   468,   470,   473,   477,   482,   487,   493,
     495,   496,   502,   505,   507,   509,   511,   516,   518,   523,
     528,   529,   538,   539,   545,   548,   550,   551,   553,   555,
     557,   559,   561,   563,   565,   568,   569,   571,   573,   575,
     577,   579,   581,   583,   585,   587,   589,   593,   597,   604,
     611,   613,   614,   619,   621,   622,   626,   628,   629,   637,
     638,   644,   648,   652,   653,   657,   659,   662,   664,   667,
     672,   677,   681,   685,   687,   692,   696,   697,   699,   701,
     702,   705,   709,   710,   713,   716,   720,   725,   728,   731,
     734,   738,   742,   746,   750,   754,   758,   762,   766,   770,
     774,   778,   782,   786,   790,   794,   798,   804,   808,   812,
     817,   819,   821,   826,   831,   836,   841,   846,   851,   856,
     863,   870,   877,   882,   889,   894,   896,   903,   910,   917,
     922,   927,   931,   932,   937,   938,   943,   944,   949,   950,
     952,   954,   956,   957,   958,   959,   960,   961,   962,   982,
     983,   984,   985,   986,   987,  1006,  1007,  1008,  1016,  1017,
    1023,  1025,  1027,  1029,  1031,  1033,  1037,  1038,  1041,  1045,
    1048,  1055,  1066,  1069,  1071,  1072,  1074,  1077,  1078,  1079,
    1083,  1084,  1085,  1086,  1087,  1099,  1104,  1105,  1108,  1109,
    1110,  1117,  1119,  1120,  1124,  1130,  1131,  1135,  1136,  1139,
    1141,  1144,  1149,  1152,  1153,  1156,  1157,  1163,  1165,  1168,
    1173,  1179,  1186,  1188,  1191,  1192,  1195,  1200,  1205,  1214,
    1216,  1218,  1222,  1226,  1227,  1237,  1238,  1246,  1248,  1252,
    1254,  1258,  1260,  1264,  1265
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     151,     0,    -1,   123,   167,    -1,   124,   155,    -1,   134,
     266,    -1,   142,   261,    -1,   125,   153,    -1,     4,    -1,
      -1,   154,     4,     6,   222,    -1,    -1,   156,   157,    -1,
     157,   158,   111,    -1,    -1,   106,   222,    -1,   106,   222,
     143,   222,    -1,     4,    -1,   107,    -1,   113,   160,    -1,
     112,    -1,   117,     4,     6,   222,    -1,   117,     4,   143,
     222,    -1,   117,     4,   222,    -1,   116,     4,    -1,   108,
       4,   143,   222,    -1,   108,     4,   222,    -1,   108,     4,
       6,   222,    -1,    38,     4,     6,   222,    -1,    38,     4,
     143,   222,    -1,   100,     4,     6,   222,    -1,   100,     4,
     143,   222,    -1,   109,   162,    -1,   110,   161,    -1,   114,
       4,    -1,   120,     4,   143,     4,    -1,   120,     4,   143,
       3,    -1,   119,   222,    -1,   121,     3,    -1,   126,   163,
      -1,   127,   164,    -1,    -1,    65,   152,   159,   157,    36,
      -1,   128,     4,    -1,    -1,   160,   143,     4,    -1,   160,
       4,    -1,    -1,     4,    -1,   161,   143,     4,    -1,     4,
      -1,   162,   143,     4,    -1,    -1,     4,    -1,   163,   143,
       4,    -1,    -1,   165,   166,    -1,     4,    -1,   166,     4,
      -1,   166,   143,     4,    -1,    -1,   168,   169,    -1,   169,
     170,    -1,    -1,   202,    -1,   177,    -1,   253,    -1,   213,
      -1,   214,    -1,   216,    -1,   218,    -1,   179,    -1,   268,
      -1,   144,    -1,    75,    37,     4,   145,    -1,    76,    37,
     152,   145,    -1,    98,    37,   152,   145,    -1,    60,    37,
       4,   145,    -1,    60,    37,     4,   143,     4,   143,     4,
     145,    -1,    62,    37,     4,   145,    -1,    61,    -1,    63,
      -1,    96,    37,   173,   145,    -1,    -1,    97,   171,    37,
     173,   145,    -1,    77,    37,   152,   145,    -1,    -1,    65,
     152,   172,   169,    36,    -1,    91,    37,   219,   145,    -1,
     127,    37,   164,   145,    -1,    48,    49,     4,    -1,    48,
      50,     4,    -1,    67,    37,     4,   143,     4,   145,    -1,
      68,    37,     4,   145,    -1,     4,    -1,   173,   143,     4,
      -1,   173,     4,    -1,     5,    -1,   173,   143,     5,    -1,
     173,     5,    -1,    -1,   105,    37,   174,   173,   145,    -1,
      -1,   173,   143,   105,    37,   175,   173,   145,    -1,    -1,
     173,   105,    37,   176,   173,   145,    -1,    46,    57,   178,
      58,    -1,   178,   228,    -1,   178,   179,    -1,    -1,    78,
      37,     4,   145,    -1,   200,   199,    -1,    -1,   115,   180,
      37,   222,   143,     4,   145,    -1,     4,    -1,    32,    -1,
      15,    -1,   181,    -1,   140,    37,   185,   145,   181,    -1,
      54,    37,   181,   145,    -1,    55,    37,   181,   145,    -1,
      54,    37,    55,    37,   181,   145,   145,    -1,    54,    37,
      54,    37,   181,   145,   145,    -1,    55,    37,    54,    37,
     181,   145,   145,    -1,    55,    37,    55,    37,   181,   145,
     145,    -1,    54,    37,   140,    37,   185,   145,   181,   145,
      -1,    56,    37,   181,   145,    -1,     4,    -1,   183,    21,
       4,    -1,   139,    37,   183,   145,    -1,   185,   181,    -1,
     181,    -1,   186,   201,   182,    -1,   182,    -1,     4,    -1,
     184,     4,    -1,   146,   186,   147,    -1,   184,   146,   186,
     147,    -1,   182,    37,   186,   145,    -1,   184,   182,    37,
     186,   145,    -1,   187,    -1,    -1,   135,    37,   189,   187,
     145,    -1,   200,   199,    -1,    95,    -1,   144,    -1,    99,
      -1,    54,    37,    99,   145,    -1,   188,    -1,   195,    37,
     220,   145,    -1,    93,    37,   196,   145,    -1,    -1,   115,
     191,    37,   222,   143,     4,   145,   199,    -1,    -1,    65,
     152,   192,   194,    36,    -1,   193,   190,    -1,   190,    -1,
      -1,   193,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,   220,    -1,     6,   196,    -1,    -1,    14,
      -1,    13,    -1,    12,    -1,    11,    -1,    10,    -1,     9,
      -1,     8,    -1,     7,    -1,   144,    -1,   143,    -1,     4,
       6,   220,    -1,     4,   198,   220,    -1,   103,    37,     4,
       6,   220,   145,    -1,   104,    37,     4,     6,   220,   145,
      -1,   143,    -1,    -1,    66,    57,   203,    58,    -1,   204,
      -1,    -1,   204,   201,   205,    -1,   205,    -1,    -1,     4,
     206,   210,    16,   208,   201,   209,    -1,    -1,    65,   152,
     207,   203,    36,    -1,    92,     6,   220,    -1,    94,     6,
     220,    -1,    -1,    37,   211,   145,    -1,   212,    -1,   211,
     212,    -1,     4,    -1,   148,     4,    -1,    86,    37,   152,
     145,    -1,    87,    37,   215,   145,    -1,    87,    37,   145,
      -1,   215,   201,   152,    -1,   152,    -1,    88,    37,   217,
     145,    -1,   217,   201,   152,    -1,    -1,    89,    -1,    90,
      -1,    -1,     4,   219,    -1,     4,   143,   219,    -1,    -1,
     221,   222,    -1,    31,   222,    -1,    37,   222,   145,    -1,
      79,    37,   222,   145,    -1,   148,   222,    -1,    30,   222,
      -1,   149,   222,    -1,   222,    32,   222,    -1,   222,    33,
     222,    -1,   222,    34,   222,    -1,   222,    30,   222,    -1,
     222,    31,   222,    -1,   222,    29,   222,    -1,   222,    28,
     222,    -1,   222,    23,   222,    -1,   222,    22,   222,    -1,
     222,    27,   222,    -1,   222,    26,   222,    -1,   222,    24,
     222,    -1,   222,    25,   222,    -1,   222,    21,   222,    -1,
     222,    20,   222,    -1,   222,    19,   222,    -1,   222,    15,
     222,    16,   222,    -1,   222,    18,   222,    -1,   222,    17,
     222,    -1,    74,    37,     4,   145,    -1,     3,    -1,    59,
      -1,    81,    37,     4,   145,    -1,    80,    37,     4,   145,
      -1,    82,    37,     4,   145,    -1,    83,    37,     4,   145,
      -1,   141,    37,     4,   145,    -1,   109,    37,   222,   145,
      -1,    38,    37,   222,   145,    -1,    38,    37,   222,   143,
     222,   145,    -1,    51,    37,   222,   143,   222,   145,    -1,
      52,    37,   222,   143,   222,   145,    -1,    53,    37,   222,
     145,    -1,    64,    37,     4,   143,   222,   145,    -1,    39,
      37,   222,   145,    -1,     4,    -1,    84,    37,   222,   143,
     222,   145,    -1,    85,    37,   222,   143,   222,   145,    -1,
     115,    37,   222,   143,     4,   145,    -1,    92,    37,     4,
     145,    -1,    94,    37,     4,   145,    -1,   101,    25,     4,
      -1,    -1,   101,    37,   222,   145,    -1,    -1,    38,    37,
     222,   145,    -1,    -1,   102,    37,   222,   145,    -1,    -1,
     136,    -1,   137,    -1,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,   229,   244,   224,   225,   226,   230,   227,
      57,   231,   194,    58,   232,   247,   223,   248,   197,   233,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    73,   234,   245,
     246,   224,   226,   235,    57,   236,   249,    58,   237,   247,
     223,   248,   197,   238,   201,    -1,    -1,    -1,    97,   239,
     244,   240,    57,   178,    58,    -1,    -1,    65,   152,   241,
     178,    36,    -1,    69,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    37,   242,   145,    -1,    -1,    37,   145,
      -1,   222,   243,    16,    -1,   243,    16,    -1,    40,    37,
     222,   145,   243,    16,    -1,    40,    37,   222,   145,    39,
      37,   222,   145,   243,    16,    -1,   222,    16,    -1,    16,
      -1,    -1,    91,    -1,    25,     4,    -1,    -1,    -1,   248,
      16,     4,    -1,    -1,    -1,    -1,    -1,   249,     4,   250,
      57,   194,    58,   251,   248,   197,   252,   201,    -1,    47,
      57,   254,    58,    -1,    -1,   254,   255,    -1,    -1,    -1,
       4,   256,   258,   259,   257,   144,    -1,   222,    -1,    -1,
       4,   260,   259,    -1,   101,    37,   222,   145,   259,    -1,
      -1,    37,   222,   145,    -1,    -1,   262,   263,    -1,   264,
      -1,   263,   264,    -1,    57,   265,    58,   144,    -1,   274,
     144,    -1,    -1,   267,   270,    -1,    -1,   269,   133,    57,
     270,    58,    -1,   271,    -1,   270,   271,    -1,    57,   273,
      58,   144,    -1,   129,    57,   273,    58,   144,    -1,   129,
      57,   273,    58,   272,   144,    -1,   129,    -1,   272,   129,
      -1,    -1,   274,   144,    -1,   131,    16,   274,   144,    -1,
     132,    16,   274,   144,    -1,   131,    16,   274,   144,   132,
      16,   274,   144,    -1,   130,    -1,     4,    -1,   274,   144,
     130,    -1,   274,   144,     4,    -1,    -1,   274,   144,   127,
       4,    57,   275,   274,   277,    58,    -1,    -1,   127,     4,
      57,   276,   274,   277,    58,    -1,   131,    -1,   274,   144,
     131,    -1,   132,    -1,   274,   144,   132,    -1,   127,    -1,
     274,   144,   127,    -1,    -1,   144,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   169,   170,   171,   172,   176,   180,   180,
     190,   190,   203,   204,   208,   209,   210,   213,   216,   217,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   241,   242,   244,   246,   248,   250,   252,   253,
     255,   254,   258,   260,   264,   265,   266,   270,   272,   276,
     278,   283,   284,   285,   290,   290,   295,   297,   299,   304,
     304,   310,   311,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   328,   330,   332,   335,   337,   339,
     341,   343,   345,   344,   348,   351,   350,   354,   358,   359,
     361,   363,   365,   370,   373,   376,   379,   382,   385,   389,
     388,   393,   392,   397,   396,   403,   407,   408,   409,   413,
     415,   416,   416,   424,   428,   432,   439,   446,   453,   460,
     467,   474,   481,   488,   495,   502,   511,   529,   550,   563,
     572,   583,   592,   603,   612,   621,   625,   634,   638,   646,
     648,   647,   654,   655,   659,   660,   665,   670,   671,   676,
     680,   680,   684,   683,   690,   691,   694,   696,   700,   702,
     704,   706,   708,   713,   720,   722,   726,   728,   730,   732,
     734,   736,   738,   740,   745,   745,   750,   754,   762,   766,
     774,   774,   778,   781,   781,   784,   785,   790,   789,   795,
     794,   801,   809,   817,   818,   822,   823,   827,   829,   834,
     839,   840,   845,   847,   853,   855,   857,   861,   863,   869,
     872,   881,   892,   892,   898,   900,   902,   904,   906,   908,
     911,   913,   915,   917,   919,   921,   923,   925,   927,   929,
     931,   933,   935,   937,   939,   941,   943,   945,   947,   949,
     951,   953,   956,   958,   960,   962,   964,   966,   968,   970,
     972,   974,   976,   978,   987,   989,   991,   993,   995,   997,
     999,  1005,  1006,  1010,  1011,  1015,  1016,  1020,  1021,  1025,
    1026,  1027,  1028,  1031,  1035,  1038,  1044,  1046,  1031,  1053,
    1055,  1057,  1062,  1064,  1052,  1074,  1076,  1074,  1082,  1081,
    1088,  1089,  1090,  1091,  1092,  1096,  1097,  1098,  1102,  1103,
    1108,  1109,  1114,  1115,  1120,  1121,  1126,  1128,  1133,  1136,
    1149,  1153,  1158,  1160,  1151,  1168,  1171,  1173,  1177,  1178,
    1177,  1187,  1232,  1235,  1247,  1256,  1259,  1266,  1266,  1278,
    1279,  1283,  1287,  1296,  1296,  1310,  1310,  1320,  1321,  1325,
    1329,  1333,  1340,  1344,  1352,  1355,  1359,  1363,  1367,  1374,
    1378,  1382,  1386,  1391,  1390,  1404,  1403,  1413,  1417,  1421,
    1425,  1429,  1433,  1439,  1441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NAME", "LNAME", "'='", "OREQ",
  "ANDEQ", "RSHIFTEQ", "LSHIFTEQ", "DIVEQ", "MULTEQ", "MINUSEQ", "PLUSEQ",
  "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "NE", "EQ", "'<'",
  "'>'", "GE", "LE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND", "QUAD", "SQUAD",
  "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "INSERT_K", "AFTER",
  "BEFORE", "DATA_SEGMENT_ALIGN", "DATA_SEGMENT_RELRO_END",
  "DATA_SEGMENT_END", "SORT_BY_NAME", "SORT_BY_ALIGNMENT",
  "SORT_BY_INIT_PRIORITY", "'{'", "'}'", "SIZEOF_HEADERS", "OUTPUT_FORMAT",
  "FORCE_COMMON_ALLOCATION", "OUTPUT_ARCH", "INHIBIT_COMMON_ALLOCATION",
  "SEGMENT_START", "INCLUDE", "MEMORY", "REGION_ALIAS", "LD_FEATURE",
  "NOLOAD", "DSECT", "COPY", "INFO", "OVERLAY", "DEFINED", "TARGET_K",
  "SEARCH_DIR", "MAP", "ENTRY", "NEXT", "SIZEOF", "ALIGNOF", "ADDR",
  "LOADADDR", "MAX_K", "MIN_K", "STARTUP", "HLL", "SYSLIB", "FLOAT",
  "NOFLOAT", "NOCROSSREFS", "ORIGIN", "FILL", "LENGTH",
  "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT", "CONSTRUCTORS",
  "ALIGNMOD", "AT", "SUBALIGN", "PROVIDE", "PROVIDE_HIDDEN", "AS_NEEDED",
  "CHIP", "LIST", "SECT", "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD",
  "ORDER", "NAMEWORD", "ASSERT_K", "FORMAT", "PUBLIC", "DEFSYMEND", "BASE",
  "ALIAS", "TRUNCATE", "REL", "INPUT_SCRIPT", "INPUT_MRI_SCRIPT",
  "INPUT_DEFSYM", "CASE", "EXTERN", "START", "VERS_TAG", "VERS_IDENTIFIER",
  "GLOBAL", "LOCAL", "VERSIONK", "INPUT_VERSION_SCRIPT", "KEEP",
  "ONLY_IF_RO", "ONLY_IF_RW", "SPECIAL", "INPUT_SECTION_FLAGS",
  "EXCLUDE_FILE", "CONSTANT", "INPUT_DYNAMIC_LIST", "','", "';'", "')'",
  "'['", "']'", "'!'", "'~'", "$accept", "file", "filename", "defsym_expr",
  "@1", "mri_script_file", "@2", "mri_script_lines", "mri_script_command",
  "@3", "ordernamelist", "mri_load_name_list", "mri_abs_name_list",
  "casesymlist", "extern_name_list", "@4", "extern_name_list_body",
  "script_file", "@5", "ifile_list", "ifile_p1", "@6", "@7", "input_list",
  "@8", "@9", "@10", "sections", "sec_or_group_p1", "statement_anywhere",
  "@11", "wildcard_name", "wildcard_spec", "sect_flag_list", "sect_flags",
  "exclude_name_list", "file_NAME_list", "input_section_spec_no_keep",
  "input_section_spec", "@12", "statement", "@13", "@14", "statement_list",
  "statement_list_opt", "length", "fill_exp", "fill_opt", "assign_op",
  "end", "assignment", "opt_comma", "memory", "memory_spec_list_opt",
  "memory_spec_list", "memory_spec", "@15", "@16", "origin_spec",
  "length_spec", "attributes_opt", "attributes_list", "attributes_string",
  "startup", "high_level_library", "high_level_library_NAME_list",
  "low_level_library", "low_level_library_NAME_list",
  "floating_point_support", "nocrossref_list", "mustbe_exp", "@17", "exp",
  "memspec_at_opt", "opt_at", "opt_align", "opt_subalign",
  "sect_constraint", "section", "@18", "@19", "@20", "@21", "@22", "@23",
  "@24", "@25", "@26", "@27", "@28", "@29", "@30", "type", "atype",
  "opt_exp_with_type", "opt_exp_without_type", "opt_nocrossrefs",
  "memspec_opt", "phdr_opt", "overlay_section", "@31", "@32", "@33",
  "phdrs", "phdr_list", "phdr", "@34", "@35", "phdr_type",
  "phdr_qualifiers", "phdr_val", "dynamic_list_file", "@36",
  "dynamic_list_nodes", "dynamic_list_node", "dynamic_list_tag",
  "version_script_file", "@37", "version", "@38", "vers_nodes",
  "vers_node", "verdep", "vers_tag", "vers_defns", "@39", "@40",
  "opt_semicolon", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    61,   261,   262,   263,
     264,   265,   266,   267,   268,    63,    58,   269,   270,   124,
      94,    38,   271,   272,    60,    62,   273,   274,   275,   276,
      43,    45,    42,    47,    37,   277,   278,    40,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   123,   125,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    44,    59,    41,    91,    93,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   150,   151,   151,   151,   151,   151,   152,   154,   153,
     156,   155,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     159,   158,   158,   158,   160,   160,   160,   161,   161,   162,
     162,   163,   163,   163,   165,   164,   166,   166,   166,   168,
     167,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   170,   170,   172,   170,   170,   170,   170,
     170,   170,   170,   173,   173,   173,   173,   173,   173,   174,
     173,   175,   173,   176,   173,   177,   178,   178,   178,   179,
     179,   180,   179,   181,   181,   181,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   184,   185,
     185,   186,   186,   187,   187,   187,   187,   187,   187,   188,
     189,   188,   190,   190,   190,   190,   190,   190,   190,   190,
     191,   190,   192,   190,   193,   193,   194,   194,   195,   195,
     195,   195,   195,   196,   197,   197,   198,   198,   198,   198,
     198,   198,   198,   198,   199,   199,   200,   200,   200,   200,
     201,   201,   202,   203,   203,   204,   204,   206,   205,   207,
     205,   208,   209,   210,   210,   211,   211,   212,   212,   213,
     214,   214,   215,   215,   216,   217,   217,   218,   218,   219,
     219,   219,   221,   220,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   223,   223,   224,   224,   225,   225,   226,   226,   227,
     227,   227,   227,   229,   230,   231,   232,   233,   228,   234,
     235,   236,   237,   238,   228,   239,   240,   228,   241,   228,
     242,   242,   242,   242,   242,   243,   243,   243,   244,   244,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   250,   251,   252,   249,   253,   254,   254,   256,   257,
     255,   258,   259,   259,   259,   260,   260,   262,   261,   263,
     263,   264,   265,   267,   266,   269,   268,   270,   270,   271,
     271,   271,   272,   272,   273,   273,   273,   273,   273,   274,
     274,   274,   274,   275,   274,   276,   274,   274,   274,   274,
     274,   274,   274,   277,   277
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     1,     0,     4,
       0,     2,     3,     0,     2,     4,     1,     1,     2,     1,
       4,     4,     3,     2,     4,     3,     4,     4,     4,     4,
       4,     2,     2,     2,     4,     4,     2,     2,     2,     2,
       0,     5,     2,     0,     3,     2,     0,     1,     3,     1,
       3,     0,     1,     3,     0,     2,     1,     2,     3,     0,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     8,     4,     1,
       1,     4,     0,     5,     4,     0,     5,     4,     4,     3,
       3,     6,     4,     1,     3,     2,     1,     3,     2,     0,
       5,     0,     7,     0,     6,     4,     2,     2,     0,     4,
       2,     0,     7,     1,     1,     1,     1,     5,     4,     4,
       7,     7,     7,     7,     8,     4,     1,     3,     4,     2,
       1,     3,     1,     1,     2,     3,     4,     4,     5,     1,
       0,     5,     2,     1,     1,     1,     4,     1,     4,     4,
       0,     8,     0,     5,     2,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     6,
       1,     0,     4,     1,     0,     3,     1,     0,     7,     0,
       5,     3,     3,     0,     3,     1,     2,     1,     2,     4,
       4,     3,     3,     1,     4,     3,     0,     1,     1,     0,
       2,     3,     0,     2,     2,     3,     4,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     6,
       6,     6,     4,     6,     4,     1,     6,     6,     6,     4,
       4,     3,     0,     4,     0,     4,     0,     4,     0,     1,
       1,     1,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    18,     0,     0,     7,     0,     5,
       1,     1,     1,     1,     1,     3,     0,     2,     3,     2,
       6,    10,     2,     1,     0,     1,     2,     0,     0,     3,
       0,     0,     0,     0,    11,     4,     0,     2,     0,     0,
       6,     1,     0,     3,     5,     0,     3,     0,     2,     1,
       2,     4,     2,     0,     2,     0,     5,     1,     2,     4,
       5,     6,     1,     2,     0,     2,     4,     4,     8,     1,
       1,     3,     3,     0,     9,     0,     7,     1,     3,     1,
       3,     1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    59,    10,     8,   333,   327,     0,     2,    62,     3,
      13,     6,     0,     4,     0,     5,     0,     1,    60,    11,
       0,   344,     0,   334,   337,     0,   328,   329,     0,     0,
       0,     0,     0,    79,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   208,     0,
       0,    82,     0,     0,     0,   111,     0,    72,    61,    64,
      70,     0,    63,    66,    67,    68,    69,    65,    71,     0,
      16,     0,     0,     0,     0,    17,     0,     0,     0,    19,
      46,     0,     0,     0,     0,     0,     0,    51,    54,     0,
       0,     0,   350,   361,   349,   357,   359,     0,     0,   344,
     338,   357,   359,     0,     0,   330,   212,   173,   172,   171,
     170,   169,   168,   167,   166,   212,   108,   316,     0,     0,
       0,     0,     7,    85,   184,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   209,     0,     0,     0,     0,     0,
       0,    54,   175,   174,   110,     0,     0,    40,     0,   240,
     255,     0,     0,     0,     0,     0,     0,     0,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    49,    31,
      47,    32,    18,    33,    23,     0,    36,     0,    37,    52,
      38,    39,     0,    42,    12,     9,     0,     0,     0,     0,
     345,     0,     0,   332,   176,     0,   177,     0,     0,    89,
      90,     0,     0,    62,   187,     0,     0,   181,   186,     0,
       0,     0,     0,     0,     0,     0,   201,   203,   181,   181,
     209,     0,    93,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,   218,   214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    45,     0,     0,
       0,    22,     0,     0,    56,    55,   355,     0,     0,   339,
     352,   362,   351,   358,   360,     0,   331,   213,   273,   105,
       0,   279,   285,   107,   106,   318,   315,   317,     0,    76,
      78,   335,   193,   189,   182,   180,     0,     0,    92,    73,
      74,    84,   109,   199,   200,     0,   204,     0,   209,   210,
      87,    99,    95,    98,     0,     0,    81,     0,    75,   212,
     212,     0,    88,     0,    27,    28,    43,    29,    30,   215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   237,   235,   234,   233,   228,   227,   231,   232,   230,
     229,   226,   225,   223,   224,   220,   221,   222,    15,    26,
      24,    50,    48,    44,    20,    21,    35,    34,    53,    57,
       0,     0,   346,   347,     0,   342,   340,     0,   296,   288,
       0,   296,     0,     0,    86,     0,     0,   184,   185,     0,
     202,   205,   211,     0,   103,    94,    97,     0,    83,     0,
       0,     0,   336,    41,     0,   248,   254,     0,     0,   252,
       0,   239,   216,   243,   242,   244,   245,     0,     0,   259,
     260,   247,     0,   246,     0,    58,   363,   360,   353,   343,
     341,     0,     0,   296,     0,   264,   108,   303,     0,   304,
     286,   321,   322,     0,   197,     0,     0,   195,     0,     0,
      91,     0,     0,   101,   178,   179,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   364,     0,     0,     0,   290,
     291,   292,   293,   294,   297,     0,     0,     0,     0,   299,
       0,   266,     0,   302,   305,   264,     0,   325,     0,   319,
       0,   198,   194,   196,     0,   181,   190,   100,     0,     0,
     112,   249,   250,   251,   253,   256,   257,   258,   356,     0,
     363,   295,     0,   298,     0,     0,   268,   289,   268,   108,
       0,   322,     0,     0,    77,   212,     0,   104,     0,   348,
       0,   296,     0,     0,     0,   274,   280,     0,     0,   323,
       0,   320,   191,     0,   188,   102,   354,     0,     0,   263,
       0,     0,   272,     0,   287,   326,   322,   212,     0,   300,
     265,     0,   269,   270,   271,     0,   281,   324,   192,     0,
     267,   275,   310,   296,   156,     0,     0,   133,   115,   114,
     158,   159,   160,   161,   162,     0,     0,     0,     0,     0,
     143,   145,   150,     0,     0,     0,   144,     0,   116,     0,
       0,   139,   147,   155,   157,     0,     0,     0,   311,   282,
     301,     0,     0,     0,   152,   212,     0,   140,     0,     0,
     113,     0,   132,   181,     0,   134,     0,     0,   154,   276,
     212,   142,     0,   307,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,     0,   163,     0,     0,   126,     0,
     130,     0,     0,   135,     0,   181,   181,     0,   307,     0,
     156,     0,   262,     0,     0,   146,     0,   118,     0,     0,
     119,   125,     0,   149,     0,   113,     0,     0,   128,     0,
     129,   131,   137,   136,   181,   262,   148,     0,   306,     0,
     308,     0,     0,     0,     0,     0,   153,     0,   141,   127,
     117,   138,   308,   312,     0,   165,     0,     0,     0,     0,
       0,     0,   165,   308,   261,   212,     0,   283,   121,   120,
       0,   122,   123,     0,   277,   165,   164,   309,   181,   124,
     151,   181,   313,   284,   278,   181,   314
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,   123,    11,    12,     9,    10,    19,    90,   245,
     182,   181,   179,   190,   191,   192,   305,     7,     8,    18,
      58,   136,   213,   235,   443,   549,   502,    59,   207,   323,
     140,   648,   649,   699,   650,   701,   673,   651,   652,   697,
     653,   666,   693,   654,   655,   656,   694,   767,   115,   144,
      61,   704,    62,   216,   217,   218,   332,   437,   545,   594,
     436,   496,   497,    63,    64,   228,    65,   229,    66,   231,
     695,   205,   250,   740,   531,   566,   585,   615,   324,   428,
     602,   624,   708,   781,   430,   603,   622,   683,   778,   431,
     536,   486,   525,   484,   485,   489,   535,   712,   755,   625,
     682,   763,   785,    67,   208,   327,   432,   573,   492,   539,
     571,    15,    16,    26,    27,   103,    13,    14,    68,    69,
      23,    24,   427,    97,    98,   518,   421,   516
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -714
static const yytype_int16 yypact[] =
{
     247,  -714,  -714,  -714,  -714,  -714,    79,  -714,  -714,  -714,
    -714,  -714,    81,  -714,   -24,  -714,    35,  -714,   907,  1618,
     112,   103,    67,   -24,  -714,   109,    35,  -714,  1006,    70,
      75,   188,   105,  -714,   148,  -714,   150,   171,   155,   195,
     205,   213,   217,   221,   224,   235,   239,  -714,  -714,   245,
     250,  -714,   256,   265,   271,  -714,   278,  -714,  -714,  -714,
    -714,   189,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   162,
    -714,   313,   150,   318,   754,  -714,   321,   326,   330,  -714,
    -714,   333,   336,   345,   754,   347,   350,   359,  -714,   360,
     254,   754,  -714,   365,  -714,   369,   371,   332,   232,   103,
    -714,  -714,  -714,   334,   244,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   387,   391,
     393,   394,  -714,  -714,    43,   397,   398,   399,   150,   150,
     402,   150,     4,  -714,   403,    41,   372,   150,   404,   410,
     378,  -714,  -714,  -714,  -714,   373,    32,  -714,    45,  -714,
    -714,   754,   754,   754,   379,   392,   395,   400,   405,  -714,
     414,   423,   424,   425,   426,   428,   430,   432,   433,   435,
     436,   437,   438,   439,   754,   754,  1432,   508,  -714,   285,
    -714,   291,    17,  -714,  -714,   595,  1795,   292,  -714,  -714,
     293,  -714,   446,  -714,  -714,  1795,   382,   109,   109,   296,
     117,   383,   335,   117,  -714,   754,  -714,   258,    46,  -714,
    -714,   -28,   319,  -714,  -714,   150,   419,    -2,  -714,   337,
     339,   342,   343,   348,   349,   352,  -714,  -714,   100,   108,
      25,   354,  -714,  -714,   444,    14,    41,   357,   476,   489,
     754,   363,   -24,   754,   754,  -714,   754,   754,  -714,  -714,
    1045,   754,   754,   754,   754,   754,   497,   500,   754,   509,
     514,   516,   517,   754,   754,   521,   522,   754,   754,   525,
    -714,  -714,   754,   754,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,  1795,   528,   529,  -714,   531,   754,
     754,  1795,   356,   532,  -714,    39,  -714,   396,   406,  -714,
    -714,   533,  -714,  -714,  -714,   -64,  -714,  1795,  1006,  -714,
     150,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   537,  -714,
    -714,   223,   506,  -714,  -714,  -714,    43,   540,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,   150,  -714,   150,   403,  -714,
    -714,  -714,  -714,  -714,   511,    48,  -714,    18,  -714,  -714,
    -714,  1452,  -714,    36,  1795,  1795,  1641,  1795,  1795,  -714,
     916,  1065,  1472,  1492,  1085,   408,   407,  1105,   409,   418,
     421,   429,  1512,  1532,   434,   440,  1125,  1559,   441,  1755,
    1639,  1811,  1826,  1840,  1853,   999,   999,   390,   390,   390,
     390,   314,   314,   163,   163,  -714,  -714,  -714,  1795,  1795,
    1795,  -714,  -714,  -714,  1795,  1795,  -714,  -714,  -714,  -714,
     545,   109,   133,   117,   496,  -714,  -714,   -48,   633,  -714,
     716,   633,   754,   412,  -714,     2,   552,    43,  -714,   449,
    -714,  -714,  -714,    41,  -714,  -714,  -714,   534,  -714,   450,
     458,   569,  -714,  -714,   754,  -714,  -714,   754,   754,  -714,
     754,  -714,  -714,  -714,  -714,  -714,  -714,   754,   754,  -714,
    -714,  -714,   571,  -714,   754,  -714,   460,   561,  -714,  -714,
    -714,   374,   541,  1667,   564,   480,  -714,  -714,  1775,   492,
    -714,  1795,    28,   580,  -714,   601,     3,  -714,   515,   570,
    -714,    31,    41,  -714,  -714,  -714,   465,  1145,  1174,  1194,
    1214,  1234,  1254,   467,  1795,   117,   557,   109,   109,  -714,
    -714,  -714,  -714,  -714,  -714,   471,   754,   234,   602,  -714,
     582,   583,   413,  -714,  -714,   480,   563,   590,   591,  -714,
     484,  -714,  -714,  -714,   624,   488,  -714,  -714,    78,    41,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,   491,
     460,  -714,  1274,  -714,   754,   603,   539,  -714,   539,  -714,
     754,    28,   754,   495,  -714,  -714,   548,  -714,    86,   117,
     585,   236,  1303,   754,   607,  -714,  -714,   427,  1323,  -714,
    1343,  -714,  -714,   639,  -714,  -714,  -714,   613,   636,  -714,
    1363,   754,   130,   598,  -714,  -714,    28,  -714,   754,  -714,
    -714,  1383,  -714,  -714,  -714,   604,  -714,  -714,  -714,  1403,
    -714,  -714,  -714,   621,   817,    51,   644,   877,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,   625,   628,   629,   150,   630,
    -714,  -714,  -714,   631,   645,   646,  -714,    84,  -714,   651,
      12,  -714,  -714,  -714,   817,   623,   653,   189,  -714,  -714,
    -714,   242,   320,    82,  -714,  -714,   654,  -714,   689,    82,
    -714,   657,  -714,   -45,    84,   658,    84,   659,  -714,  -714,
    -714,  -714,   641,   674,   663,   664,   558,   665,   560,   669,
     671,   566,   576,   817,   577,  -714,   754,    16,  -714,   -12,
    -714,    22,    80,  -714,    84,   135,   -17,    84,   674,   578,
     817,   705,   627,    82,    82,  -714,    82,  -714,    82,    82,
    -714,  -714,   688,  -714,  1579,   581,   584,   726,  -714,    82,
    -714,  -714,  -714,  -714,   149,   627,  -714,   673,  -714,   708,
    -714,   589,   592,    26,   594,   596,  -714,   731,  -714,  -714,
    -714,  -714,  -714,  -714,   736,   104,   600,   605,    82,   606,
     611,   614,   104,  -714,  -714,  -714,   745,  -714,  -714,  -714,
     615,  -714,  -714,   189,  -714,   104,  -714,  -714,   488,  -714,
    -714,   488,  -714,  -714,  -714,   488,  -714
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -714,  -714,   -68,  -714,  -714,  -714,  -714,   507,  -714,  -714,
    -714,  -714,  -714,  -714,   620,  -714,  -714,  -714,  -714,   549,
    -714,  -714,  -714,  -221,  -714,  -714,  -714,  -714,  -444,   -13,
    -714,  -105,  -308,  -714,  -714,    47,  -601,    68,  -714,  -714,
     110,  -714,  -714,  -714,  -653,  -714,     1,  -713,  -714,  -629,
    -565,  -216,  -714,   340,  -714,   442,  -714,  -714,  -714,  -714,
    -714,  -714,   274,  -714,  -714,  -714,  -714,  -714,  -714,  -205,
    -104,  -714,   -74,    37,   238,  -714,   203,  -714,  -714,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,
    -714,  -714,  -714,  -459,   355,  -714,  -714,    71,  -676,  -714,
    -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -714,  -532,
    -714,  -714,  -714,  -714,   750,  -714,  -714,  -714,  -714,  -714,
     546,   -20,  -714,   684,   -11,  -714,  -714,   227
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -336
static const yytype_int16 yytable[] =
{
     176,   336,   204,   100,   147,    60,   494,   494,   122,   727,
     186,   206,   345,   347,   104,   357,   675,   195,   352,   353,
     725,   297,   352,   353,   528,   349,   670,   628,   681,   230,
     670,   628,   537,    21,  -183,   352,   353,   628,   243,   589,
     722,   628,   532,   419,   629,   232,   233,   214,   629,   774,
     325,   246,   445,   446,   629,   658,  -183,   737,   629,   657,
     222,   223,   782,   225,   227,   425,   671,   636,   637,   237,
     671,   636,   637,   705,   617,   706,   762,   248,   249,    17,
     426,   479,   352,   353,   670,    20,   670,   775,   670,   657,
     352,   353,    25,    21,   452,   628,   480,   628,   335,   628,
     270,   271,   703,   294,   326,    22,   734,    92,   215,   659,
     765,   301,   629,    92,   629,   328,   629,   329,    91,   354,
     766,   310,   598,   354,    99,   587,   335,   116,   657,   538,
     733,   317,   117,   728,   684,   685,   354,   310,   671,   636,
     637,   335,   120,   442,   780,   657,   234,   333,   542,   226,
     495,   495,   645,   447,   122,   644,   645,   355,   676,   356,
     298,   355,   647,   448,   626,    22,   361,   729,   348,   364,
     365,   758,   367,   368,   355,   244,   547,   370,   371,   372,
     373,   374,   420,   354,   377,   121,   307,   308,   247,   382,
     383,   354,   125,   386,   387,   288,   289,   290,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     687,   355,   501,   577,   645,   414,   415,    28,   124,   355,
      93,   595,   126,    94,    95,    96,    93,   118,   119,    94,
     101,   102,   127,   335,   311,   344,   670,   312,   313,   314,
     128,   335,   429,   346,   129,   449,   450,   628,   130,   434,
     311,   131,   318,   312,   313,   477,   612,   613,   614,    29,
      30,    31,   132,   527,   629,   597,   133,   440,   335,   441,
     732,   548,   134,    32,    33,    34,    35,   135,    36,    37,
      38,    39,   335,   137,   751,   145,   684,   685,    40,    41,
      42,    43,   138,   519,   520,   521,   522,   523,   139,    44,
      45,    46,    47,    48,    49,   141,   319,   146,    60,    50,
      51,    52,   148,   320,   670,   177,    53,    54,   578,   576,
     178,   321,   142,   143,   180,   628,    43,   183,    55,   672,
     184,   686,   677,   100,   286,   287,   288,   289,   290,   185,
      56,   187,   629,   188,   483,   322,   488,   483,   491,   416,
     417,    53,    54,   189,   193,   194,   672,    57,   672,   196,
       1,     2,     3,    55,   689,   690,   200,   149,   150,   524,
     507,     4,   687,   508,   509,   197,   510,   198,   203,     5,
     199,   209,   202,   511,   512,   210,   731,   211,   212,   672,
     514,   219,   220,   221,   151,   152,   224,   230,   238,   236,
     476,   153,   154,   155,   239,   240,   251,   318,   284,   285,
     286,   287,   288,   289,   290,   156,   157,   158,   295,   252,
     242,   318,   253,   159,   296,   302,   303,   254,   160,   306,
     309,   315,   255,   519,   520,   521,   522,   523,   161,   567,
     304,   256,   562,   162,   163,   164,   165,   166,   167,   168,
     257,   258,   259,   260,   330,   261,   169,   262,   170,   263,
     264,   592,   265,   266,   267,   268,   269,   334,   320,   316,
     337,   351,   359,   171,   338,   604,   321,   339,   340,   172,
     582,    43,   320,   341,   342,   360,   588,   343,   590,   350,
     321,   375,   358,   618,   376,    43,   559,   560,   362,   600,
     322,   149,   150,   378,   292,   173,    53,    54,   379,   524,
     380,   381,   174,   175,   322,   384,   385,   611,    55,   388,
      53,    54,   411,   412,   619,   413,   418,   424,   151,   152,
     422,   433,    55,   435,   439,   153,   154,   155,   444,   475,
     423,   460,   461,   478,   463,   493,   688,   691,   692,   156,
     157,   158,   783,   464,   700,   784,   465,   159,   498,   786,
     664,   503,   160,   506,   466,   513,   709,   517,   526,   469,
     529,   530,   161,   534,   540,   470,   473,   162,   163,   164,
     165,   166,   167,   168,   500,   504,   730,   688,   149,   150,
     169,   299,   170,   505,   515,   541,   546,   544,   741,   742,
     550,   700,   557,   744,   745,   558,   561,   171,   563,   564,
     569,   565,   724,   172,   750,   151,   152,   570,   572,   574,
     575,   335,   153,   154,   155,   579,   149,   150,   730,   591,
     583,   584,   593,   596,   601,   607,   156,   157,   158,   173,
     608,   293,   609,   770,   159,   616,   174,   175,   527,   160,
     660,   621,   661,   151,   152,   662,   663,   665,   667,   161,
     481,   154,   155,   482,   162,   163,   164,   165,   166,   167,
     168,   679,   668,   669,   156,   157,   158,   169,   674,   170,
     680,   696,   159,   698,   702,  -113,   707,   160,   710,   711,
     713,   714,   716,   715,   171,   717,   718,   161,   719,   738,
     172,   720,   162,   163,   164,   165,   166,   167,   168,   149,
     150,   721,   723,   736,   746,   169,  -133,   170,   739,   748,
     749,   753,   487,   754,   756,   761,   173,   757,   300,   759,
     764,   760,   171,   174,   175,   768,   151,   152,   172,   777,
     769,   771,   366,   153,   154,   155,   772,   149,   150,   773,
     779,   241,   331,   743,   678,   726,   776,   156,   157,   158,
     543,   586,   752,   568,   173,   159,   105,   499,   438,   735,
     160,   174,   175,   201,   151,   152,   490,   580,   363,     0,
     161,   153,   154,   155,     0,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,   156,   157,   158,   169,     0,
     170,     0,     0,   159,     0,     0,     0,     0,   160,     0,
       0,   627,     0,     0,     0,   171,     0,     0,   161,     0,
       0,   172,   628,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,   169,     0,   170,   629,
       0,     0,     0,     0,     0,     0,     0,   173,   630,   631,
     632,   633,   634,   171,   174,   175,     0,     0,     0,   172,
       0,   635,   636,   637,     0,     0,     0,     0,     0,     0,
       0,     0,   638,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,   173,     0,     0,     0,     0,
       0,     0,   174,   175,     0,     0,     0,     0,     0,     0,
     639,    28,   640,     0,  -113,     0,   641,     0,     0,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,   642,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,     0,   643,    29,    30,    31,   644,   645,     0,     0,
       0,   646,     0,   647,     0,     0,     0,    32,    33,    34,
      35,     0,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,     0,
       0,     0,     0,    50,    51,    52,     0,     0,     0,     0,
      53,    54,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,    55,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,    56,     0,     0,     0,     0,     0,
    -335,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,   454,
     272,   455,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
     369,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   272,
     456,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   272,
     459,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   272,
     462,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   272,
     471,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   272,
     551,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,   552,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   272,   553,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   272,   554,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   272,   555,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   272,   556,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   272,   581,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   272,   599,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   272,   605,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   272,   606,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   272,   610,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   272,   620,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   272,   623,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,     0,     0,     0,
       0,     0,     0,     0,   272,   291,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   272,   451,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,     0,   457,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   458,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,    71,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,     0,   468,     0,   453,     0,    71,
       0,     0,   272,    72,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   472,     0,   527,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,   747,     0,    74,    75,    76,    77,    78,   -43,
      79,    80,    81,     0,    82,    83,     0,    84,    85,    86,
       0,    73,     0,     0,    87,    88,    89,    74,    75,    76,
      77,    78,     0,    79,    80,    81,     0,    82,    83,     0,
      84,    85,    86,     0,     0,     0,     0,    87,    88,    89,
     272,   474,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,   533,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290
};

static const yytype_int16 yycheck[] =
{
      74,   217,   106,    23,    72,    18,     4,     4,     4,    21,
      84,   115,   228,   229,    25,   236,     4,    91,     4,     5,
       4,     4,     4,     5,   483,   230,     4,    15,   657,     4,
       4,    15,     4,    57,    36,     4,     5,    15,     6,   571,
     693,    15,   486,     4,    32,     4,     5,     4,    32,   762,
       4,     6,     4,     5,    32,     4,    58,   710,    32,   624,
     128,   129,   775,   131,   132,   129,    54,    55,    56,   137,
      54,    55,    56,   674,   606,   676,   752,   151,   152,     0,
     144,   129,     4,     5,     4,     4,     4,   763,     4,   654,
       4,     5,    57,    57,    58,    15,   144,    15,   143,    15,
     174,   175,   147,   177,    58,   129,   707,     4,    65,    58,
       6,   185,    32,     4,    32,   143,    32,   145,     6,   105,
      16,     4,   581,   105,    57,   569,   143,    57,   693,   101,
     147,   205,    57,   145,    54,    55,   105,     4,    54,    55,
      56,   143,    37,   348,   773,   710,   105,   215,   145,   145,
     148,   148,   140,   105,     4,   139,   140,   143,   146,   145,
     143,   143,   146,   145,   623,   129,   240,   145,   143,   243,
     244,   145,   246,   247,   143,   143,   145,   251,   252,   253,
     254,   255,   143,   105,   258,    37,   197,   198,   143,   263,
     264,   105,    37,   267,   268,    32,    33,    34,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     140,   143,   443,   145,   140,   299,   300,     4,    57,   143,
     127,   145,    37,   130,   131,   132,   127,    49,    50,   130,
     131,   132,    37,   143,   127,   145,     4,   130,   131,   132,
      37,   143,   320,   145,    37,   359,   360,    15,    37,    36,
     127,    37,     4,   130,   131,   132,   136,   137,   138,    46,
      47,    48,    37,    37,    32,    39,    37,   345,   143,   347,
     145,   502,    37,    60,    61,    62,    63,    37,    65,    66,
      67,    68,   143,    37,   145,   133,    54,    55,    75,    76,
      77,    78,    37,    69,    70,    71,    72,    73,    37,    86,
      87,    88,    89,    90,    91,    37,    58,     4,   331,    96,
      97,    98,     4,    65,     4,     4,   103,   104,   549,   545,
       4,    73,   143,   144,     4,    15,    78,     4,   115,   647,
       4,    99,   650,   363,    30,    31,    32,    33,    34,     4,
     127,     4,    32,     3,   428,    97,   430,   431,   432,     3,
       4,   103,   104,     4,     4,   111,   674,   144,   676,     4,
     123,   124,   125,   115,    54,    55,   144,     3,     4,   145,
     454,   134,   140,   457,   458,    16,   460,    16,   144,   142,
      58,     4,    58,   467,   468,     4,   704,     4,     4,   707,
     474,     4,     4,     4,    30,    31,     4,     4,     4,    37,
     421,    37,    38,    39,     4,    37,    37,     4,    28,    29,
      30,    31,    32,    33,    34,    51,    52,    53,   143,    37,
      57,     4,    37,    59,   143,   143,   143,    37,    64,    57,
     144,    58,    37,    69,    70,    71,    72,    73,    74,    36,
       4,    37,   526,    79,    80,    81,    82,    83,    84,    85,
      37,    37,    37,    37,   145,    37,    92,    37,    94,    37,
      37,   575,    37,    37,    37,    37,    37,    58,    65,   144,
     143,    37,     6,   109,   145,    58,    73,   145,   145,   115,
     564,    78,    65,   145,   145,     6,   570,   145,   572,   145,
      73,     4,   145,   607,     4,    78,   517,   518,   145,   583,
      97,     3,     4,     4,     6,   141,   103,   104,     4,   145,
       4,     4,   148,   149,    97,     4,     4,   601,   115,     4,
     103,   104,     4,     4,   608,     4,     4,     4,    30,    31,
     144,     4,   115,    37,     4,    37,    38,    39,    37,     4,
     144,   143,   145,    57,   145,   143,   661,   662,   663,    51,
      52,    53,   778,   145,   669,   781,   145,    59,    16,   785,
     638,    37,    64,     4,   145,     4,   680,    16,    37,   145,
      16,   101,    74,    91,     4,   145,   145,    79,    80,    81,
      82,    83,    84,    85,   145,   145,   701,   702,     3,     4,
      92,     6,    94,   145,   144,     4,    36,    92,   713,   714,
     145,   716,   145,   718,   719,    58,   145,   109,    16,    37,
      57,    38,   696,   115,   729,    30,    31,    37,    37,   145,
       6,   143,    37,    38,    39,   144,     3,     4,   743,   144,
      37,   102,    94,    58,    37,     6,    51,    52,    53,   141,
      37,   143,    16,   758,    59,    57,   148,   149,    37,    64,
      16,    57,    37,    30,    31,    37,    37,    37,    37,    74,
      37,    38,    39,    40,    79,    80,    81,    82,    83,    84,
      85,    58,    37,    37,    51,    52,    53,    92,    37,    94,
      37,    37,    59,     4,    37,    37,    37,    64,    57,    25,
      37,    37,    37,   145,   109,   145,    37,    74,    37,     4,
     115,   145,    79,    80,    81,    82,    83,    84,    85,     3,
       4,   145,   145,   145,    36,    92,   145,    94,   101,   145,
       4,    58,    16,    25,   145,     4,   141,   145,   143,   145,
       4,   145,   109,   148,   149,   145,    30,    31,   115,     4,
     145,   145,   245,    37,    38,    39,   145,     3,     4,   145,
     145,   141,   213,   716,   654,   697,   765,    51,    52,    53,
     496,   568,   735,   535,   141,    59,    26,   437,   336,   708,
      64,   148,   149,    99,    30,    31,   431,   560,   242,    -1,
      74,    37,    38,    39,    -1,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    51,    52,    53,    92,    -1,
      94,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,     4,    -1,    -1,    -1,   109,    -1,    -1,    74,    -1,
      -1,   115,    15,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    41,    42,
      43,    44,    45,   109,   148,   149,    -1,    -1,    -1,   115,
      -1,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      93,     4,    95,    -1,    37,    -1,    99,    -1,    -1,    -1,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,   115,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,   135,    46,    47,    48,   139,   140,    -1,    -1,
      -1,   144,    -1,   146,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
     103,   104,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,   115,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   127,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
      15,   145,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
     145,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
     145,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
     145,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
     145,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
     145,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    15,
     145,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,   145,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,   143,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    15,   143,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,   143,    -1,    36,    -1,    38,
      -1,    -1,    15,    65,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   143,    -1,    37,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   143,    -1,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,    -1,   119,   120,   121,
      -1,   100,    -1,    -1,   126,   127,   128,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,   117,    -1,
     119,   120,   121,    -1,    -1,    -1,    -1,   126,   127,   128,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   123,   124,   125,   134,   142,   151,   167,   168,   155,
     156,   153,   154,   266,   267,   261,   262,     0,   169,   157,
       4,    57,   129,   270,   271,    57,   263,   264,     4,    46,
      47,    48,    60,    61,    62,    63,    65,    66,    67,    68,
      75,    76,    77,    78,    86,    87,    88,    89,    90,    91,
      96,    97,    98,   103,   104,   115,   127,   144,   170,   177,
     179,   200,   202,   213,   214,   216,   218,   253,   268,   269,
       4,    38,    65,   100,   106,   107,   108,   109,   110,   112,
     113,   114,   116,   117,   119,   120,   121,   126,   127,   128,
     158,     6,     4,   127,   130,   131,   132,   273,   274,    57,
     271,   131,   132,   265,   274,   264,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   198,    57,    57,    49,    50,
      37,    37,     4,   152,    57,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,   171,    37,    37,    37,
     180,    37,   143,   144,   199,   133,     4,   152,     4,     3,
       4,    30,    31,    37,    38,    39,    51,    52,    53,    59,
      64,    74,    79,    80,    81,    82,    83,    84,    85,    92,
      94,   109,   115,   141,   148,   149,   222,     4,     4,   162,
       4,   161,   160,     4,     4,     4,   222,     4,     3,     4,
     163,   164,   165,     4,   111,   222,     4,    16,    16,    58,
     144,   273,    58,   144,   220,   221,   220,   178,   254,     4,
       4,     4,     4,   172,     4,    65,   203,   204,   205,     4,
       4,     4,   152,   152,     4,   152,   145,   152,   215,   217,
       4,   219,     4,     5,   105,   173,    37,   152,     4,     4,
      37,   164,    57,     6,   143,   159,     6,   143,   222,   222,
     222,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
     222,   222,    15,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   143,     6,   143,   222,   143,   143,     4,   143,     6,
     143,   222,   143,   143,     4,   166,    57,   274,   274,   144,
       4,   127,   130,   131,   132,    58,   144,   222,     4,    58,
      65,    73,    97,   179,   228,     4,    58,   255,   143,   145,
     145,   169,   206,   152,    58,   143,   201,   143,   145,   145,
     145,   145,   145,   145,   145,   201,   145,   201,   143,   219,
     145,    37,     4,     5,   105,   143,   145,   173,   145,     6,
       6,   222,   145,   270,   222,   222,   157,   222,   222,   145,
     222,   222,   222,   222,   222,     4,     4,   222,     4,     4,
       4,     4,   222,   222,     4,     4,   222,   222,     4,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,     4,     4,     4,   222,   222,     3,     4,     4,     4,
     143,   276,   144,   144,     4,   129,   144,   272,   229,   152,
     234,   239,   256,     4,    36,    37,   210,   207,   205,     4,
     152,   152,   219,   174,    37,     4,     5,   105,   145,   220,
     220,   143,    58,    36,   143,   145,   145,   143,   143,   145,
     143,   145,   145,   145,   145,   145,   145,   143,   143,   145,
     145,   145,   143,   145,    16,     4,   274,   132,    57,   129,
     144,    37,    40,   222,   243,   244,   241,    16,   222,   245,
     244,   222,   258,   143,     4,   148,   211,   212,    16,   203,
     145,   173,   176,    37,   145,   145,     4,   222,   222,   222,
     222,   222,   222,     4,   222,   144,   277,    16,   275,    69,
      70,    71,    72,    73,   145,   242,    37,    37,   243,    16,
     101,   224,   178,    16,    91,   246,   240,     4,   101,   259,
       4,     4,   145,   212,    92,   208,    36,   145,   173,   175,
     145,   145,   145,   145,   145,   145,   145,   145,    58,   274,
     274,   145,   222,    16,    37,    38,   225,    36,   224,    57,
      37,   260,    37,   257,   145,     6,   201,   145,   173,   144,
     277,   145,   222,    37,   102,   226,   226,   178,   222,   259,
     222,   144,   220,    94,   209,   145,    58,    39,   243,   145,
     222,    37,   230,   235,    58,   145,   145,     6,    37,    16,
     145,   222,   136,   137,   138,   227,    57,   259,   220,   222,
     145,    57,   236,   145,   231,   249,   243,     4,    15,    32,
      41,    42,    43,    44,    45,    54,    55,    56,    65,    93,
      95,    99,   115,   135,   139,   140,   144,   146,   181,   182,
     184,   187,   188,   190,   193,   194,   195,   200,     4,    58,
      16,    37,    37,    37,   152,    37,   191,    37,    37,    37,
       4,    54,   182,   186,    37,     4,   146,   182,   190,    58,
      37,   199,   250,   237,    54,    55,    99,   140,   181,    54,
      55,   181,   181,   192,   196,   220,    37,   189,     4,   183,
     181,   185,    37,   147,   201,   186,   186,    37,   232,   220,
      57,    25,   247,    37,    37,   145,    37,   145,    37,    37,
     145,   145,   194,   145,   222,     4,   187,    21,   145,   145,
     181,   182,   145,   147,   186,   247,   145,   194,     4,   101,
     223,   181,   181,   185,   181,   181,    36,   143,   145,     4,
     181,   145,   223,    58,    25,   248,   145,   145,   145,   145,
     145,     4,   248,   251,     4,     6,    16,   197,   145,   145,
     181,   145,   145,   145,   197,   248,   196,     4,   238,   145,
     199,   233,   197,   201,   201,   252,   201
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 180 "ldgram.y"
    { ldlex_defsym(); }
    break;

  case 9:
#line 182 "ldgram.y"
    {
		  ldlex_popstate();
		  lang_add_assignment (exp_defsym ((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)));
		}
    break;

  case 10:
#line 190 "ldgram.y"
    {
		  ldlex_mri_script ();
		  PUSH_ERROR (_("MRI style script"));
		}
    break;

  case 11:
#line 195 "ldgram.y"
    {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
    break;

  case 16:
#line 210 "ldgram.y"
    {
			einfo(_("%P%F: unrecognised keyword in MRI style script '%s'\n"),(yyvsp[(1) - (1)].name));
			}
    break;

  case 17:
#line 213 "ldgram.y"
    {
			config.map_filename = "-";
			}
    break;

  case 20:
#line 219 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 21:
#line 221 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 22:
#line 223 "ldgram.y"
    { mri_public((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree)); }
    break;

  case 23:
#line 225 "ldgram.y"
    { mri_format((yyvsp[(2) - (2)].name)); }
    break;

  case 24:
#line 227 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 25:
#line 229 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree));}
    break;

  case 26:
#line 231 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 27:
#line 233 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 28:
#line 235 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 29:
#line 237 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 30:
#line 239 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 33:
#line 243 "ldgram.y"
    { mri_name((yyvsp[(2) - (2)].name)); }
    break;

  case 34:
#line 245 "ldgram.y"
    { mri_alias((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].name),0);}
    break;

  case 35:
#line 247 "ldgram.y"
    { mri_alias ((yyvsp[(2) - (4)].name), 0, (int) (yyvsp[(4) - (4)].bigint).integer); }
    break;

  case 36:
#line 249 "ldgram.y"
    { mri_base((yyvsp[(2) - (2)].etree)); }
    break;

  case 37:
#line 251 "ldgram.y"
    { mri_truncate ((unsigned int) (yyvsp[(2) - (2)].bigint).integer); }
    break;

  case 40:
#line 255 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 41:
#line 257 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 42:
#line 259 "ldgram.y"
    { lang_add_entry ((yyvsp[(2) - (2)].name), FALSE); }
    break;

  case 44:
#line 264 "ldgram.y"
    { mri_order((yyvsp[(3) - (3)].name)); }
    break;

  case 45:
#line 265 "ldgram.y"
    { mri_order((yyvsp[(2) - (2)].name)); }
    break;

  case 47:
#line 271 "ldgram.y"
    { mri_load((yyvsp[(1) - (1)].name)); }
    break;

  case 48:
#line 272 "ldgram.y"
    { mri_load((yyvsp[(3) - (3)].name)); }
    break;

  case 49:
#line 277 "ldgram.y"
    { mri_only_load((yyvsp[(1) - (1)].name)); }
    break;

  case 50:
#line 279 "ldgram.y"
    { mri_only_load((yyvsp[(3) - (3)].name)); }
    break;

  case 51:
#line 283 "ldgram.y"
    { (yyval.name) = NULL; }
    break;

  case 54:
#line 290 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 55:
#line 292 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 56:
#line 296 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(1) - (1)].name), FALSE); }
    break;

  case 57:
#line 298 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(2) - (2)].name), FALSE); }
    break;

  case 58:
#line 300 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(3) - (3)].name), FALSE); }
    break;

  case 59:
#line 304 "ldgram.y"
    { ldlex_both(); }
    break;

  case 60:
#line 306 "ldgram.y"
    { ldlex_popstate(); }
    break;

  case 73:
#line 327 "ldgram.y"
    { lang_add_target((yyvsp[(3) - (4)].name)); }
    break;

  case 74:
#line 329 "ldgram.y"
    { ldfile_add_library_path ((yyvsp[(3) - (4)].name), FALSE); }
    break;

  case 75:
#line 331 "ldgram.y"
    { lang_add_output((yyvsp[(3) - (4)].name), 1); }
    break;

  case 76:
#line 333 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (4)].name), (char *) NULL,
					    (char *) NULL, 1); }
    break;

  case 77:
#line 336 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (8)].name), (yyvsp[(5) - (8)].name), (yyvsp[(7) - (8)].name), 1); }
    break;

  case 78:
#line 338 "ldgram.y"
    { ldfile_set_output_arch ((yyvsp[(3) - (4)].name), bfd_arch_unknown); }
    break;

  case 79:
#line 340 "ldgram.y"
    { command_line.force_common_definition = TRUE ; }
    break;

  case 80:
#line 342 "ldgram.y"
    { command_line.inhibit_common_definition = TRUE ; }
    break;

  case 82:
#line 345 "ldgram.y"
    { lang_enter_group (); }
    break;

  case 83:
#line 347 "ldgram.y"
    { lang_leave_group (); }
    break;

  case 84:
#line 349 "ldgram.y"
    { lang_add_map((yyvsp[(3) - (4)].name)); }
    break;

  case 85:
#line 351 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 86:
#line 353 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 87:
#line 355 "ldgram.y"
    {
		  lang_add_nocrossref ((yyvsp[(3) - (4)].nocrossref));
		}
    break;

  case 89:
#line 360 "ldgram.y"
    { lang_add_insert ((yyvsp[(3) - (3)].name), 0); }
    break;

  case 90:
#line 362 "ldgram.y"
    { lang_add_insert ((yyvsp[(3) - (3)].name), 1); }
    break;

  case 91:
#line 364 "ldgram.y"
    { lang_memory_region_alias ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].name)); }
    break;

  case 92:
#line 366 "ldgram.y"
    { lang_ld_feature ((yyvsp[(3) - (4)].name)); }
    break;

  case 93:
#line 371 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 94:
#line 374 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 95:
#line 377 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 96:
#line 380 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 97:
#line 383 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 98:
#line 386 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 99:
#line 389 "ldgram.y"
    { (yyval.integer) = add_DT_NEEDED_for_regular; add_DT_NEEDED_for_regular = TRUE; }
    break;

  case 100:
#line 391 "ldgram.y"
    { add_DT_NEEDED_for_regular = (yyvsp[(3) - (5)].integer); }
    break;

  case 101:
#line 393 "ldgram.y"
    { (yyval.integer) = add_DT_NEEDED_for_regular; add_DT_NEEDED_for_regular = TRUE; }
    break;

  case 102:
#line 395 "ldgram.y"
    { add_DT_NEEDED_for_regular = (yyvsp[(5) - (7)].integer); }
    break;

  case 103:
#line 397 "ldgram.y"
    { (yyval.integer) = add_DT_NEEDED_for_regular; add_DT_NEEDED_for_regular = TRUE; }
    break;

  case 104:
#line 399 "ldgram.y"
    { add_DT_NEEDED_for_regular = (yyvsp[(4) - (6)].integer); }
    break;

  case 109:
#line 414 "ldgram.y"
    { lang_add_entry ((yyvsp[(3) - (4)].name), FALSE); }
    break;

  case 111:
#line 416 "ldgram.y"
    {ldlex_expression ();}
    break;

  case 112:
#line 417 "ldgram.y"
    { ldlex_popstate ();
		  lang_add_assignment (exp_assert ((yyvsp[(4) - (7)].etree), (yyvsp[(6) - (7)].name))); }
    break;

  case 113:
#line 425 "ldgram.y"
    {
			  (yyval.cname) = (yyvsp[(1) - (1)].name);
			}
    break;

  case 114:
#line 429 "ldgram.y"
    {
			  (yyval.cname) = "*";
			}
    break;

  case 115:
#line 433 "ldgram.y"
    {
			  (yyval.cname) = "?";
			}
    break;

  case 116:
#line 440 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(1) - (1)].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 117:
#line 447 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (5)].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = (yyvsp[(3) - (5)].name_list);
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 118:
#line 454 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 119:
#line 461 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 120:
#line 468 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_name_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 121:
#line 475 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 122:
#line 482 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_alignment_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 123:
#line 489 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 124:
#line 496 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(7) - (8)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = (yyvsp[(5) - (8)].name_list);
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 125:
#line 503 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_init_priority;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 126:
#line 512 "ldgram.y"
    {
			  struct flag_info_list *n;
			  n = ((struct flag_info_list *) xmalloc (sizeof *n));
			  if ((yyvsp[(1) - (1)].name)[0] == '!')
			    {
			      n->with = without_flags;
			      n->name = &(yyvsp[(1) - (1)].name)[1];
			    }
			  else
			    {
			      n->with = with_flags;
			      n->name = (yyvsp[(1) - (1)].name);
			    }
			  n->valid = FALSE;
			  n->next = NULL;
			  (yyval.flag_info_list) = n;
			}
    break;

  case 127:
#line 530 "ldgram.y"
    {
			  struct flag_info_list *n;
			  n = ((struct flag_info_list *) xmalloc (sizeof *n));
			  if ((yyvsp[(3) - (3)].name)[0] == '!')
			    {
			      n->with = without_flags;
			      n->name = &(yyvsp[(3) - (3)].name)[1];
			    }
			  else
			    {
			      n->with = with_flags;
			      n->name = (yyvsp[(3) - (3)].name);
			    }
			  n->valid = FALSE;
			  n->next = (yyvsp[(1) - (3)].flag_info_list);
			  (yyval.flag_info_list) = n;
			}
    break;

  case 128:
#line 551 "ldgram.y"
    {
			  struct flag_info *n;
			  n = ((struct flag_info *) xmalloc (sizeof *n));
			  n->flag_list = (yyvsp[(3) - (4)].flag_info_list);
			  n->flags_initialized = FALSE;
			  n->not_with_flags = 0;
			  n->only_with_flags = 0;
			  (yyval.flag_info) = n;
			}
    break;

  case 129:
#line 564 "ldgram.y"
    {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[(2) - (2)].cname);
			  tmp->next = (yyvsp[(1) - (2)].name_list);
			  (yyval.name_list) = tmp;
			}
    break;

  case 130:
#line 573 "ldgram.y"
    {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[(1) - (1)].cname);
			  tmp->next = NULL;
			  (yyval.name_list) = tmp;
			}
    break;

  case 131:
#line 584 "ldgram.y"
    {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = (yyvsp[(1) - (3)].wildcard_list);
			  tmp->spec = (yyvsp[(3) - (3)].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
    break;

  case 132:
#line 593 "ldgram.y"
    {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = NULL;
			  tmp->spec = (yyvsp[(1) - (1)].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
    break;

  case 133:
#line 604 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[(1) - (1)].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = NULL;
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
    break;

  case 134:
#line 613 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[(2) - (2)].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = (yyvsp[(1) - (2)].flag_info);
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
    break;

  case 135:
#line 622 "ldgram.y"
    {
			  lang_add_wild (NULL, (yyvsp[(2) - (3)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 136:
#line 626 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = NULL;
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = (yyvsp[(1) - (4)].flag_info);
			  lang_add_wild (NULL, (yyvsp[(3) - (4)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 137:
#line 635 "ldgram.y"
    {
			  lang_add_wild (&(yyvsp[(1) - (4)].wildcard), (yyvsp[(3) - (4)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 138:
#line 639 "ldgram.y"
    {
			  (yyvsp[(2) - (5)].wildcard).section_flag_list = (yyvsp[(1) - (5)].flag_info);
			  lang_add_wild (&(yyvsp[(2) - (5)].wildcard), (yyvsp[(4) - (5)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 140:
#line 648 "ldgram.y"
    { ldgram_had_keep = TRUE; }
    break;

  case 141:
#line 650 "ldgram.y"
    { ldgram_had_keep = FALSE; }
    break;

  case 143:
#line 656 "ldgram.y"
    {
 		lang_add_attribute(lang_object_symbols_statement_enum);
	      	}
    break;

  case 145:
#line 661 "ldgram.y"
    {

		  lang_add_attribute(lang_constructors_statement_enum);
		}
    break;

  case 146:
#line 666 "ldgram.y"
    {
		  constructors_sorted = TRUE;
		  lang_add_attribute (lang_constructors_statement_enum);
		}
    break;

  case 148:
#line 672 "ldgram.y"
    {
			  lang_add_data ((int) (yyvsp[(1) - (4)].integer), (yyvsp[(3) - (4)].etree));
			}
    break;

  case 149:
#line 677 "ldgram.y"
    {
			  lang_add_fill ((yyvsp[(3) - (4)].fill));
			}
    break;

  case 150:
#line 680 "ldgram.y"
    {ldlex_expression ();}
    break;

  case 151:
#line 681 "ldgram.y"
    { ldlex_popstate ();
			  lang_add_assignment (exp_assert ((yyvsp[(4) - (8)].etree), (yyvsp[(6) - (8)].name))); }
    break;

  case 152:
#line 684 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 153:
#line 686 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 158:
#line 701 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 159:
#line 703 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 160:
#line 705 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 161:
#line 707 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 162:
#line 709 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 163:
#line 714 "ldgram.y"
    {
		  (yyval.fill) = exp_get_fill ((yyvsp[(1) - (1)].etree), 0, "fill value");
		}
    break;

  case 164:
#line 721 "ldgram.y"
    { (yyval.fill) = (yyvsp[(2) - (2)].fill); }
    break;

  case 165:
#line 722 "ldgram.y"
    { (yyval.fill) = (fill_type *) 0; }
    break;

  case 166:
#line 727 "ldgram.y"
    { (yyval.token) = '+'; }
    break;

  case 167:
#line 729 "ldgram.y"
    { (yyval.token) = '-'; }
    break;

  case 168:
#line 731 "ldgram.y"
    { (yyval.token) = '*'; }
    break;

  case 169:
#line 733 "ldgram.y"
    { (yyval.token) = '/'; }
    break;

  case 170:
#line 735 "ldgram.y"
    { (yyval.token) = LSHIFT; }
    break;

  case 171:
#line 737 "ldgram.y"
    { (yyval.token) = RSHIFT; }
    break;

  case 172:
#line 739 "ldgram.y"
    { (yyval.token) = '&'; }
    break;

  case 173:
#line 741 "ldgram.y"
    { (yyval.token) = '|'; }
    break;

  case 176:
#line 751 "ldgram.y"
    {
		  lang_add_assignment (exp_assign ((yyvsp[(1) - (3)].name), (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 177:
#line 755 "ldgram.y"
    {
		  lang_add_assignment (exp_assign ((yyvsp[(1) - (3)].name),
						   exp_binop ((yyvsp[(2) - (3)].token),
							      exp_nameop (NAME,
									  (yyvsp[(1) - (3)].name)),
							      (yyvsp[(3) - (3)].etree))));
		}
    break;

  case 178:
#line 763 "ldgram.y"
    {
		  lang_add_assignment (exp_provide ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].etree), FALSE));
		}
    break;

  case 179:
#line 767 "ldgram.y"
    {
		  lang_add_assignment (exp_provide ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].etree), TRUE));
		}
    break;

  case 187:
#line 790 "ldgram.y"
    { region = lang_memory_region_lookup ((yyvsp[(1) - (1)].name), TRUE); }
    break;

  case 188:
#line 793 "ldgram.y"
    {}
    break;

  case 189:
#line 795 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 190:
#line 797 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 191:
#line 802 "ldgram.y"
    {
		  region->origin = exp_get_vma ((yyvsp[(3) - (3)].etree), 0, "origin");
		  region->current = region->origin;
		}
    break;

  case 192:
#line 810 "ldgram.y"
    {
		  region->length = exp_get_vma ((yyvsp[(3) - (3)].etree), -1, "length");
		}
    break;

  case 193:
#line 817 "ldgram.y"
    { /* dummy action to avoid bison 1.25 error message */ }
    break;

  case 197:
#line 828 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(1) - (1)].name), 0); }
    break;

  case 198:
#line 830 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(2) - (2)].name), 1); }
    break;

  case 199:
#line 835 "ldgram.y"
    { lang_startup((yyvsp[(3) - (4)].name)); }
    break;

  case 201:
#line 841 "ldgram.y"
    { ldemul_hll((char *)NULL); }
    break;

  case 202:
#line 846 "ldgram.y"
    { ldemul_hll((yyvsp[(3) - (3)].name)); }
    break;

  case 203:
#line 848 "ldgram.y"
    { ldemul_hll((yyvsp[(1) - (1)].name)); }
    break;

  case 205:
#line 856 "ldgram.y"
    { ldemul_syslib((yyvsp[(3) - (3)].name)); }
    break;

  case 207:
#line 862 "ldgram.y"
    { lang_float(TRUE); }
    break;

  case 208:
#line 864 "ldgram.y"
    { lang_float(FALSE); }
    break;

  case 209:
#line 869 "ldgram.y"
    {
		  (yyval.nocrossref) = NULL;
		}
    break;

  case 210:
#line 873 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (2)].name);
		  n->next = (yyvsp[(2) - (2)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 211:
#line 882 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (3)].name);
		  n->next = (yyvsp[(3) - (3)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 212:
#line 892 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 213:
#line 894 "ldgram.y"
    { ldlex_popstate (); (yyval.etree)=(yyvsp[(2) - (2)].etree);}
    break;

  case 214:
#line 899 "ldgram.y"
    { (yyval.etree) = exp_unop ('-', (yyvsp[(2) - (2)].etree)); }
    break;

  case 215:
#line 901 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (3)].etree); }
    break;

  case 216:
#line 903 "ldgram.y"
    { (yyval.etree) = exp_unop ((int) (yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].etree)); }
    break;

  case 217:
#line 905 "ldgram.y"
    { (yyval.etree) = exp_unop ('!', (yyvsp[(2) - (2)].etree)); }
    break;

  case 218:
#line 907 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (2)].etree); }
    break;

  case 219:
#line 909 "ldgram.y"
    { (yyval.etree) = exp_unop ('~', (yyvsp[(2) - (2)].etree));}
    break;

  case 220:
#line 912 "ldgram.y"
    { (yyval.etree) = exp_binop ('*', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 221:
#line 914 "ldgram.y"
    { (yyval.etree) = exp_binop ('/', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 222:
#line 916 "ldgram.y"
    { (yyval.etree) = exp_binop ('%', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 223:
#line 918 "ldgram.y"
    { (yyval.etree) = exp_binop ('+', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 224:
#line 920 "ldgram.y"
    { (yyval.etree) = exp_binop ('-' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 225:
#line 922 "ldgram.y"
    { (yyval.etree) = exp_binop (LSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 226:
#line 924 "ldgram.y"
    { (yyval.etree) = exp_binop (RSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 227:
#line 926 "ldgram.y"
    { (yyval.etree) = exp_binop (EQ , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 228:
#line 928 "ldgram.y"
    { (yyval.etree) = exp_binop (NE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 229:
#line 930 "ldgram.y"
    { (yyval.etree) = exp_binop (LE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 230:
#line 932 "ldgram.y"
    { (yyval.etree) = exp_binop (GE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 231:
#line 934 "ldgram.y"
    { (yyval.etree) = exp_binop ('<' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 232:
#line 936 "ldgram.y"
    { (yyval.etree) = exp_binop ('>' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 233:
#line 938 "ldgram.y"
    { (yyval.etree) = exp_binop ('&' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 234:
#line 940 "ldgram.y"
    { (yyval.etree) = exp_binop ('^' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 235:
#line 942 "ldgram.y"
    { (yyval.etree) = exp_binop ('|' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 236:
#line 944 "ldgram.y"
    { (yyval.etree) = exp_trinop ('?' , (yyvsp[(1) - (5)].etree), (yyvsp[(3) - (5)].etree), (yyvsp[(5) - (5)].etree)); }
    break;

  case 237:
#line 946 "ldgram.y"
    { (yyval.etree) = exp_binop (ANDAND , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 238:
#line 948 "ldgram.y"
    { (yyval.etree) = exp_binop (OROR , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 239:
#line 950 "ldgram.y"
    { (yyval.etree) = exp_nameop (DEFINED, (yyvsp[(3) - (4)].name)); }
    break;

  case 240:
#line 952 "ldgram.y"
    { (yyval.etree) = exp_bigintop ((yyvsp[(1) - (1)].bigint).integer, (yyvsp[(1) - (1)].bigint).str); }
    break;

  case 241:
#line 954 "ldgram.y"
    { (yyval.etree) = exp_nameop (SIZEOF_HEADERS,0); }
    break;

  case 242:
#line 957 "ldgram.y"
    { (yyval.etree) = exp_nameop (ALIGNOF,(yyvsp[(3) - (4)].name)); }
    break;

  case 243:
#line 959 "ldgram.y"
    { (yyval.etree) = exp_nameop (SIZEOF,(yyvsp[(3) - (4)].name)); }
    break;

  case 244:
#line 961 "ldgram.y"
    { (yyval.etree) = exp_nameop (ADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 245:
#line 963 "ldgram.y"
    { (yyval.etree) = exp_nameop (LOADADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 246:
#line 965 "ldgram.y"
    { (yyval.etree) = exp_nameop (CONSTANT,(yyvsp[(3) - (4)].name)); }
    break;

  case 247:
#line 967 "ldgram.y"
    { (yyval.etree) = exp_unop (ABSOLUTE, (yyvsp[(3) - (4)].etree)); }
    break;

  case 248:
#line 969 "ldgram.y"
    { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 249:
#line 971 "ldgram.y"
    { (yyval.etree) = exp_binop (ALIGN_K,(yyvsp[(3) - (6)].etree),(yyvsp[(5) - (6)].etree)); }
    break;

  case 250:
#line 973 "ldgram.y"
    { (yyval.etree) = exp_binop (DATA_SEGMENT_ALIGN, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree)); }
    break;

  case 251:
#line 975 "ldgram.y"
    { (yyval.etree) = exp_binop (DATA_SEGMENT_RELRO_END, (yyvsp[(5) - (6)].etree), (yyvsp[(3) - (6)].etree)); }
    break;

  case 252:
#line 977 "ldgram.y"
    { (yyval.etree) = exp_unop (DATA_SEGMENT_END, (yyvsp[(3) - (4)].etree)); }
    break;

  case 253:
#line 979 "ldgram.y"
    { /* The operands to the expression node are
			     placed in the opposite order from the way
			     in which they appear in the script as
			     that allows us to reuse more code in
			     fold_binary.  */
			  (yyval.etree) = exp_binop (SEGMENT_START,
					  (yyvsp[(5) - (6)].etree),
					  exp_nameop (NAME, (yyvsp[(3) - (6)].name))); }
    break;

  case 254:
#line 988 "ldgram.y"
    { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 255:
#line 990 "ldgram.y"
    { (yyval.etree) = exp_nameop (NAME,(yyvsp[(1) - (1)].name)); }
    break;

  case 256:
#line 992 "ldgram.y"
    { (yyval.etree) = exp_binop (MAX_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 257:
#line 994 "ldgram.y"
    { (yyval.etree) = exp_binop (MIN_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 258:
#line 996 "ldgram.y"
    { (yyval.etree) = exp_assert ((yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].name)); }
    break;

  case 259:
#line 998 "ldgram.y"
    { (yyval.etree) = exp_nameop (ORIGIN, (yyvsp[(3) - (4)].name)); }
    break;

  case 260:
#line 1000 "ldgram.y"
    { (yyval.etree) = exp_nameop (LENGTH, (yyvsp[(3) - (4)].name)); }
    break;

  case 261:
#line 1005 "ldgram.y"
    { (yyval.name) = (yyvsp[(3) - (3)].name); }
    break;

  case 262:
#line 1006 "ldgram.y"
    { (yyval.name) = 0; }
    break;

  case 263:
#line 1010 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 264:
#line 1011 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 265:
#line 1015 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 266:
#line 1016 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 267:
#line 1020 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 268:
#line 1021 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 269:
#line 1025 "ldgram.y"
    { (yyval.token) = ONLY_IF_RO; }
    break;

  case 270:
#line 1026 "ldgram.y"
    { (yyval.token) = ONLY_IF_RW; }
    break;

  case 271:
#line 1027 "ldgram.y"
    { (yyval.token) = SPECIAL; }
    break;

  case 272:
#line 1028 "ldgram.y"
    { (yyval.token) = 0; }
    break;

  case 273:
#line 1031 "ldgram.y"
    { ldlex_expression(); }
    break;

  case 274:
#line 1035 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 275:
#line 1038 "ldgram.y"
    {
			  lang_enter_output_section_statement((yyvsp[(1) - (9)].name), (yyvsp[(3) - (9)].etree),
							      sectype,
							      (yyvsp[(5) - (9)].etree), (yyvsp[(6) - (9)].etree), (yyvsp[(4) - (9)].etree), (yyvsp[(8) - (9)].token));
			}
    break;

  case 276:
#line 1044 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 277:
#line 1046 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[(17) - (17)].fill), (yyvsp[(14) - (17)].name), (yyvsp[(16) - (17)].section_phdr), (yyvsp[(15) - (17)].name));
		}
    break;

  case 278:
#line 1051 "ldgram.y"
    {}
    break;

  case 279:
#line 1053 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 280:
#line 1055 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 281:
#line 1057 "ldgram.y"
    {
			  lang_enter_overlay ((yyvsp[(3) - (8)].etree), (yyvsp[(6) - (8)].etree));
			}
    break;

  case 282:
#line 1062 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 283:
#line 1064 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[(5) - (16)].etree), (int) (yyvsp[(4) - (16)].integer),
					      (yyvsp[(16) - (16)].fill), (yyvsp[(13) - (16)].name), (yyvsp[(15) - (16)].section_phdr), (yyvsp[(14) - (16)].name));
			}
    break;

  case 285:
#line 1074 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 286:
#line 1076 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assign (".", (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 288:
#line 1082 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 289:
#line 1084 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 290:
#line 1088 "ldgram.y"
    { sectype = noload_section; }
    break;

  case 291:
#line 1089 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 292:
#line 1090 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 293:
#line 1091 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 294:
#line 1092 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 296:
#line 1097 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 297:
#line 1098 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 298:
#line 1102 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (3)].etree); }
    break;

  case 299:
#line 1103 "ldgram.y"
    { (yyval.etree) = (etree_type *)NULL;  }
    break;

  case 300:
#line 1108 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (6)].etree); }
    break;

  case 301:
#line 1110 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (10)].etree); }
    break;

  case 302:
#line 1114 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (2)].etree); }
    break;

  case 303:
#line 1115 "ldgram.y"
    { (yyval.etree) = (etree_type *) NULL;  }
    break;

  case 304:
#line 1120 "ldgram.y"
    { (yyval.integer) = 0; }
    break;

  case 305:
#line 1122 "ldgram.y"
    { (yyval.integer) = 1; }
    break;

  case 306:
#line 1127 "ldgram.y"
    { (yyval.name) = (yyvsp[(2) - (2)].name); }
    break;

  case 307:
#line 1128 "ldgram.y"
    { (yyval.name) = DEFAULT_MEMORY_REGION; }
    break;

  case 308:
#line 1133 "ldgram.y"
    {
		  (yyval.section_phdr) = NULL;
		}
    break;

  case 309:
#line 1137 "ldgram.y"
    {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[(3) - (3)].name);
		  n->used = FALSE;
		  n->next = (yyvsp[(1) - (3)].section_phdr);
		  (yyval.section_phdr) = n;
		}
    break;

  case 311:
#line 1153 "ldgram.y"
    {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[(2) - (2)].name));
			}
    break;

  case 312:
#line 1158 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 313:
#line 1160 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[(9) - (9)].fill), (yyvsp[(8) - (9)].section_phdr));
			}
    break;

  case 318:
#line 1177 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 319:
#line 1178 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 320:
#line 1180 "ldgram.y"
    {
		  lang_new_phdr ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].etree), (yyvsp[(4) - (6)].phdr).filehdr, (yyvsp[(4) - (6)].phdr).phdrs, (yyvsp[(4) - (6)].phdr).at,
				 (yyvsp[(4) - (6)].phdr).flags);
		}
    break;

  case 321:
#line 1188 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(1) - (1)].etree);

		  if ((yyvsp[(1) - (1)].etree)->type.node_class == etree_name
		      && (yyvsp[(1) - (1)].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR", "PT_TLS"
			};

		      s = (yyvsp[(1) - (1)].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		      if (i == sizeof phdr_types / sizeof phdr_types[0])
			{
			  if (strcmp (s, "PT_GNU_EH_FRAME") == 0)
			    (yyval.etree) = exp_intop (0x6474e550);
			  else if (strcmp (s, "PT_GNU_STACK") == 0)
			    (yyval.etree) = exp_intop (0x6474e551);
			  else
			    {
			      einfo (_("\
%X%P:%S: unknown phdr type `%s' (try integer literal)\n"),
				     s);
			      (yyval.etree) = exp_intop (0);
			    }
			}
		    }
		}
    break;

  case 322:
#line 1232 "ldgram.y"
    {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
    break;

  case 323:
#line 1236 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(3) - (3)].phdr);
		  if (strcmp ((yyvsp[(1) - (3)].name), "FILEHDR") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).filehdr = TRUE;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "PHDRS") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).phdrs = TRUE;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "FLAGS") == 0 && (yyvsp[(2) - (3)].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[(2) - (3)].etree);
		  else
		    einfo (_("%X%P:%S: PHDRS syntax error at `%s'\n"), (yyvsp[(1) - (3)].name));
		}
    break;

  case 324:
#line 1248 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(5) - (5)].phdr);
		  (yyval.phdr).at = (yyvsp[(3) - (5)].etree);
		}
    break;

  case 325:
#line 1256 "ldgram.y"
    {
		  (yyval.etree) = NULL;
		}
    break;

  case 326:
#line 1260 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(2) - (3)].etree);
		}
    break;

  case 327:
#line 1266 "ldgram.y"
    {
		  ldlex_version_file ();
		  PUSH_ERROR (_("dynamic list"));
		}
    break;

  case 328:
#line 1271 "ldgram.y"
    {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
    break;

  case 332:
#line 1288 "ldgram.y"
    {
		  lang_append_dynamic_list ((yyvsp[(1) - (2)].versyms));
		}
    break;

  case 333:
#line 1296 "ldgram.y"
    {
		  ldlex_version_file ();
		  PUSH_ERROR (_("VERSION script"));
		}
    break;

  case 334:
#line 1301 "ldgram.y"
    {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
    break;

  case 335:
#line 1310 "ldgram.y"
    {
		  ldlex_version_script ();
		}
    break;

  case 336:
#line 1314 "ldgram.y"
    {
		  ldlex_popstate ();
		}
    break;

  case 339:
#line 1326 "ldgram.y"
    {
		  lang_register_vers_node (NULL, (yyvsp[(2) - (4)].versnode), NULL);
		}
    break;

  case 340:
#line 1330 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (5)].name), (yyvsp[(3) - (5)].versnode), NULL);
		}
    break;

  case 341:
#line 1334 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].versnode), (yyvsp[(5) - (6)].deflist));
		}
    break;

  case 342:
#line 1341 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[(1) - (1)].name));
		}
    break;

  case 343:
#line 1345 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[(1) - (2)].deflist), (yyvsp[(2) - (2)].name));
		}
    break;

  case 344:
#line 1352 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
    break;

  case 345:
#line 1356 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(1) - (2)].versyms), NULL);
		}
    break;

  case 346:
#line 1360 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (4)].versyms), NULL);
		}
    break;

  case 347:
#line 1364 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[(3) - (4)].versyms));
		}
    break;

  case 348:
#line 1368 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (8)].versyms), (yyvsp[(7) - (8)].versyms));
		}
    break;

  case 349:
#line 1375 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[(1) - (1)].name), ldgram_vers_current_lang, FALSE);
		}
    break;

  case 350:
#line 1379 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[(1) - (1)].name), ldgram_vers_current_lang, TRUE);
		}
    break;

  case 351:
#line 1383 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), (yyvsp[(3) - (3)].name), ldgram_vers_current_lang, FALSE);
		}
    break;

  case 352:
#line 1387 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), (yyvsp[(3) - (3)].name), ldgram_vers_current_lang, TRUE);
		}
    break;

  case 353:
#line 1391 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(4) - (5)].name);
			}
    break;

  case 354:
#line 1396 "ldgram.y"
    {
			  struct bfd_elf_version_expr *pat;
			  for (pat = (yyvsp[(7) - (9)].versyms); pat->next != NULL; pat = pat->next);
			  pat->next = (yyvsp[(1) - (9)].versyms);
			  (yyval.versyms) = (yyvsp[(7) - (9)].versyms);
			  ldgram_vers_current_lang = (yyvsp[(6) - (9)].name);
			}
    break;

  case 355:
#line 1404 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(2) - (3)].name);
			}
    break;

  case 356:
#line 1409 "ldgram.y"
    {
			  (yyval.versyms) = (yyvsp[(5) - (7)].versyms);
			  ldgram_vers_current_lang = (yyvsp[(4) - (7)].name);
			}
    break;

  case 357:
#line 1414 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "global", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 358:
#line 1418 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), "global", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 359:
#line 1422 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "local", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 360:
#line 1426 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), "local", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 361:
#line 1430 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "extern", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 362:
#line 1434 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), "extern", ldgram_vers_current_lang, FALSE);
		}
    break;


/* Line 1267 of yacc.c.  */
#line 4414 "ldgram.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1444 "ldgram.y"

void
yyerror(arg)
     const char *arg;
{
  if (ldfile_assumed_script)
    einfo (_("%P:%s: file format not recognized; treating as linker script\n"),
	   ldfile_input_filename);
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
     einfo ("%P%F:%S: %s in %s\n", arg, error_names[error_index-1]);
  else
     einfo ("%P%F:%S: %s\n", arg);
}

