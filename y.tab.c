/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int errorCount = 0;
#line 6 "project.y" /* yacc.c:339  */

int yylex();
int yyerror(char *s);
void error_msg(char *s);

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    MULTIPLY_OP = 297,
    DIVIDE_OP = 298,
    SUB_OP = 299,
    ADD_OP = 300,
    MOD_OP = 301,
    POW_OP = 302,
    INT_LITERAL = 303,
    FLOAT_LITERAL = 304,
    STR_LITERAL = 305,
    CHAR_LITERAL = 306,
    COMMA = 307,
    SEMICOLON = 308,
    LEFT_PARANT = 309,
    RIGHT_PARANT = 310,
    CURLY_OPEN = 311,
    CURLY_CLOSE = 312,
    NEW_LINE = 313,
    WHITE_SPACE = 314,
    UNKNOWN_CHAR = 315,
    GPS = 316,
    ROAD = 317,
    CROSSROAD = 318,
    ROADS = 319,
    CROSSROADS = 320,
    GRAPH = 321,
    USER = 322,
    HOME = 323,
    HOSPITAL = 324,
    SCHOOL = 325,
    BRIDGE = 326,
    MALL = 327,
    BUSSTOP = 328,
    HOTEL = 329,
    POSTOFFICE = 330,
    BLTIN_COLLOBORATE_USERS = 331,
    BLTIN_INSTRUCT_USER = 332,
    BLTIN_INCREASE_SCORE_OF_ROAD = 333,
    BLTIN_DECREASE_SCORE_OF_ROAD = 334,
    BLTIN_GET_SCORE_OF_ROAD = 335,
    BLTIN_SHOW_ROAD_ON_MAP = 336,
    BLTIN_SHOW_CROSSROAD_ON_MAP = 337,
    BLTIN_ADD_CROSSROAD = 338,
    BLTIN_ADD_ROAD = 339,
    UMINUS = 340
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
#define MULTIPLY_OP 297
#define DIVIDE_OP 298
#define SUB_OP 299
#define ADD_OP 300
#define MOD_OP 301
#define POW_OP 302
#define INT_LITERAL 303
#define FLOAT_LITERAL 304
#define STR_LITERAL 305
#define CHAR_LITERAL 306
#define COMMA 307
#define SEMICOLON 308
#define LEFT_PARANT 309
#define RIGHT_PARANT 310
#define CURLY_OPEN 311
#define CURLY_CLOSE 312
#define NEW_LINE 313
#define WHITE_SPACE 314
#define UNKNOWN_CHAR 315
#define GPS 316
#define ROAD 317
#define CROSSROAD 318
#define ROADS 319
#define CROSSROADS 320
#define GRAPH 321
#define USER 322
#define HOME 323
#define HOSPITAL 324
#define SCHOOL 325
#define BRIDGE 326
#define MALL 327
#define BUSSTOP 328
#define HOTEL 329
#define POSTOFFICE 330
#define BLTIN_COLLOBORATE_USERS 331
#define BLTIN_INSTRUCT_USER 332
#define BLTIN_INCREASE_SCORE_OF_ROAD 333
#define BLTIN_DECREASE_SCORE_OF_ROAD 334
#define BLTIN_GET_SCORE_OF_ROAD 335
#define BLTIN_SHOW_ROAD_ON_MAP 336
#define BLTIN_SHOW_CROSSROAD_ON_MAP 337
#define BLTIN_ADD_CROSSROAD 338
#define BLTIN_ADD_ROAD 339
#define UMINUS 340

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 298 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   688

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    30,    31,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    56,    57,    58,
      59,    60,    62,    63,    65,    66,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    92,    93,
      94,    95,    96,    98,    99,   100,   101,   102,   104,   105,
     106,   107,   109,   110,   112,   113,   114,   115,   116,   118,
     119,   120,   122,   123,   125,   126,   127,   129,   130,   132,
     133,   134,   136,   137,   138,   139,   140,   144,   145,   146,
     147,   148,   149,   151,   152,   153,   154,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   178,   179,   181,
     182,   184,   185,   187,   188,   190,   191,   193,   194,   195,
     196,   197,   198,   199,   200,   202,   203,   204,   205,   206,
     207,   208,   210,   212,   213,   215,   216,   218,   220,   222,
     224,   225,   227,   228,   229,   230,   232,   233,   234,   235,
     236,   238,   239,   240,   242,   243,   244,   245,   247,   248,
     249,   250,   251,   252,   254,   255,   257,   258,   259,   260,
     261,   263,   264,   265,   266,   267,   268,   269,   270,   272,
     273,   274,   275,   277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "INT", "FLOAT", "BOOL", "STR",
  "VOID", "TRUE", "FALSE", "AND_OP", "OR_OP", "DOLLAR_SIGN", "AT_SIGN",
  "NOT_OP", "IDENT", "IF", "ELIF", "ELSE", "WHILE", "FOR", "BREAK",
  "CONTINUE", "FUNC", "RETURN", "BLTIN_SHOW_ON_MAP",
  "BLTIN_SEARCH_LOCATION", "BLTIN_GET_ROAD_SPEED", "BLTIN_GET_LOCATION",
  "BLTIN_TARGET", "BLTIN_GET_ROADS", "BLTIN_GET_CROSSROADS",
  "BLTIN_GET_CROSSROADS_NUM", "BLTIN_GET_ROADS_NUM", "LESS_EQ_OP",
  "GREATER_EQ_OP", "NOT_EQ_OP", "EQUALITY_OP", "LESS_OP", "GREATER_OP",
  "EQUAL_OP", "MULTIPLY_OP", "DIVIDE_OP", "SUB_OP", "ADD_OP", "MOD_OP",
  "POW_OP", "INT_LITERAL", "FLOAT_LITERAL", "STR_LITERAL", "CHAR_LITERAL",
  "COMMA", "SEMICOLON", "LEFT_PARANT", "RIGHT_PARANT", "CURLY_OPEN",
  "CURLY_CLOSE", "NEW_LINE", "WHITE_SPACE", "UNKNOWN_CHAR", "GPS", "ROAD",
  "CROSSROAD", "ROADS", "CROSSROADS", "GRAPH", "USER", "HOME", "HOSPITAL",
  "SCHOOL", "BRIDGE", "MALL", "BUSSTOP", "HOTEL", "POSTOFFICE",
  "BLTIN_COLLOBORATE_USERS", "BLTIN_INSTRUCT_USER",
  "BLTIN_INCREASE_SCORE_OF_ROAD", "BLTIN_DECREASE_SCORE_OF_ROAD",
  "BLTIN_GET_SCORE_OF_ROAD", "BLTIN_SHOW_ROAD_ON_MAP",
  "BLTIN_SHOW_CROSSROAD_ON_MAP", "BLTIN_ADD_CROSSROAD", "BLTIN_ADD_ROAD",
  "UMINUS", "$accept", "program", "function", "return_type",
  "parameter_list", "argument_list", "block", "stmt_list", "stmt",
  "declaration", "three_d_arguments", "graph_arguments", "road",
  "cross_road", "roads_list", "cross_roads_list", "tuple", "literal_list",
  "tuple_list", "arithmetic_exp", "term", "RHS", "function_call",
  "destination", "user_param", "road_param", "str_param", "long_lat_param",
  "literal", "assignment_op", "assignment", "LHS", "loop", "while", "for",
  "for_stmt", "for_init", "if_stmt", "bool_exp", "comparison", "compared",
  "relational_op", "logic_op", "data_type", "three_d_objects", "geo_types",
  "empty", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -325

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-325)))

#define YYTABLE_NINF -204

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      87,  -325,   198,    53,   228,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,    69,    79,    86,    93,  -325,  -325,  -325,    56,
    -325,  -325,  -325,   416,  -325,   172,   262,   263,   277,  -325,
     198,    58,   104,  -325,   122,  -325,   143,  -325,   278,   296,
     325,   294,  -325,  -325,  -325,  -325,   147,  -325,   156,  -325,
     166,  -325,   136,   145,   165,   209,   223,   239,   249,   384,
     275,   326,   347,   363,   364,   386,   387,   388,   392,   336,
     366,   368,   210,   420,   393,   426,   447,   458,   459,   464,
     465,   473,   477,   382,  -325,    -3,   421,   472,   199,  -325,
    -325,  -325,   190,   414,   455,   481,  -325,  -325,  -325,   206,
     205,   205,    74,  -325,  -325,  -325,    -9,   288,  -325,  -325,
    -325,  -325,  -325,   107,   -10,   144,  -325,     6,     2,    10,
      28,     2,    46,    10,    10,    46,   524,   500,   545,   525,
     559,   535,   537,   538,    28,    28,    10,    10,    10,    10,
      46,   564,   565,  -325,  -325,   466,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,   466,   528,    58,   567,
    -325,   568,   546,  -325,  -325,   417,  -325,  -325,  -325,  -325,
    -325,   569,   145,   467,    21,  -325,   308,    34,  -325,  -325,
     555,  -325,   531,   547,  -325,  -325,  -325,  -325,   124,   107,
     107,  -325,   514,   523,   544,   553,  -325,  -325,   556,  -325,
    -325,   552,  -325,    49,  -325,   558,  -325,     2,   566,   570,
    -325,     6,   571,  -325,  -325,   572,   573,   574,   581,   576,
     582,   577,   583,    46,   543,   578,   584,   585,   580,   586,
     587,   588,   589,   593,   594,    64,   497,   314,  -325,   308,
     579,  -325,   205,  -325,   592,   597,   595,   561,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,    58,    77,  -325,  -325,
      58,    77,    77,    58,    58,   205,  -325,   144,   144,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,     6,  -325,   596,
     598,  -325,   599,  -325,  -325,   600,  -325,  -325,  -325,  -325,
     591,  -325,   601,  -325,   602,  -325,    50,     2,    28,   113,
    -325,  -325,  -325,  -325,  -325,    46,    10,   295,   603,   604,
       2,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,   517,   606,   116,   117,    46,     6,
     576,   123,    46,   610,    46,   563,  -325,   611,   609,   167,
    -325,   612,   613,   614,    58,   346,   138,   618,    20,  -325,
     616,   617,   619,   620,   621,   622,  -325,   -15,  -325,  -325,
     141,  -325,  -325,   173,  -325,   146,   418,  -325,    46,  -325,
    -325,   626,  -325,  -325,  -325,  -325,   201,  -325,  -325,  -325,
       2,   261,  -325,    46,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,   576,  -325,   157,  -325,    46,  -325,  -325,   123,   627,
     625,    46,   346,  -325,   629,   158,  -325,   628,  -325,  -325,
    -325,  -325,   469,   159,  -325,   630,  -325,    46,  -325,     2,
    -325,  -325,  -325,   123,  -325,   631,   632,   471,  -325,    46,
    -325,   633,  -325
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,   203,     0,     0,   186,   187,   188,   189,   190,
     199,   200,   201,   202,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     6,    10,     8,    12,     1,     3,     0,
       7,    11,     9,   203,    14,     0,     0,     0,     0,    13,
       0,     0,     0,    15,     0,    19,     0,    17,     0,     0,
       0,     0,     4,    16,    20,    18,     0,    21,     0,    25,
       0,    23,   154,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,    43,
     155,   156,    44,     0,     0,     0,    22,    26,    24,   203,
       0,     0,     0,    39,    40,    93,     0,     0,   141,   142,
     143,   144,    41,     0,     0,    89,    92,     0,     0,     0,
       0,     0,   203,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,     0,     0,    32,    35,     0,    36,    38,    37,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
      45,     0,     0,    33,    28,     0,    29,    27,   126,   169,
     170,     0,   167,     0,     0,   166,     0,     0,   154,   153,
     160,   161,     0,     0,   137,   139,   138,   140,     0,     0,
       0,    42,     0,     0,     0,     0,   136,   135,     0,   134,
     133,     0,   132,   203,   131,     0,   130,     0,     0,     0,
      73,     0,     0,    72,    83,     0,     0,     0,     0,   203,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,    93,   103,    46,   104,
     105,   152,     0,   165,     0,     0,     0,     0,   107,   168,
     178,   179,   180,   181,   182,   183,     0,     0,   184,   185,
       0,     0,     0,     0,     0,     0,    94,    91,    90,    99,
      95,   100,    96,   102,    98,   101,    97,     0,   109,     0,
       0,   110,     0,   111,   112,     0,   113,   114,   116,   115,
       0,    48,     0,    50,     0,    51,   203,     0,     0,   203,
     119,   120,   121,   122,   123,   203,     0,     0,     0,     0,
       0,    30,    31,   163,   176,   175,   174,   177,   173,   162,
     171,   172,   157,   158,     0,     0,   203,   203,   203,     0,
     203,   203,   203,     0,   203,     0,    63,     0,     0,     0,
     128,     0,     0,     0,     0,   203,   203,     0,     0,   108,
       0,     0,     0,     0,     0,     0,    87,     0,    76,    75,
       0,    74,    80,     0,    79,     0,     0,    54,   203,   117,
     134,     0,   118,   124,   125,   164,     0,    85,    84,    59,
       0,     0,    60,   203,   159,    71,    70,    69,    68,   129,
      82,   203,    49,     0,    52,   203,    53,    64,   203,     0,
       0,   203,     0,    47,     0,     0,    57,     0,    88,    78,
      77,    81,     0,     0,    55,     0,    86,   203,    62,     0,
      56,    65,    66,   203,   127,     0,     0,     0,    58,   203,
      67,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,   635,  -325,  -325,  -325,  -325,  -158,  -325,   541,   542,
    -325,  -325,  -223,  -131,  -324,   309,  -206,  -325,  -325,   -56,
     193,   474,   -42,  -325,  -120,  -119,  -126,  -121,  -107,  -325,
    -109,  -325,  -325,  -325,  -325,  -325,  -325,  -325,   -99,  -325,
     154,  -166,  -325,    14,    61,     8,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    35,   175,    52,    93,    94,    95,
     391,   345,   214,   372,   370,   373,   223,   386,   367,   247,
     125,   248,   186,   351,   218,   215,   211,   295,   126,   166,
      97,    98,    99,   100,   101,   192,   193,   102,   250,   185,
     328,   271,   272,   103,   104,    25,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   222,   176,   191,   227,   219,   208,   290,   303,    96,
     253,   184,   187,   124,   225,   226,    23,   267,   209,   242,
     267,   188,   206,   301,   236,   237,   212,   238,   239,   240,
     241,    39,   268,   269,   199,   200,   189,   401,   155,   194,
     195,    38,   402,   201,   216,   268,   269,    36,    50,   105,
     156,    96,   210,    27,    48,   207,   260,   261,   262,   263,
     264,   265,   220,    24,   213,   289,   343,   198,   183,   260,
     261,   262,   263,   264,   265,   188,   270,     5,     6,     7,
       8,     9,   217,   267,   422,    29,   324,   325,     1,   273,
     189,   292,    30,   326,    37,   280,   282,   284,   286,    31,
     221,    49,   305,   221,   344,  -106,    32,   177,   323,   437,
      33,     2,   329,   249,    51,   332,   333,  -106,   369,  -106,
      53,   116,   117,   115,   249,   118,   119,   120,   121,   220,
     361,   363,   360,   362,   366,    79,    80,    81,    54,   368,
      82,    83,    14,    15,    16,    17,    18,    19,    20,    21,
     322,   116,   117,   317,   389,   118,   119,   120,   121,    55,
     327,   123,   407,   106,   327,   327,   335,   349,   199,   200,
     221,   221,   107,   419,   428,   432,   334,   213,   350,   276,
     420,   347,   108,   380,   352,   369,   202,   203,   348,  -126,
     204,   205,   390,   403,   357,   418,   385,   353,   404,   109,
     408,     5,     6,     7,     8,     9,   178,   364,   167,   168,
     369,   213,   429,   433,   179,   180,   207,   210,   365,   110,
     181,   182,   174,   381,    40,   405,   142,    41,    -2,     1,
     406,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     159,   160,   161,   162,   163,   164,   165,   410,   387,   394,
     116,   117,     2,   412,   118,   119,   120,   121,   413,    10,
      11,    12,   417,   111,   414,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   421,    42,    44,   112,    43,    45,
     425,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      46,    56,   113,    47,    57,    62,   435,     5,     6,     7,
       8,     9,   114,   436,   346,   426,   268,   269,   441,    58,
      63,    64,    59,   415,    65,    66,    67,    68,   416,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   127,
     260,   261,   262,   263,   264,   265,   196,   197,    60,   371,
     374,    61,   374,   260,   261,   262,   263,   264,   265,   136,
     354,  -203,   137,   388,   392,    79,    80,    81,   199,   200,
      82,    83,    14,    15,    16,    17,    18,    19,    20,    21,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   138,
     128,   140,   139,    62,   141,     5,     6,     7,     8,     9,
     116,   117,   277,   278,   118,   119,   120,   121,    63,    64,
     115,   129,    65,    66,    67,    68,   371,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,   130,   131,     5,
       6,     7,     8,     9,    34,   330,   331,   169,   116,   117,
     170,   371,   118,   119,   120,   121,   143,   122,   123,   153,
     132,   133,   134,    79,    80,    81,   135,   144,    82,    83,
      14,    15,    16,    17,    18,    19,    20,    21,    84,    85,
      86,    87,    88,    89,    90,    91,    92,   245,   171,   257,
     405,   172,   258,   409,   157,   179,   180,    10,    11,    12,
     145,   181,   246,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   146,   260,   261,   262,   263,   264,   265,  -167,  -167,
     116,   117,   147,   148,   118,   119,   120,   121,   149,   150,
     123,   403,   266,   403,   431,   158,   440,   151,   268,   269,
     279,   152,  -167,  -167,  -167,  -167,  -167,  -167,   173,   281,
     228,   229,    84,    85,    86,    87,    88,    89,    90,    91,
      92,   109,   260,   261,   262,   263,   264,   265,   116,   117,
     283,   230,   118,   119,   120,   121,   231,   116,   117,   285,
     358,   118,   119,   120,   121,   232,   233,   321,   234,   235,
     243,   244,   252,   254,   255,   259,   274,   256,   116,   117,
     268,   269,   118,   119,   120,   121,   155,   116,   117,   306,
     275,   118,   119,   120,   121,   116,   117,   288,   287,   118,
     119,   120,   121,   291,   260,   261,   262,   263,   264,   265,
     377,   293,   300,   302,   304,   294,   296,   297,   298,   299,
     221,   213,   307,   318,   154,   310,   308,   309,   319,    28,
     251,   311,   312,   313,   314,   315,   316,   340,   336,   320,
     337,   338,   339,   376,   190,     0,     0,   341,   342,   355,
     356,   359,   375,   378,   379,     0,     0,   382,   383,   384,
     393,   395,   396,     0,   397,   398,   399,   400,   411,   423,
     424,   427,     0,   430,   439,   434,   438,     0,   442
};

static const yytype_int16 yycheck[] =
{
       2,   132,   109,   112,   135,   131,   127,   213,   231,    51,
     168,   110,   111,    69,   133,   134,     2,   183,    16,   150,
     186,     1,    16,   229,   144,   145,    16,   146,   147,   148,
     149,    33,    11,    12,    44,    45,    16,    52,    41,    48,
      49,    33,    57,    53,    16,    11,    12,    33,    40,    51,
      53,    93,    50,     0,    40,    49,    35,    36,    37,    38,
      39,    40,    16,     2,    54,    16,    16,   123,   110,    35,
      36,    37,    38,    39,    40,     1,    55,     3,     4,     5,
       6,     7,    54,   249,   408,    16,     9,    10,     1,    55,
      16,   217,    13,    16,    33,   202,   203,   204,   205,    13,
      54,    40,   233,    54,    54,    41,    13,   109,   266,   433,
      54,    24,   270,   155,    56,   273,   274,    53,   341,    55,
      16,    44,    45,    16,   166,    48,    49,    50,    51,    16,
     336,   337,    16,    16,   340,    61,    62,    63,    16,    16,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     257,    44,    45,   252,    16,    48,    49,    50,    51,    16,
     267,    54,    16,    16,   271,   272,   287,    54,    44,    45,
      54,    54,    16,    16,    16,    16,   275,    54,   309,    55,
     403,   307,    16,    16,   315,   408,    42,    43,   308,    53,
      46,    47,    54,    52,   320,   401,   354,   316,    57,    54,
      54,     3,     4,     5,     6,     7,     1,   338,    18,    19,
     433,    54,    54,    54,     9,    10,    49,    50,   339,    54,
      15,    16,    16,   349,    52,    52,    16,    55,     0,     1,
      57,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      41,    42,    43,    44,    45,    46,    47,   378,   355,   358,
      44,    45,    24,    52,    48,    49,    50,    51,    57,    61,
      62,    63,   393,    54,   390,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   405,    13,    13,    54,    16,    16,
     411,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      13,    13,    53,    16,    16,     1,   427,     3,     4,     5,
       6,     7,    53,   429,   306,   412,    11,    12,   439,    13,
      16,    17,    16,    52,    20,    21,    22,    23,    57,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    54,
      35,    36,    37,    38,    39,    40,    48,    49,    13,   341,
     342,    16,   344,    35,    36,    37,    38,    39,    40,    13,
      55,    57,    16,   355,   356,    61,    62,    63,    44,    45,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    13,
      54,    13,    16,     1,    16,     3,     4,     5,     6,     7,
      44,    45,   199,   200,    48,    49,    50,    51,    16,    17,
      16,    54,    20,    21,    22,    23,   408,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    54,    54,     3,
       4,     5,     6,     7,     8,   271,   272,    13,    44,    45,
      16,   433,    48,    49,    50,    51,    16,    53,    54,    57,
      54,    54,    54,    61,    62,    63,    54,    54,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     1,    13,    52,
      52,    16,    55,    55,    53,     9,    10,    61,    62,    63,
      54,    15,    16,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    54,    35,    36,    37,    38,    39,    40,    11,    12,
      44,    45,    54,    54,    48,    49,    50,    51,    54,    54,
      54,    52,    55,    52,    55,    53,    55,    54,    11,    12,
      16,    54,    35,    36,    37,    38,    39,    40,    57,    16,
      16,    41,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    54,    35,    36,    37,    38,    39,    40,    44,    45,
      16,    16,    48,    49,    50,    51,    41,    44,    45,    16,
      53,    48,    49,    50,    51,    16,    41,    16,    41,    41,
      16,    16,    54,    16,    16,    16,    55,    41,    44,    45,
      11,    12,    48,    49,    50,    51,    41,    44,    45,    56,
      53,    48,    49,    50,    51,    44,    45,    55,    52,    48,
      49,    50,    51,    55,    35,    36,    37,    38,    39,    40,
      57,    55,    41,    41,    41,    55,    55,    55,    55,    55,
      54,    54,    54,    41,    93,    55,    52,    52,    41,     4,
     166,    55,    55,    55,    55,    52,    52,    56,    52,    54,
      52,    52,    52,   344,   112,    -1,    -1,    56,    56,    56,
      56,    55,    52,    52,    55,    -1,    -1,    55,    55,    55,
      52,    55,    55,    -1,    55,    55,    55,    55,    52,    52,
      55,    52,    -1,    55,    52,    55,    55,    -1,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    24,    87,    88,     3,     4,     5,     6,     7,
      61,    62,    63,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    89,   129,   130,   131,   132,     0,    87,    16,
      13,    13,    13,    54,     8,    90,   129,   130,   131,   132,
      52,    55,    13,    16,    13,    16,    13,    16,   129,   130,
     131,    56,    92,    16,    16,    16,    13,    16,    13,    16,
      13,    16,     1,    16,    17,    20,    21,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    61,
      62,    63,    66,    67,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    93,    94,    95,   108,   116,   117,   118,
     119,   120,   123,   129,   130,   132,    16,    16,    16,    54,
      54,    54,    54,    53,    53,    16,    44,    45,    48,    49,
      50,    51,    53,    54,   105,   106,   114,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    13,    16,    13,    16,
      13,    16,    16,    16,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    57,    94,    41,    53,    53,    53,    41,
      42,    43,    44,    45,    46,    47,   115,    18,    19,    13,
      16,    13,    16,    57,    16,    91,   114,   132,     1,     9,
      10,    15,    16,   108,   124,   125,   108,   124,     1,    16,
      95,   116,   121,   122,    48,    49,    48,    49,   105,    44,
      45,    53,    42,    43,    46,    47,    16,    49,   113,    16,
      50,   112,    16,    54,    98,   111,    16,    54,   110,   112,
      16,    54,    99,   102,   132,   111,   111,    99,    16,    41,
      16,    41,    16,    41,    41,    41,   110,   110,   111,   111,
     111,   111,    99,    16,    16,     1,    16,   105,   107,   108,
     124,   107,    54,    92,    16,    16,    41,    52,    55,    16,
      35,    36,    37,    38,    39,    40,    55,   127,    11,    12,
      55,   127,   128,    55,    55,    53,    55,   106,   106,    16,
     114,    16,   114,    16,   114,    16,   114,    52,    55,    16,
     102,    55,   112,    55,    55,   113,    55,    55,    55,    55,
      41,   102,    41,    98,    41,    99,    56,    54,    52,    52,
      55,    55,    55,    55,    55,    52,    52,   124,    41,    41,
      54,    16,   114,    92,     9,    10,    16,   114,   126,    92,
     126,   126,    92,    92,   124,   113,    52,    52,    52,    52,
      56,    56,    56,    16,    54,    97,   132,   112,   110,    54,
      99,   109,    99,   111,    55,    56,    56,   112,    53,    55,
      16,   102,    16,   102,    99,   113,   102,   104,    16,    98,
     100,   132,    99,   101,   132,    52,   101,    57,    52,    55,
      16,   112,    55,    55,    55,    92,   103,   114,   132,    16,
      54,    96,   132,    52,   116,    55,    55,    55,    55,    55,
      55,    52,    57,    52,    57,    52,    57,    16,    54,    55,
      99,    52,    52,    57,   112,    52,    57,    99,   102,    16,
      98,    99,   100,    52,    55,    99,   114,    52,    16,    54,
      55,    55,    16,    54,    55,    99,   112,   100,    55,    52,
      55,    99,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   105,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   116,   117,   117,   118,   118,   119,   120,   121,
     122,   122,   123,   123,   123,   123,   124,   124,   124,   124,
     124,   125,   125,   125,   126,   126,   126,   126,   127,   127,
     127,   127,   127,   127,   128,   128,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   131,   131,   132
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     7,     1,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     2,     3,     2,     3,     2,
       3,     4,     5,     4,     5,     4,     5,     1,     1,     1,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     2,     3,     7,     4,     7,
       4,     4,     7,     7,     6,     8,     8,     7,     5,     1,
       1,     7,     3,     1,     3,     5,     5,     7,     5,     5,
       5,     5,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     3,     5,     1,     1,     1,     3,     1,     3,     1,
       3,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     4,     6,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     6,     4,
       4,     4,     4,     4,     6,     6,     1,     5,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     5,     5,     5,
       1,     1,     5,     5,     6,     3,     1,     1,     2,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 31 "project.y" /* yacc.c:1646  */
    {error_msg("Missing 'func', not a valid function declaration!");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 141 "project.y" /* yacc.c:1646  */
    { if ((yyvsp[0])) (yyval) = (yyvsp[-2]) / (yyvsp[0]);
			else {error_msg("Divide by zero!");}
		}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 154 "project.y" /* yacc.c:1646  */
    {error_msg("Not a valid expression!");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 176 "project.y" /* yacc.c:1646  */
    {error_msg("Missing, invalid argument or paranthesis!");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 213 "project.y" /* yacc.c:1646  */
    {error_msg("Invalid identifier declaration!");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1772 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 279 "project.y" /* yacc.c:1906  */

#include "lex.yy.c"
int yyerror (char *s) {
	errorCount++;
}
int yywrap () {
	if (errorCount == 0) {
		printf("The program was compiled successfully.\n");
	}
	return 1;
}
void error_msg (char *s) {
	printf("%s Line no: %d found error \n", s, yylineno);
}
int main (void) {
	yyparse();
}
