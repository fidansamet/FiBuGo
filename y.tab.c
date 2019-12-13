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
    0,    0,    1,    2,    2,    3,    3,    3,    3,    4,
    4,    7,    7,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    9,    9,    9,    9,   17,   17,   18,   18,
   16,   16,   19,   19,   19,   19,   19,   20,   20,   20,
   20,   20,   20,   15,   15,   15,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   11,   12,   12,   12,   12,
   12,   12,   12,   12,   22,   22,   22,   22,   22,   22,
   22,   10,   23,   13,   13,   24,   25,   26,   27,   27,
   14,   14,   14,   14,   21,   21,   21,   21,   21,   28,
   28,   28,   30,   30,   30,   30,   29,   29,   29,   29,
   29,   29,   31,   31,    5,    5,    5,    5,    5,    6,
};
static const YYINT yylen[] = {                            2,
    1,    2,    7,    1,    1,    1,    1,    2,    4,    3,
    3,    1,    2,    2,    2,    2,    2,    2,    3,    3,
    1,    1,    2,    3,    7,    7,    1,    3,    5,    1,
    1,    3,    1,    3,    3,    2,    2,    1,    1,    3,
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
    8,    0,    0,    3,    9,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   12,    0,    0,    0,   21,    0,    0,
   74,   75,    0,    0,    0,    0,   17,    0,    0,    0,
   61,   62,   63,   64,   18,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   23,   11,   10,
   13,    0,   14,   15,   16,    0,    0,   65,   66,   67,
   68,   69,   70,   71,    0,    0,   88,   89,    0,    0,
    0,    0,   85,    0,    0,   73,    0,   80,    0,    0,
   19,   57,   59,   58,   60,   20,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   38,   24,    0,    0,    0,    0,   84,   72,   47,
   87,   97,   98,   99,  100,  101,  102,    0,    0,  103,
  104,    0,    0,    0,    0,    0,    0,   48,   49,   50,
   51,   52,   53,   54,   55,   56,    0,    0,   39,   57,
   59,    0,   58,   60,    0,    0,    0,    0,    0,    0,
    0,    0,   82,   95,   94,   93,   96,   92,   81,   90,
   91,   76,   77,    0,    0,    0,    0,    0,   40,   41,
   43,   42,    0,    0,    0,   30,    0,   27,   31,    0,
   83,   78,    0,    0,   26,    0,   25,    0,   28,   32,
    0,   29,
};
static const YYINT yydgoto[] = {                          2,
    3,    9,   16,   24,   17,   18,   43,   44,   45,   46,
  104,  132,   48,   49,  133,  210,  207,  208,  134,  135,
  136,   95,   50,   51,   52,  109,  110,  103,  153,  188,
  154,
};
static const YYINT yysindex[] = {                      -267,
  -68,    0, -267,    0,    0,    0,    0,    0, -249,    0,
    0,    0, -272,  147,    0, -259, -188,    0,  -68, -226,
    0, -116,   32,    0,    0, -121,  -90,  -84,  -78, -125,
  -39,  -76,  -54,  -41,  -29,  -24,   -4,   -3,    2,   15,
 -260,  -97, -242,    0, -173,  -38,    1,    0, -215,   93,
    0,    0,  147,   58,   58,  126,    0,   17, -211, -177,
    0,    0,    0,    0,    0,   29,  147,  147,  147,  147,
  147,  147,  147,  147,  147,   -8,   65,    0,    0,    0,
    0,  -47,    0,    0,    0,   61, -226,    0,    0,    0,
    0,    0,    0,    0,  -47, -241,    0,    0,   94, -121,
   67,  -94,    0,  121,  -88,    0,   79,    0,  -31,   88,
    0,    0,    0,    0,    0,    0, -136,  -81,  -80,  -26,
   28,   56,   64,   72,  110,   84,  123, -121, -189,  -28,
  121,    0,    0, -171, -132,    7,   58,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -226, -250,    0,
    0, -226, -250, -250, -226, -226,   58,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  112,  113,    0,    0,
    0, -171,    0,    0, -171,  -17,  -17,   27,   27,   27,
   27,  -82,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -46,  116,   27, -132, -132,    0,    0,
    0,    0, -226,  151,   27,    0, -281,    0,    0, -245,
    0,    0,  119,  116,    0,   27,    0,   27,    0,    0,
  117,    0,
};
static const YYINT yyrindex[] = {                         0,
  157,    0,  428,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  111,    0,    0,    0,    0,    0,    0,
    0,    0,  120,    0,    0,  102,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -181,    0,
    0,    0,  111,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  111,  111,  111,  111,
  111,  111,  111,  111,  111,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -133,
    0,    0,    0,    0,    0,    0,  122,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -154,    0,    0,
 -283,    0,    0, -235, -178, -222,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -212,    0,    0, -128,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -126,    0,   68,   73,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -126,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const YYINT yygindex[] = {                       427,
    0,    0,  280,  -85,    8,   -1,    0,  389,  377,  -52,
  -20,  -30,    0,    0,  339,    0,    0,  221,   33,  118,
  -49,    0,    0,    0,    0,    0,    0,    0,  -45,   96,
    0,
};
#define YYTABLESIZE 435
static const YYINT yytable[] = {                         11,
   66,  138,   47,  108,  102,  105,   76,   77,   10,   78,
    1,   45,  184,  185,    4,    5,    6,    7,    8,  186,
   13,   42,   47,   45,  214,   45,   22,   26,   27,  215,
   41,   28,   29,  101,   30,   14,   31,   32,   33,   34,
   35,   36,   37,   38,   39,   40,   19,   59,   60,   20,
   41,   61,   62,   63,   64,  149,   86,   87,  149,   44,
  216,  131,  183,   41,   19,  217,  189,  140,   80,  192,
  193,   44,   46,   44,  131,   22,   22,   22,   22,   22,
  169,   21,   36,   23,   46,  149,   46,  182,   22,   22,
  112,  113,   22,   22,   36,   22,   36,   22,   22,   22,
   22,   22,   22,   22,   22,   22,   22,  194,  129,  130,
   86,   86,  170,  171,   63,   64,   33,  211,  187,   33,
   33,   82,  187,  187,  114,  115,  176,  177,   33,   22,
   33,   86,   86,   83,   86,   86,   86,   86,   86,   86,
   39,   39,   39,   39,   39,   39,   39,  199,  200,  201,
  202,  212,   39,   25,   39,   86,   86,   86,   86,   86,
   86,  172,  175,  178,  179,  209,   37,  180,  181,   19,
  150,  151,  158,   86,  213,   86,  150,  151,   37,  110,
   37,   57,  150,  151,  110,  220,   53,  221,    4,    5,
    6,    7,    8,  206,  142,  143,  144,  145,  146,  147,
  142,  143,  144,  145,  146,  147,  142,  143,  144,  145,
  146,  147,  206,   79,  152,   97,   98,   54,  150,  151,
  155,   99,  128,   55,   19,   19,  203,  159,  160,   56,
   58,   67,   32,   33,   34,   35,   36,   37,   38,   39,
   40,  169,  142,  143,  144,  145,  146,  147,  190,  191,
  129,  130,  169,   68,   61,   62,   63,   64,   59,   60,
  204,  126,   61,   62,   63,   64,   69,   65,   84,  129,
  130,  150,  151,  173,  174,   63,   64,  156,   70,   19,
   59,   60,  161,   71,   61,   62,   63,   64,    4,    5,
    6,    7,    8,  197,  198,  142,  143,  144,  145,  146,
  147,   26,   27,   72,   73,   28,   29,   85,   30,   74,
   31,   32,   33,   34,   35,   36,   37,   38,   39,   40,
   97,   98,   75,  111,   59,   60,   99,  100,   61,   62,
   63,   64,   96,   19,  127,  116,  162,   32,   33,   34,
   35,   36,   37,   38,   39,   40,  117,  118,  119,  120,
  121,  122,  123,  124,  125,  142,  143,  144,  145,  146,
  147,   19,   35,  141,  163,   35,   35,   34,  137,   19,
   34,   34,  164,   82,   35,  148,   35,   19,  167,   34,
  165,   34,    4,    5,    6,    7,    8,   88,   89,   90,
   91,   92,   93,   94,  157,  106,   73,   73,   73,   73,
   73,   73,   73,    4,    5,    6,    7,    8,   15,  142,
  143,  144,  145,  146,  147,   19,  110,  168,  166,  110,
  106,  195,  196,  205,  218,  222,  110,    1,   79,   12,
  110,   81,  107,  139,  219,
};
static const YYINT yycheck[] = {                          1,
   31,   87,   23,   56,   54,   55,  267,  268,    1,  270,
  278,  295,  263,  264,  257,  258,  259,  260,  261,  270,
  270,   23,   43,  307,  306,  309,   19,  270,  271,  311,
   23,  274,  275,   54,  277,  308,  279,  280,  281,  282,
  283,  284,  285,  286,  287,  288,  306,  298,  299,  309,
   43,  302,  303,  304,  305,  101,  272,  273,  104,  295,
  306,   82,  148,   56,  306,  311,  152,  309,  311,  155,
  156,  307,  295,  309,   95,  257,  258,  259,  260,  261,
  270,  270,  295,  310,  307,  131,  309,  137,  270,  271,
  302,  303,  274,  275,  307,  277,  309,  279,  280,  281,
  282,  283,  284,  285,  286,  287,  288,  157,  298,  299,
  265,  266,  302,  303,  304,  305,  295,  203,  149,  298,
  299,  295,  153,  154,  302,  303,  298,  299,  307,  311,
  309,  265,  266,  307,  289,  290,  291,  292,  293,  294,
  295,  296,  297,  298,  299,  300,  301,  178,  179,  180,
  181,  204,  307,  270,  309,  289,  290,  291,  292,  293,
  294,  129,  130,  296,  297,  196,  295,  300,  301,  306,
  265,  266,  309,  307,  205,  309,  265,  266,  307,  306,
  309,  307,  265,  266,  311,  216,  308,  218,  257,  258,
  259,  260,  261,  195,  289,  290,  291,  292,  293,  294,
  289,  290,  291,  292,  293,  294,  289,  290,  291,  292,
  293,  294,  214,  311,  309,  263,  264,  308,  265,  266,
  309,  269,  270,  308,  306,  306,  309,  309,  309,  308,
  270,  308,  280,  281,  282,  283,  284,  285,  286,  287,
  288,  270,  289,  290,  291,  292,  293,  294,  153,  154,
  298,  299,  270,  308,  302,  303,  304,  305,  298,  299,
  307,  270,  302,  303,  304,  305,  308,  307,  307,  298,
  299,  265,  266,  302,  303,  304,  305,  309,  308,  306,
  298,  299,  309,  308,  302,  303,  304,  305,  257,  258,
  259,  260,  261,  176,  177,  289,  290,  291,  292,  293,
  294,  270,  271,  308,  308,  274,  275,  307,  277,  308,
  279,  280,  281,  282,  283,  284,  285,  286,  287,  288,
  263,  264,  308,  307,  298,  299,  269,  270,  302,  303,
  304,  305,   53,  306,  270,  307,  309,  280,  281,  282,
  283,  284,  285,  286,  287,  288,   67,   68,   69,   70,
   71,   72,   73,   74,   75,  289,  290,  291,  292,  293,
  294,  306,  295,  270,  309,  298,  299,  295,  308,  306,
  298,  299,  309,  295,  307,  309,  309,  306,  295,  307,
  309,  309,  257,  258,  259,  260,  261,  295,  296,  297,
  298,  299,  300,  301,  307,  270,  295,  296,  297,  298,
  299,  300,  301,  257,  258,  259,  260,  261,  262,  289,
  290,  291,  292,  293,  294,  306,  306,  295,  309,  309,
  270,  310,  310,  308,  306,  309,  270,    0,  307,    3,
  311,   43,   56,   95,  214,
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
"arithmetic_exp : SUB_OP arithmetic_exp",
"arithmetic_exp : ADD_OP arithmetic_exp",
"term : literal",
"term : IDENT",
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
#line 515 "y.tab.c"

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
