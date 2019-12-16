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

#line 77 "project.tab.c" /* yacc.c:339  */

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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 209 "project.tab.c" /* yacc.c:358  */

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
#define YYLAST   666

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  448

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

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
      75,    76,    77,    78,    79,    80,    81,    82,    83
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
     119,   121,   122,   124,   125,   126,   128,   129,   131,   132,
     133,   135,   136,   140,   141,   142,   143,   144,   145,   146,
     148,   149,   150,   152,   153,   154,   155,   156,   157,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   183,   184,   186,   187,   189,   190,   192,   193,   195,
     196,   197,   198,   199,   200,   201,   202,   204,   205,   206,
     207,   208,   209,   210,   212,   214,   215,   217,   218,   220,
     222,   224,   226,   227,   229,   230,   231,   232,   234,   235,
     236,   237,   238,   240,   241,   242,   244,   245,   246,   247,
     249,   250,   251,   252,   253,   254,   256,   257,   259,   260,
     261,   262,   263,   265,   266,   267,   268,   269,   270,   271,
     272,   274,   275,   276,   277,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "INT", "FLOAT", "BOOL", "STR",
  "VOID", "TRUE", "FALSE", "AND_OP", "OR_OP", "DOLLAR_SIGN", "NOT_OP",
  "IDENT", "IF", "ELIF", "ELSE", "WHILE", "FOR", "BREAK", "CONTINUE",
  "FUNC", "RETURN", "BLTIN_SHOW_ON_MAP", "BLTIN_SEARCH_LOCATION",
  "BLTIN_GET_ROAD_SPEED", "BLTIN_GET_LOCATION", "BLTIN_TARGET",
  "BLTIN_GET_ROADS", "BLTIN_GET_CROSSROADS", "BLTIN_GET_CROSSROADS_NUM",
  "BLTIN_GET_ROADS_NUM", "LESS_EQ_OP", "GREATER_EQ_OP", "NOT_EQ_OP",
  "EQUALITY_OP", "LESS_OP", "GREATER_OP", "EQUAL_OP", "MULTIPLY_OP",
  "DIVIDE_OP", "SUB_OP", "ADD_OP", "MOD_OP", "POW_OP", "INT_LITERAL",
  "FLOAT_LITERAL", "STR_LITERAL", "CHAR_LITERAL", "COMMA", "SEMICOLON",
  "LEFT_PARANT", "RIGHT_PARANT", "CURLY_OPEN", "CURLY_CLOSE", "SQR_OPEN",
  "SQR_CLOSE", "UNKNOWN_CHAR", "GPS", "ROAD", "CROSSROAD", "GRAPH", "USER",
  "HOME", "HOSPITAL", "SCHOOL", "BRIDGE", "MALL", "BUSSTOP", "HOTEL",
  "POSTOFFICE", "BLTIN_COLLOBORATE_USERS", "BLTIN_INSTRUCT_USER",
  "BLTIN_INCREASE_SCORE_OF_ROAD", "BLTIN_DECREASE_SCORE_OF_ROAD",
  "BLTIN_GET_SCORE_OF_ROAD", "BLTIN_SHOW_ROAD_ON_MAP",
  "BLTIN_SHOW_CROSSROAD_ON_MAP", "BLTIN_ADD_CROSSROAD", "BLTIN_ADD_ROAD",
  "BLTIN_PRINT", "UMINUS", "$accept", "program", "function", "return_type",
  "parameter_list", "argument_list", "block", "stmt_list", "stmt",
  "declaration", "three_d_arguments", "graph_arguments", "road",
  "cross_road", "roads_list", "cross_roads_list", "tuple", "literal_list",
  "tuple_list", "arithmetic_exp", "term", "factor", "RHS", "function_call",
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
     335,   336,   337,   338
};
# endif

#define YYPACT_NINF -377

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-377)))

#define YYTABLE_NINF -206

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,  -377,   526,    36,   147,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,    97,   155,   175,   180,  -377,  -377,  -377,   107,
    -377,  -377,  -377,   513,  -377,   200,   203,   222,   340,  -377,
     526,   123,   136,  -377,   190,  -377,   193,  -377,   351,   380,
     388,   309,  -377,  -377,  -377,  -377,   211,  -377,   221,  -377,
     244,  -377,  -377,   166,   197,   225,   245,   212,   252,    33,
     279,   295,   301,   339,   357,   363,   378,   379,   382,   389,
     414,   415,   437,   463,   438,   449,   455,   456,   457,   458,
     459,   460,   461,   469,   393,  -377,   471,   472,   473,   401,
    -377,  -377,  -377,   126,   435,   474,   432,  -377,  -377,  -377,
     154,   467,   467,   500,  -377,  -377,  -377,    10,   237,  -377,
    -377,  -377,  -377,  -377,    92,   143,   165,  -377,  -377,   106,
      52,    20,    35,    52,    39,    20,    20,    39,   475,   486,
     512,   488,   519,   495,   496,   497,    35,    35,    20,    20,
      20,    20,    39,   523,   524,   154,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,   213,   498,
     123,   535,   514,   537,   515,  -377,  -377,   204,  -377,  -377,
    -377,  -377,   538,   195,   137,    12,  -377,   235,    18,  -377,
    -377,  -377,   502,   505,  -377,  -377,  -377,  -377,   138,    92,
      92,  -377,   232,   253,   302,   390,  -377,  -377,   507,  -377,
    -377,   522,  -377,    40,  -377,   545,  -377,    52,   546,   547,
    -377,   106,   548,  -377,  -377,   549,   550,   551,   566,   506,
     567,   536,   568,    39,   554,   557,   558,   560,   559,   561,
     562,   563,   564,   569,   570,   267,  -377,     6,   264,  -377,
     235,   315,   467,  -377,   574,   213,   579,   571,   436,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,    55,   123,    55,
    -377,  -377,   123,    55,   123,   123,   467,  -377,   165,   165,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,   106,  -377,
     572,   575,  -377,   576,  -377,  -377,   577,  -377,  -377,  -377,
    -377,   578,  -377,   580,  -377,   581,  -377,    53,    52,  -377,
      72,  -377,  -377,  -377,  -377,  -377,    39,    20,  -377,    31,
      21,   582,  -377,   583,    52,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,     9,   585,
      75,    96,    39,   106,   506,    99,    39,   589,    39,   573,
    -377,   590,   115,  -377,   588,   591,   592,   586,   593,   123,
     313,   103,   596,   131,  -377,   594,   595,   598,   599,   600,
     601,  -377,   -17,  -377,  -377,     0,  -377,  -377,   133,   104,
     268,  -377,    39,  -377,   605,  -377,  -377,  -377,  -377,  -377,
    -377,   161,  -377,  -377,  -377,    52,   169,  -377,    39,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,   506,  -377,   105,  -377,
      39,  -377,  -377,    99,   606,   604,    39,   313,  -377,   608,
     109,  -377,   607,  -377,  -377,  -377,  -377,   269,   114,  -377,
     609,  -377,    39,  -377,    52,  -377,  -377,  -377,    99,  -377,
     610,   611,   293,  -377,    39,  -377,   612,  -377
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,   205,     0,     0,   188,   189,   190,   191,   192,
     201,   202,   203,   204,   193,   194,   195,   196,   197,   198,
     199,   200,     0,     6,    10,     8,    12,     1,     3,     0,
       7,    11,     9,   205,    14,     0,     0,     0,     0,    13,
       0,     0,     0,    15,     0,    19,     0,    17,     0,     0,
       0,     0,     4,    16,    20,    18,     0,    21,     0,    25,
       0,    23,   156,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
      43,   157,   158,    44,     0,     0,     0,    22,    26,    24,
     205,     0,     0,     0,    39,    40,   102,     0,     0,   143,
     144,   145,   146,    41,     0,     0,    88,    99,   101,     0,
       0,     0,     0,     0,   205,     0,     0,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,     0,     0,   205,    32,    35,    36,    38,
      37,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,    45,     0,     0,    33,    28,     0,    29,    27,
     171,   172,     0,   169,     0,     0,   168,     0,     0,   155,
     162,   163,     0,     0,   139,   141,   140,   142,     0,     0,
       0,    42,     0,     0,     0,     0,   138,   137,     0,   136,
     135,     0,   134,   205,   133,     0,   132,     0,     0,     0,
      73,     0,     0,    72,    82,     0,     0,     0,     0,   205,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   102,   103,   154,
     104,   105,     0,   167,     0,     0,     0,     0,     0,   109,
     170,   180,   181,   182,   183,   184,   185,     0,     0,     0,
     186,   187,     0,     0,     0,     0,     0,   100,    90,    89,
      95,    91,    96,    92,    98,    94,    97,    93,     0,   111,
       0,     0,   112,     0,   113,   114,     0,   115,   116,   118,
     117,     0,    48,     0,    50,     0,    51,   205,     0,   119,
     205,   121,   122,   123,   124,   125,   205,     0,   128,     0,
       0,     0,    46,     0,     0,    30,    31,   178,   177,   176,
     179,   173,   165,   175,   164,   174,   159,   160,     0,     0,
     205,   205,   205,     0,   205,   205,   205,     0,   205,     0,
      63,     0,     0,   130,     0,     0,     0,     0,     0,     0,
     205,   205,     0,     0,   110,     0,     0,     0,     0,     0,
       0,    86,     0,    76,    75,     0,    74,    79,     0,     0,
       0,    54,   205,   136,     0,   120,   126,   127,   107,   106,
     166,     0,    84,    83,    59,     0,     0,    60,   205,   161,
      71,    70,    69,    68,   131,    81,   205,    49,     0,    52,
     205,    53,    64,   205,     0,     0,   205,     0,    47,     0,
       0,    57,     0,    87,    78,    77,    80,     0,     0,    55,
       0,    85,   205,    62,     0,    56,    65,    66,   205,   129,
       0,     0,     0,    58,   205,    67,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -377,   618,  -377,  -377,  -377,   470,  -159,  -377,   540,   517,
    -377,  -377,  -223,  -133,  -376,   283,  -207,  -377,  -377,   -53,
     168,  -377,   377,   -42,  -377,   260,  -123,  -128,  -122,  -108,
    -377,  -110,  -377,  -377,  -377,  -377,  -377,  -377,  -377,   -97,
    -377,  -146,  -173,  -377,    51,    77,    98,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    35,   177,    52,    94,    95,    96,
     396,   349,   214,   377,   375,   378,   223,   391,   372,   248,
     126,   127,   249,   187,   354,   218,   215,   211,   296,   128,
     168,    98,    99,   100,   101,   102,   192,   193,   103,   251,
     186,   331,   269,   273,   104,   105,    25,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   222,   178,   191,   227,   219,   291,   208,   304,    97,
     267,   253,   225,   226,   185,   188,   125,  -169,  -169,   242,
     270,   271,   302,   270,   271,   238,   239,   240,   241,   270,
     271,    39,   270,   271,   406,   212,    27,   427,     1,   407,
     261,   262,   263,   264,   265,   266,   357,   178,   116,   106,
     216,   408,    97,    23,   220,   290,   409,   194,   195,   110,
       2,   363,   442,   319,   327,   328,   272,   209,   347,   184,
     329,   198,   274,   213,   267,   359,   117,   118,   358,    24,
     119,   120,   121,   122,    36,   123,   124,   220,   217,   293,
     365,    48,   221,   221,   281,   283,   285,   287,   117,   118,
     306,   210,   119,   120,   121,   122,   348,   116,   179,   332,
      37,   367,    29,   334,   373,   336,   337,    49,   394,   412,
     424,   206,   374,   333,   433,   352,   250,   335,   221,   437,
     383,    38,    62,   366,   368,   117,   118,   371,    50,   119,
     120,   121,   122,   169,   170,   124,   189,    -2,     1,   221,
     326,    53,   213,   179,   207,   320,   395,   413,   213,   330,
      33,   330,   434,   207,   210,   330,   339,   438,    30,   176,
       2,   261,   262,   263,   264,   265,   266,   353,    51,   338,
     351,   199,   200,   355,   410,   425,   199,   200,    31,   411,
     374,   268,   277,    32,   356,   201,   362,   117,   118,   423,
     390,   119,   120,   121,   122,    54,   202,   203,    55,   369,
     204,   205,   417,   250,   246,   374,    42,   418,    43,   110,
     420,   370,   180,   181,   384,   421,   107,   182,   247,   261,
     262,   263,   264,   265,   266,    44,   108,    45,    70,    71,
      72,    73,    74,    75,    76,    77,    78,   280,   110,   415,
     111,    40,   392,   399,    41,   258,   117,   118,   259,   109,
     119,   120,   121,   122,   114,   422,   124,   419,   282,   261,
     262,   263,   264,   265,   266,   117,   118,   426,   112,   119,
     120,   121,   122,   430,   196,   197,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   117,   118,   113,   440,
     119,   120,   121,   122,   115,   350,   441,   199,   200,   431,
      62,   446,     5,     6,     7,     8,     9,   284,   258,   410,
     408,   318,   414,   436,    63,    64,   270,   271,    65,    66,
      67,    68,   129,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,   376,   408,   117,   118,   445,   130,   119,
     120,   121,   122,    46,   131,    47,   117,   118,   393,   397,
     119,   120,   121,   122,    56,  -205,    57,   278,   279,    79,
      80,    81,    82,    83,    14,    15,    16,    17,    18,    19,
      20,    21,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   132,    58,    62,    59,     5,     6,     7,     8,
       9,    60,   138,    61,   139,   286,   236,   237,    63,    64,
     133,   376,    65,    66,    67,    68,   134,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,   140,   142,   141,
     143,   135,   136,   117,   118,   137,   376,   119,   120,   121,
     122,   161,   162,   163,   164,   165,   166,   167,   171,   156,
     172,   325,   144,    79,    80,    81,    82,    83,    14,    15,
      16,    17,    18,    19,    20,    21,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   180,   181,   145,   117,
     118,   182,   183,   119,   120,   121,   122,   173,   175,   174,
     228,   146,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    62,   147,     5,     6,     7,     8,     9,   148,   149,
     150,   151,   152,   153,   154,   189,     5,     6,     7,     8,
       9,    34,   155,   158,   159,   160,   229,   230,   231,     5,
       6,     7,     8,     9,   232,   233,   234,   235,   243,   244,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     254,   252,   256,   260,   255,   257,   275,   276,   288,   221,
      79,    80,    81,    82,    83,    14,    15,    16,    17,    18,
      19,    20,    21,    10,    11,    12,   289,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    10,    11,    12,   213,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   292,
     294,   295,   297,   298,   299,   300,   301,   303,   305,   307,
     308,   310,   309,   311,   321,   312,   313,   314,   315,   323,
     316,   317,    28,   340,   324,   245,   341,   342,   343,   381,
     190,   380,   322,   344,   157,   345,   346,   360,   361,   364,
     379,   382,   385,     0,   388,   386,   387,   398,   400,   401,
       0,   389,   402,   403,   404,   405,   416,   428,   429,   432,
       0,   435,   444,   439,   443,     0,   447
};

static const yytype_int16 yycheck[] =
{
       2,   134,   110,   113,   137,   133,   213,   129,   231,    51,
     183,   170,   135,   136,   111,   112,    69,    11,    12,   152,
      11,    12,   229,    11,    12,   148,   149,   150,   151,    11,
      12,    33,    11,    12,    51,    15,     0,   413,     1,    56,
      34,    35,    36,    37,    38,    39,    15,   155,    15,    51,
      15,    51,    94,     2,    15,    15,    56,    47,    48,    53,
      23,    52,   438,    57,     9,    10,    54,    15,    15,   111,
      15,   124,    54,    53,   247,    54,    43,    44,    47,     2,
      47,    48,    49,    50,    33,    52,    53,    15,    53,   217,
      15,    40,    53,    53,   202,   203,   204,   205,    43,    44,
     233,    49,    47,    48,    49,    50,    53,    15,   110,   268,
      33,    15,    15,   272,    15,   274,   275,    40,    15,    15,
      15,    15,   345,   269,    15,    53,   168,   273,    53,    15,
      15,    33,     1,   340,   341,    43,    44,   344,    40,    47,
      48,    49,    50,    17,    18,    53,    15,     0,     1,    53,
     258,    15,    53,   155,    48,   252,    53,    53,    53,   267,
      53,   269,    53,    48,    49,   273,   288,    53,    13,    15,
      23,    34,    35,    36,    37,    38,    39,   310,    55,   276,
     308,    43,    44,   316,    51,   408,    43,    44,    13,    56,
     413,    54,    54,    13,   317,    52,   324,    43,    44,   406,
     359,    47,    48,    49,    50,    15,    41,    42,    15,   342,
      45,    46,    51,   255,     1,   438,    13,    56,    15,    53,
      51,   343,     9,    10,   352,    56,    15,    14,    15,    34,
      35,    36,    37,    38,    39,    13,    15,    15,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    15,    53,   382,
      53,    51,   360,   363,    54,    51,    43,    44,    54,    15,
      47,    48,    49,    50,    52,   398,    53,   395,    15,    34,
      35,    36,    37,    38,    39,    43,    44,   410,    53,    47,
      48,    49,    50,   416,    47,    48,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    43,    44,    53,   432,
      47,    48,    49,    50,    52,   307,   434,    43,    44,   417,
       1,   444,     3,     4,     5,     6,     7,    15,    51,    51,
      51,    54,    54,    54,    15,    16,    11,    12,    19,    20,
      21,    22,    53,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,   345,    51,    43,    44,    54,    53,    47,
      48,    49,    50,    13,    53,    15,    43,    44,   360,   361,
      47,    48,    49,    50,    13,    56,    15,   199,   200,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    53,    13,     1,    15,     3,     4,     5,     6,
       7,    13,    13,    15,    15,    15,   146,   147,    15,    16,
      53,   413,    19,    20,    21,    22,    53,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    13,    13,    15,
      15,    53,    53,    43,    44,    53,   438,    47,    48,    49,
      50,    40,    41,    42,    43,    44,    45,    46,    13,    56,
      15,    15,    15,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,     9,    10,    15,    43,
      44,    14,    15,    47,    48,    49,    50,    13,    56,    15,
      15,    53,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     1,    53,     3,     4,     5,     6,     7,    53,    53,
      53,    53,    53,    53,    53,    15,     3,     4,     5,     6,
       7,     8,    53,    52,    52,    52,    40,    15,    40,     3,
       4,     5,     6,     7,    15,    40,    40,    40,    15,    15,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      15,    53,    15,    15,    40,    40,    54,    52,    51,    53,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    60,    61,    62,    54,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    60,    61,    62,    53,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    54,
      54,    54,    54,    54,    54,    54,    40,    40,    40,    55,
      53,    51,    54,    54,    40,    54,    54,    54,    54,    40,
      51,    51,     4,    51,    53,   155,    51,    51,    51,    56,
     113,   348,   255,    55,    94,    55,    55,    55,    55,    54,
      51,    51,    54,    -1,    58,    54,    54,    51,    54,    54,
      -1,    58,    54,    54,    54,    54,    51,    51,    54,    51,
      -1,    54,    51,    54,    54,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    23,    85,    86,     3,     4,     5,     6,     7,
      60,    61,    62,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    87,   128,   129,   130,   131,     0,    85,    15,
      13,    13,    13,    53,     8,    88,   128,   129,   130,   131,
      51,    54,    13,    15,    13,    15,    13,    15,   128,   129,
     130,    55,    90,    15,    15,    15,    13,    15,    13,    15,
      13,    15,     1,    15,    16,    19,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    60,
      61,    62,    63,    64,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    91,    92,    93,   107,   115,   116,
     117,   118,   119,   122,   128,   129,   131,    15,    15,    15,
      53,    53,    53,    53,    52,    52,    15,    43,    44,    47,
      48,    49,    50,    52,    53,   103,   104,   105,   113,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    13,    15,
      13,    15,    13,    15,    15,    15,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    56,    92,    52,    52,
      52,    40,    41,    42,    43,    44,    45,    46,   114,    17,
      18,    13,    15,    13,    15,    56,    15,    89,   113,   131,
       9,    10,    14,    15,   107,   123,   124,   107,   123,    15,
      93,   115,   120,   121,    47,    48,    47,    48,   103,    43,
      44,    52,    41,    42,    45,    46,    15,    48,   112,    15,
      49,   111,    15,    53,    96,   110,    15,    53,   109,   111,
      15,    53,    97,   100,   131,   110,   110,    97,    15,    40,
      15,    40,    15,    40,    40,    40,   109,   109,   110,   110,
     110,   110,    97,    15,    15,    89,     1,    15,   103,   106,
     107,   123,    53,    90,    15,    40,    15,    40,    51,    54,
      15,    34,    35,    36,    37,    38,    39,   126,    54,   126,
      11,    12,    54,   127,    54,    54,    52,    54,   104,   104,
      15,   113,    15,   113,    15,   113,    15,   113,    51,    54,
      15,   100,    54,   111,    54,    54,   112,    54,    54,    54,
      54,    40,   100,    40,    96,    40,    97,    55,    53,    54,
      51,    54,    54,    54,    54,    54,    51,    51,    54,    57,
     123,    40,   106,    40,    53,    15,   113,     9,    10,    15,
     113,   125,    90,   125,    90,   125,    90,    90,   123,   112,
      51,    51,    51,    51,    55,    55,    55,    15,    53,    95,
     131,   111,    53,    97,   108,    97,   110,    15,    47,    54,
      55,    55,   111,    52,    54,    15,   100,    15,   100,    97,
     112,   100,   102,    15,    96,    98,   131,    97,    99,    51,
      99,    56,    51,    15,   111,    54,    54,    54,    58,    58,
      90,   101,   113,   131,    15,    53,    94,   131,    51,   115,
      54,    54,    54,    54,    54,    54,    51,    56,    51,    56,
      51,    56,    15,    53,    54,    97,    51,    51,    56,   111,
      51,    56,    97,   100,    15,    96,    97,    98,    51,    54,
      97,   113,    51,    15,    53,    54,    54,    15,    53,    54,
      97,   111,    98,    54,    51,    54,    97,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   101,   102,   102,   103,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   116,   116,   117,   117,   118,
     119,   120,   121,   121,   122,   122,   122,   122,   123,   123,
     123,   123,   123,   124,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     7,     1,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     2,     3,     2,     3,     2,
       3,     4,     5,     4,     5,     4,     5,     1,     1,     1,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     2,     4,     7,     4,     7,
       4,     4,     7,     7,     6,     8,     8,     7,     5,     1,
       1,     7,     3,     1,     3,     5,     5,     7,     5,     5,
       5,     5,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     5,     1,     1,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     4,     4,     1,     4,
       6,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     4,     4,     4,     4,     4,     6,     6,     4,     5,
       1,     5,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     5,
       5,     5,     1,     1,     5,     5,     6,     3,     1,     1,
       2,     1,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0
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
#line 1647 "project.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 137 "project.y" /* yacc.c:1646  */
    { if ((yyvsp[0])) (yyval) = (yyvsp[-2]) / (yyvsp[0]);
			else {error_msg("Divide by zero!");}
		}
#line 1655 "project.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 157 "project.y" /* yacc.c:1646  */
    {error_msg("Not a valid expression!");}
#line 1661 "project.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 215 "project.y" /* yacc.c:1646  */
    {error_msg("Invalid identifier declaration!");}
#line 1667 "project.tab.c" /* yacc.c:1646  */
    break;


#line 1671 "project.tab.c" /* yacc.c:1646  */
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
#line 281 "project.y" /* yacc.c:1906  */

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
	errorCount++;
}
int main (void) {
	yyparse();
}
