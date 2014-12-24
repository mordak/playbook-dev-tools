/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 332 "ldgram.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

