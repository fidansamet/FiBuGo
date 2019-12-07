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
    CHAR = 258,
    INT = 259,
    FLOAT = 260,
    BOOL = 261,
    STR = 262,
    VOID = 263,
    TRUE = 264,
    FALSE = 265,
    AND_OP = 266,
    OR_OP = 267,
    DOLLAR_SIGN = 268,
    AT_SIGN = 269,
    NOT_OP = 270,
    IDENT = 271,
    IF = 272,
    ELIF = 273,
    ELSE = 274,
    WHILE = 275,
    FOR = 276,
    BREAK = 277,
    CONTINUE = 278,
    FUNC = 279,
    RETURN = 280,
    BLTIN_SHOW_ON_MAP = 281,
    BLTIN_SEARCH_LOCATION = 282,
    BLTIN_GET_ROAD_SPEED = 283,
    BLTIN_GET_LOCATION = 284,
    BLTIN_TARGET = 285,
    BLTIN_GET_ROADS = 286,
    BLTIN_GET_CROSSROADS = 287,
    BLTIN_GET_CROSSROADS_NUM = 288,
    BLTIN_GET_ROADS_NUM = 289,
    LESS_EQ_OP = 290,
    GREATER_EQ_OP = 291,
    NOT_EQ_OP = 292,
    EQUALITY_OP = 293,
    LESS_OP = 294,
    GREATER_OP = 295,
    EQUAL_OP = 296,
    INCREMENT_OP = 297,
    DECREMENT_OP = 298,
    MULTIPLY_OP = 299,
    DIVIDE_OP = 300,
    SUB_OP = 301,
    ADD_OP = 302,
    MOD_OP = 303,
    POW_OP = 304,
    INT_LITERAL = 305,
    FLOAT_LITERAL = 306,
    STR_LITERAL = 307,
    CHAR_LITERAL = 308,
    COMMA = 309,
    SEMICOLON = 310,
    LEFT_PARANT = 311,
    RIGHT_PARANT = 312,
    CURLY_OPEN = 313,
    CURLY_CLOSE = 314,
    NEW_LINE = 315,
    WHITE_SPACE = 316,
    UNKNOWN_CHAR = 317
  };
#endif
/* Tokens.  */
#define CHAR 258
#define INT 259
#define FLOAT 260
#define BOOL 261
#define STR 262
#define VOID 263
#define TRUE 264
#define FALSE 265
#define AND_OP 266
#define OR_OP 267
#define DOLLAR_SIGN 268
#define AT_SIGN 269
#define NOT_OP 270
#define IDENT 271
#define IF 272
#define ELIF 273
#define ELSE 274
#define WHILE 275
#define FOR 276
#define BREAK 277
#define CONTINUE 278
#define FUNC 279
#define RETURN 280
#define BLTIN_SHOW_ON_MAP 281
#define BLTIN_SEARCH_LOCATION 282
#define BLTIN_GET_ROAD_SPEED 283
#define BLTIN_GET_LOCATION 284
#define BLTIN_TARGET 285
#define BLTIN_GET_ROADS 286
#define BLTIN_GET_CROSSROADS 287
#define BLTIN_GET_CROSSROADS_NUM 288
#define BLTIN_GET_ROADS_NUM 289
#define LESS_EQ_OP 290
#define GREATER_EQ_OP 291
#define NOT_EQ_OP 292
#define EQUALITY_OP 293
#define LESS_OP 294
#define GREATER_OP 295
#define EQUAL_OP 296
#define INCREMENT_OP 297
#define DECREMENT_OP 298
#define MULTIPLY_OP 299
#define DIVIDE_OP 300
#define SUB_OP 301
#define ADD_OP 302
#define MOD_OP 303
#define POW_OP 304
#define INT_LITERAL 305
#define FLOAT_LITERAL 306
#define STR_LITERAL 307
#define CHAR_LITERAL 308
#define COMMA 309
#define SEMICOLON 310
#define LEFT_PARANT 311
#define RIGHT_PARANT 312
#define CURLY_OPEN 313
#define CURLY_CLOSE 314
#define NEW_LINE 315
#define WHITE_SPACE 316
#define UNKNOWN_CHAR 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
