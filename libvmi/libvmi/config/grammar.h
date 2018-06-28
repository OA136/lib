/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_GRAMMAR_H_INCLUDED
# define YY_YY_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    LINUX_TASKS = 259,
    LINUX_MM = 260,
    LINUX_PID = 261,
    LINUX_NAME = 262,
    LINUX_PGD = 263,
    LINUX_ADDR = 264,
    LINUX_INIT_TASK = 265,
    WIN_NTOSKRNL = 266,
    WIN_NTOSKRNL_VA = 267,
    WIN_TASKS = 268,
    WIN_PDBASE = 269,
    WIN_PID = 270,
    WIN_PNAME = 271,
    WIN_KDVB = 272,
    WIN_KDBG = 273,
    WIN_KPCR = 274,
    WIN_SYSPROC = 275,
    FREEBSD_NAME = 276,
    FREEBSD_PID = 277,
    FREEBSD_VMSPACE = 278,
    FREEBSD_PMAP = 279,
    FREEBSD_PGD = 280,
    SYSMAPTOK = 281,
    REKALL_PROFILE = 282,
    OSTYPETOK = 283,
    WORD = 284,
    FILENAME = 285,
    QUOTE = 286,
    OBRACE = 287,
    EBRACE = 288,
    SEMICOLON = 289,
    EQUALS = 290
  };
#endif
/* Tokens.  */
#define NUM 258
#define LINUX_TASKS 259
#define LINUX_MM 260
#define LINUX_PID 261
#define LINUX_NAME 262
#define LINUX_PGD 263
#define LINUX_ADDR 264
#define LINUX_INIT_TASK 265
#define WIN_NTOSKRNL 266
#define WIN_NTOSKRNL_VA 267
#define WIN_TASKS 268
#define WIN_PDBASE 269
#define WIN_PID 270
#define WIN_PNAME 271
#define WIN_KDVB 272
#define WIN_KDBG 273
#define WIN_KPCR 274
#define WIN_SYSPROC 275
#define FREEBSD_NAME 276
#define FREEBSD_PID 277
#define FREEBSD_VMSPACE 278
#define FREEBSD_PMAP 279
#define FREEBSD_PGD 280
#define SYSMAPTOK 281
#define REKALL_PROFILE 282
#define OSTYPETOK 283
#define WORD 284
#define FILENAME 285
#define QUOTE 286
#define OBRACE 287
#define EBRACE 288
#define SEMICOLON 289
#define EQUALS 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 266 "grammar.y" /* yacc.c:1909  */

    char *str;

#line 128 "grammar.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */
