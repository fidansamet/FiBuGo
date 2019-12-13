/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "project.y"
#include <stdio.h>
#include <stdlib.h>
#line 24 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define CHAR 257
#define INT 258
#define FLOAT 259
#define BOOL 260
#define STR 261
#define VOID 262
#define TRUE 263
#define FALSE 264
#define AND_OP 265
#define OR_OP 266
#define DOLLAR_SIGN 267
#define AT_SIGN 268
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
#define NEW_LINE 312
#define WHITE_SPACE 313
#define UNKNOWN_CHAR 314
#define UMINUS 315
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    2,    2,    3,    3,    3,    3,    3,
    4,    4,    8,    8,    9,    9,    9,    9,    9,    9,
    9,    9,    9,   10,   10,   10,   10,   17,   17,   18,
   18,   16,   16,   19,   19,   19,   20,   20,   20,   20,
   20,   20,   20,   15,   15,   15,   12,   12,   12,   12,
   12,   12,   12,   12,   12,   12,    7,    7,    7,    7,
    7,    7,    7,    7,   22,   22,   22,   22,   22,   22,
   22,   11,   23,   13,   13,   24,   25,   26,   27,   27,
   14,   14,   14,   14,   21,   21,   21,   21,   21,   28,
   28,   28,   30,   30,   30,   30,   29,   29,   29,   29,
   29,   29,   31,   31,    5,    5,    5,    5,    5,    6,
};
static const YYINT yylen[] = {                            2,
    1,    2,    7,    1,    1,    1,    1,    2,    3,    4,
    3,    3,    1,    2,    2,    2,    2,    2,    2,    3,
    3,    1,    1,    2,    3,    7,    7,    1,    3,    5,
    1,    1,    3,    1,    3,    3,    1,    1,    3,    3,
    3,    3,    3,    1,    1,    1,    4,    4,    4,    4,
    4,    4,    4,    4,    4,    4,    2,    2,    2,    2,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    3,    1,    1,    1,    5,    5,    5,    1,    1,
    5,    5,    6,    3,    1,    1,    2,    1,    1,    3,
    3,    3,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,  105,  106,  107,  108,  109,    0,    4,
    5,    2,    0,    0,    7,    0,    0,    6,    0,    0,
    8,    0,    0,   61,   62,   63,   64,    0,    9,    0,
    3,   57,   59,   58,   60,   10,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   13,    0,    0,    0,   22,    0,
    0,   74,   75,    0,    0,    0,    0,   18,    0,   19,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   24,   12,   11,   14,    0,   15,   16,   17,
    0,    0,   65,   66,   67,   68,   69,   70,   71,    0,
    0,   88,   89,    0,    0,    0,    0,   85,    0,    0,
   73,    0,   80,    0,    0,   20,   21,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   37,    0,   25,    0,    0,    0,    0,   84,   72,   47,
   87,   97,   98,   99,  100,  101,  102,    0,    0,  103,
  104,    0,    0,    0,    0,    0,    0,   48,   49,   50,
   51,   52,   53,   54,   55,   56,    0,    0,   38,    0,
    0,    0,    0,    0,    0,    0,    0,   82,   95,   94,
   93,   96,   92,   81,   90,   91,   76,   77,    0,    0,
    0,   39,    0,    0,   40,   41,   43,   42,    0,    0,
    0,   31,    0,   28,   32,    0,   83,   78,    0,    0,
   27,    0,   26,    0,   29,   33,    0,   30,
};
static const YYINT yydgoto[] = {                          2,
    3,    9,   16,   31,   17,   18,  131,   54,   55,   56,
   57,  109,   59,   60,  133,  206,  203,  204,  134,  135,
  136,  100,   61,   62,   63,  114,  115,  108,  153,  183,
  154,
};
static const YYINT yysindex[] = {                      -271,
  -73,    0, -271,    0,    0,    0,    0,    0, -253,    0,
    0,    0, -277,  167,    0, -267, -207,    0, -248, -226,
    0, -250, -174,    0,    0,    0,    0, -184,    0,   77,
    0,    0,    0,    0,    0,    0, -204, -201, -188, -178,
 -167,   26, -156, -149, -117,  -89,  -78,  -53,  -45,  -23,
   -4, -129,  -61, -169,    0, -259,  -43,    2,    0,  -97,
   98,    0,    0,  167,  103,  103, -136,    0,    3,    0,
    6,  167,  167,  167,  167,  167,  167,  167,  167,  167,
   35,   36,    0,    0,    0,    0, -137,    0,    0,    0,
   11, -226,    0,    0,    0,    0,    0,    0,    0, -137,
 -260,    0,    0,   37, -204,  -33, -112,    0,  141,  -21,
    0,  -47,    0,    5,   15,    0,    0, -213, -206, -116,
 -114, -103,  -96,  -92,  -44,  -22,   25,   28, -204,   13,
    0,  141,    0,  -94, -202,    9,  103,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -226, -223,    0,
    0, -226, -223, -223, -226, -226,  103,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   16,   17,    0, -284,
   13,   13,   72,   72,   72,   72,  -12,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    1,   24,
   72,    0, -202, -202,    0,    0,    0,    0, -226,   69,
   72,    0, -288,    0,    0, -247,    0,    0,   34,   24,
    0,   72,    0,   72,    0,    0,   33,    0,
};
static const YYINT yyrindex[] = {                         0,
   73,    0,  346,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -20,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   38,
    0,    0,    0,    0,    0,    0,  119,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -59,
    0,    0,    0,  -20,    0,    0,    0,    0,    0,    0,
    0,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -222,    0,    0,    0,    0,    0,
    0,   43,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -58,    0,
    0, -279,    0, -275, -135, -274,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -228,
    0,    0,   46,  114,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -228,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                       365,
    0,    0,  328,  -90,    7,   -1,  -18,    0,  315,  311,
  -63,  -27,    0,    0,  279,    0,    0,  170,  251,   -2,
  -60,    0,    0,    0,    0,    0,    0,    0,  -87,   93,
    0,
};
#define YYTABLESIZE 435
static const YYINT yytable[] = {                         11,
   29,  138,   58,  113,  107,  110,    1,   10,    4,    5,
    6,    7,    8,  171,  172,   45,   13,  210,  149,   44,
   46,  149,  211,   71,  192,   28,   58,   45,   53,   45,
   14,   44,   46,   44,   46,   87,   52,  106,   19,  179,
  180,   20,   86,   86,  149,   19,  181,   88,  140,   22,
   23,   32,   33,   24,   25,   26,   27,  178,  212,  132,
   52,  184,   21,  213,  187,  188,   86,   86,   86,   86,
   86,   86,  132,   52,   22,   23,  177,  110,   24,   25,
   26,   27,  110,   30,   86,   36,   86,    4,    5,    6,
    7,    8,   19,  173,  174,  158,  189,  175,  176,   19,
   37,   38,  159,   64,   39,   40,   65,   41,  207,   42,
   43,   44,   45,   46,   47,   48,   49,   50,   51,   66,
    4,    5,    6,    7,    8,  102,  103,   34,   35,   67,
  182,  104,  129,  111,  182,  182,  208,   81,   82,   68,
   83,   85,   43,   44,   45,   46,   47,   48,   49,   50,
   51,   72,  150,  151,  195,  196,  197,  198,   73,   34,
   22,   23,   34,   34,   24,   25,   26,   27,  193,  194,
  130,   34,  205,   34,   91,   92,  142,  143,  144,  145,
  146,  147,  209,    4,    5,    6,    7,    8,  202,   19,
   74,   19,  160,  216,  161,  217,  152,   23,   23,   23,
   23,   23,   19,  171,  172,  162,   86,   86,  202,   19,
   23,   23,  163,   19,   23,   23,  164,   23,   75,   23,
   23,   23,   23,   23,   23,   23,   23,   23,   23,   76,
   86,   86,   86,   86,   86,   86,   38,   38,   38,   38,
   38,   38,   38,  150,  151,  185,  186,   87,   38,   84,
   38,   23,  150,  151,   77,  142,  143,  144,  145,  146,
  147,   19,   78,   89,  165,  150,  151,  142,  143,  144,
  145,  146,  147,  150,  151,  148,  142,  143,  144,  145,
  146,  147,  169,   19,   79,  110,  166,  155,  110,  142,
  143,  144,  145,  146,  147,   69,  199,  142,  143,  144,
  145,  146,  147,   80,  127,  128,  141,  200,   90,  116,
   22,   23,  117,  156,   24,   25,   26,   27,  137,  167,
  130,  157,  168,   22,   23,  190,  191,   24,   25,   26,
   27,  201,   70,    4,    5,    6,    7,    8,  111,  214,
   36,  218,  110,   36,   36,    1,   37,   38,  110,   79,
   39,   40,   36,   41,   36,   42,   43,   44,   45,   46,
   47,   48,   49,   50,   51,  102,  103,   12,   86,   22,
   23,  104,  105,   24,   25,   26,   27,  112,  139,  215,
  170,    0,   43,   44,   45,   46,   47,   48,   49,   50,
   51,  101,   93,   94,   95,   96,   97,   98,   99,  118,
  119,  120,  121,  122,  123,  124,  125,  126,   35,    0,
    0,   35,   35,   73,   73,   73,   73,   73,   73,   73,
   35,    0,   35,    4,    5,    6,    7,    8,   15,  142,
  143,  144,  145,  146,  147,
};
static const YYINT yycheck[] = {                          1,
   19,   92,   30,   67,   65,   66,  278,    1,  257,  258,
  259,  260,  261,  298,  299,  295,  270,  306,  106,  295,
  295,  109,  311,   42,  309,   19,   54,  307,   30,  309,
  308,  307,  307,  309,  309,  295,   30,   65,  306,  263,
  264,  309,  265,  266,  132,  306,  270,  307,  309,  298,
  299,  302,  303,  302,  303,  304,  305,  148,  306,   87,
   54,  152,  270,  311,  155,  156,  289,  290,  291,  292,
  293,  294,  100,   67,  298,  299,  137,  306,  302,  303,
  304,  305,  311,  310,  307,  270,  309,  257,  258,  259,
  260,  261,  306,  296,  297,  309,  157,  300,  301,  306,
  270,  271,  309,  308,  274,  275,  308,  277,  199,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,  308,
  257,  258,  259,  260,  261,  263,  264,  302,  303,  308,
  149,  269,  270,  270,  153,  154,  200,  267,  268,  307,
  270,  311,  280,  281,  282,  283,  284,  285,  286,  287,
  288,  308,  265,  266,  173,  174,  175,  176,  308,  295,
  298,  299,  298,  299,  302,  303,  304,  305,  171,  172,
  308,  307,  191,  309,  272,  273,  289,  290,  291,  292,
  293,  294,  201,  257,  258,  259,  260,  261,  190,  306,
  308,  306,  309,  212,  309,  214,  309,  257,  258,  259,
  260,  261,  306,  298,  299,  309,  265,  266,  210,  306,
  270,  271,  309,  306,  274,  275,  309,  277,  308,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,  308,
  289,  290,  291,  292,  293,  294,  295,  296,  297,  298,
  299,  300,  301,  265,  266,  153,  154,  295,  307,  311,
  309,  311,  265,  266,  308,  289,  290,  291,  292,  293,
  294,  306,  308,  307,  309,  265,  266,  289,  290,  291,
  292,  293,  294,  265,  266,  309,  289,  290,  291,  292,
  293,  294,  270,  306,  308,  306,  309,  309,  309,  289,
  290,  291,  292,  293,  294,  270,  309,  289,  290,  291,
  292,  293,  294,  308,  270,  270,  270,  307,  307,  307,
  298,  299,  307,  309,  302,  303,  304,  305,  308,  295,
  308,  307,  295,  298,  299,  310,  310,  302,  303,  304,
  305,  308,  307,  257,  258,  259,  260,  261,  270,  306,
  295,  309,  270,  298,  299,    0,  270,  271,  311,  307,
  274,  275,  307,  277,  309,  279,  280,  281,  282,  283,
  284,  285,  286,  287,  288,  263,  264,    3,   54,  298,
  299,  269,  270,  302,  303,  304,  305,   67,  100,  210,
  130,   -1,  280,  281,  282,  283,  284,  285,  286,  287,
  288,   64,  295,  296,  297,  298,  299,  300,  301,   72,
   73,   74,   75,   76,   77,   78,   79,   80,  295,   -1,
   -1,  298,  299,  295,  296,  297,  298,  299,  300,  301,
  307,   -1,  309,  257,  258,  259,  260,  261,  262,  289,
  290,  291,  292,  293,  294,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 349
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"CHAR","INT","FLOAT","BOOL","STR",
"VOID","TRUE","FALSE","AND_OP","OR_OP","DOLLAR_SIGN","AT_SIGN","NOT_OP","IDENT",
"IF","ELIF","ELSE","WHILE","FOR","BREAK","CONTINUE","FUNC","RETURN",
"BLTIN_SHOW_ON_MAP","BLTIN_SEARCH_LOCATION","BLTIN_GET_ROAD_SPEED",
"BLTIN_GET_LOCATION","BLTIN_TARGET","BLTIN_GET_ROADS","BLTIN_GET_CROSSROADS",
"BLTIN_GET_CROSSROADS_NUM","BLTIN_GET_ROADS_NUM","LESS_EQ_OP","GREATER_EQ_OP",
"NOT_EQ_OP","EQUALITY_OP","LESS_OP","GREATER_OP","EQUAL_OP","MULTIPLY_OP",
"DIVIDE_OP","SUB_OP","ADD_OP","MOD_OP","POW_OP","INT_LITERAL","FLOAT_LITERAL",
"STR_LITERAL","CHAR_LITERAL","COMMA","SEMICOLON","LEFT_PARANT","RIGHT_PARANT",
"CURLY_OPEN","CURLY_CLOSE","NEW_LINE","WHITE_SPACE","UNKNOWN_CHAR","UMINUS",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : function",
"program : function program",
"function : FUNC return_type IDENT LEFT_PARANT parameter_list RIGHT_PARANT block",
"return_type : data_type",
"return_type : empty",
"parameter_list : empty",
"parameter_list : VOID",
"parameter_list : data_type IDENT",
"parameter_list : parameter_list COMMA literal",
"parameter_list : parameter_list COMMA data_type IDENT",
"block : CURLY_OPEN stmt_list CURLY_CLOSE",
"block : CURLY_OPEN empty CURLY_CLOSE",
"stmt_list : stmt",
"stmt_list : stmt_list stmt",
"stmt : declaration SEMICOLON",
"stmt : assignment SEMICOLON",
"stmt : function_call SEMICOLON",
"stmt : CONTINUE SEMICOLON",
"stmt : RETURN SEMICOLON",
"stmt : RETURN IDENT SEMICOLON",
"stmt : RETURN literal SEMICOLON",
"stmt : loop",
"stmt : if_stmt",
"declaration : data_type IDENT",
"declaration : declaration EQUAL_OP RHS",
"declaration : data_type AT_SIGN IDENT EQUAL_OP CURLY_OPEN literal_list CURLY_CLOSE",
"declaration : data_type DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN tuple_list CURLY_CLOSE",
"tuple_list : tuple",
"tuple_list : tuple_list COMMA tuple",
"tuple : LEFT_PARANT literal COMMA literal RIGHT_PARANT",
"tuple : empty",
"literal_list : literal",
"literal_list : literal_list COMMA literal",
"arithmetic_exp : term",
"arithmetic_exp : arithmetic_exp ADD_OP term",
"arithmetic_exp : arithmetic_exp SUB_OP term",
"term : literal",
"term : IDENT",
"term : LEFT_PARANT arithmetic_exp RIGHT_PARANT",
"term : term MULTIPLY_OP literal",
"term : term DIVIDE_OP literal",
"term : term POW_OP literal",
"term : term MOD_OP literal",
"RHS : arithmetic_exp",
"RHS : function_call",
"RHS : bool_exp",
"function_call : IDENT LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_SHOW_ON_MAP LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_SEARCH_LOCATION LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_GET_ROAD_SPEED LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_GET_LOCATION LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_TARGET LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_GET_ROADS LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_GET_CROSSROADS LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_GET_CROSSROADS_NUM LEFT_PARANT parameter_list RIGHT_PARANT",
"function_call : BLTIN_GET_ROADS_NUM LEFT_PARANT parameter_list RIGHT_PARANT",
"literal : SUB_OP INT_LITERAL",
"literal : ADD_OP INT_LITERAL",
"literal : SUB_OP FLOAT_LITERAL",
"literal : ADD_OP FLOAT_LITERAL",
"literal : INT_LITERAL",
"literal : FLOAT_LITERAL",
"literal : STR_LITERAL",
"literal : CHAR_LITERAL",
"assignment_op : EQUAL_OP",
"assignment_op : MULTIPLY_OP",
"assignment_op : DIVIDE_OP",
"assignment_op : SUB_OP",
"assignment_op : ADD_OP",
"assignment_op : MOD_OP",
"assignment_op : POW_OP",
"assignment : LHS assignment_op RHS",
"LHS : IDENT",
"loop : while",
"loop : for",
"while : WHILE LEFT_PARANT bool_exp RIGHT_PARANT block",
"for : FOR LEFT_PARANT for_stmt RIGHT_PARANT block",
"for_stmt : for_init SEMICOLON bool_exp SEMICOLON assignment",
"for_init : declaration",
"for_init : assignment",
"if_stmt : IF LEFT_PARANT bool_exp RIGHT_PARANT block",
"if_stmt : IF LEFT_PARANT function_call RIGHT_PARANT block",
"if_stmt : if_stmt ELIF LEFT_PARANT bool_exp RIGHT_PARANT block",
"if_stmt : if_stmt ELSE block",
"bool_exp : comparison",
"bool_exp : IDENT",
"bool_exp : NOT_OP IDENT",
"bool_exp : TRUE",
"bool_exp : FALSE",
"comparison : bool_exp relational_op compared",
"comparison : bool_exp logic_op compared",
"comparison : function_call relational_op compared",
"compared : IDENT",
"compared : FALSE",
"compared : TRUE",
"compared : literal",
"relational_op : LESS_EQ_OP",
"relational_op : GREATER_EQ_OP",
"relational_op : NOT_EQ_OP",
"relational_op : EQUALITY_OP",
"relational_op : LESS_OP",
"relational_op : GREATER_OP",
"logic_op : AND_OP",
"logic_op : OR_OP",
"data_type : CHAR",
"data_type : INT",
"data_type : FLOAT",
"data_type : BOOL",
"data_type : STR",
"empty :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 161 "project.y"
#include "lex.yy.c"
int yyerror (char *s) {
        printf("Line no: %d found error\n", yylineno);
}
int main (void) {
	yyparse();
}
#line 512 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
