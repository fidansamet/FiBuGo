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
    NOT_OP = 269,
    IDENT = 270,
    IF = 271,
    ELIF = 272,
    ELSE = 273,
    WHILE = 274,
    FOR = 275,
    BREAK = 276,
    CONTINUE = 277,
    FUNC = 278,
    RETURN = 279,
    BLTIN_SHOW_ON_MAP = 280,
    BLTIN_SEARCH_LOCATION = 281,
    BLTIN_GET_ROAD_SPEED = 282,
    BLTIN_GET_LOCATION = 283,
    BLTIN_TARGET = 284,
    BLTIN_GET_ROADS = 285,
    BLTIN_GET_CROSSROADS = 286,
    BLTIN_GET_CROSSROADS_NUM = 287,
    BLTIN_GET_ROADS_NUM = 288,
    LESS_EQ_OP = 289,
    GREATER_EQ_OP = 290,
    NOT_EQ_OP = 291,
    EQUALITY_OP = 292,
    LESS_OP = 293,
    GREATER_OP = 294,
    EQUAL_OP = 295,
    MULTIPLY_OP = 296,
    DIVIDE_OP = 297,
    SUB_OP = 298,
    ADD_OP = 299,
    MOD_OP = 300,
    POW_OP = 301,
    INT_LITERAL = 302,
    FLOAT_LITERAL = 303,
    STR_LITERAL = 304,
    CHAR_LITERAL = 305,
    COMMA = 306,
    SEMICOLON = 307,
    LEFT_PARANT = 308,
    RIGHT_PARANT = 309,
    CURLY_OPEN = 310,
    CURLY_CLOSE = 311,
    SQR_OPEN = 312,
    SQR_CLOSE = 313,
    UNKNOWN_CHAR = 314,
    GPS = 315,
    ROAD = 316,
    CROSSROAD = 317,
    GRAPH = 318,
    USER = 319,
    HOME = 320,
    HOSPITAL = 321,
    SCHOOL = 322,
    BRIDGE = 323,
    MALL = 324,
    BUSSTOP = 325,
    HOTEL = 326,
    POSTOFFICE = 327,
    BLTIN_COLLOBORATE_USERS = 328,
    BLTIN_INSTRUCT_USER = 329,
    BLTIN_INCREASE_SCORE_OF_ROAD = 330,
    BLTIN_DECREASE_SCORE_OF_ROAD = 331,
    BLTIN_GET_SCORE_OF_ROAD = 332,
    BLTIN_SHOW_ROAD_ON_MAP = 333,
    BLTIN_SHOW_CROSSROAD_ON_MAP = 334,
    BLTIN_ADD_CROSSROAD = 335,
    BLTIN_ADD_ROAD = 336,
    BLTIN_PRINT = 337,
    UMINUS = 338
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
#define NOT_OP 269
#define IDENT 270
#define IF 271
#define ELIF 272
#define ELSE 273
#define WHILE 274
#define FOR 275
#define BREAK 276
#define CONTINUE 277
#define FUNC 278
#define RETURN 279
#define BLTIN_SHOW_ON_MAP 280
#define BLTIN_SEARCH_LOCATION 281
#define BLTIN_GET_ROAD_SPEED 282
#define BLTIN_GET_LOCATION 283
#define BLTIN_TARGET 284
#define BLTIN_GET_ROADS 285
#define BLTIN_GET_CROSSROADS 286
#define BLTIN_GET_CROSSROADS_NUM 287
#define BLTIN_GET_ROADS_NUM 288
#define LESS_EQ_OP 289
#define GREATER_EQ_OP 290
#define NOT_EQ_OP 291
#define EQUALITY_OP 292
#define LESS_OP 293
#define GREATER_OP 294
#define EQUAL_OP 295
#define MULTIPLY_OP 296
#define DIVIDE_OP 297
#define SUB_OP 298
#define ADD_OP 299
#define MOD_OP 300
#define POW_OP 301
#define INT_LITERAL 302
#define FLOAT_LITERAL 303
#define STR_LITERAL 304
#define CHAR_LITERAL 305
#define COMMA 306
#define SEMICOLON 307
#define LEFT_PARANT 308
#define RIGHT_PARANT 309
#define CURLY_OPEN 310
#define CURLY_CLOSE 311
#define SQR_OPEN 312
#define SQR_CLOSE 313
#define UNKNOWN_CHAR 314
#define GPS 315
#define ROAD 316
#define CROSSROAD 317
#define GRAPH 318
#define USER 319
#define HOME 320
#define HOSPITAL 321
#define SCHOOL 322
#define BRIDGE 323
#define MALL 324
#define BUSSTOP 325
#define HOTEL 326
#define POSTOFFICE 327
#define BLTIN_COLLOBORATE_USERS 328
#define BLTIN_INSTRUCT_USER 329
#define BLTIN_INCREASE_SCORE_OF_ROAD 330
#define BLTIN_DECREASE_SCORE_OF_ROAD 331
#define BLTIN_GET_SCORE_OF_ROAD 332
#define BLTIN_SHOW_ROAD_ON_MAP 333
#define BLTIN_SHOW_CROSSROAD_ON_MAP 334
#define BLTIN_ADD_CROSSROAD 335
#define BLTIN_ADD_ROAD 336
#define BLTIN_PRINT 337
#define UMINUS 338

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
