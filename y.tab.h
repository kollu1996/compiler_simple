/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    END = 258,
    NUM = 259,
    ID = 260,
    READ = 261,
    WRITE = 262,
    IF = 263,
    THEN = 264,
    ELSE = 265,
    DO = 266,
    WHILE = 267,
    ENDIF = 268,
    ENDWHILE = 269,
    DE = 270,
    BOOL = 271,
    INT = 272,
    DECL = 273,
    ENDDECL = 274,
    INTEGER = 275,
    BE = 276,
    FINAL = 277,
    FALSE = 278,
    TRUE = 279,
    MAIN = 280,
    RET = 281,
    NEQ = 282
  };
#endif
/* Tokens.  */
#define END 258
#define NUM 259
#define ID 260
#define READ 261
#define WRITE 262
#define IF 263
#define THEN 264
#define ELSE 265
#define DO 266
#define WHILE 267
#define ENDIF 268
#define ENDWHILE 269
#define DE 270
#define BOOL 271
#define INT 272
#define DECL 273
#define ENDDECL 274
#define INTEGER 275
#define BE 276
#define FINAL 277
#define FALSE 278
#define TRUE 279
#define MAIN 280
#define RET 281
#define NEQ 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
