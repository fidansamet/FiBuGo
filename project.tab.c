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
    UNKNOWN_CHAR = 312,
    GPS = 313,
    ROAD = 314,
    CROSSROAD = 315,
    GRAPH = 316,
    USER = 317,
    HOME = 318,
    HOSPITAL = 319,
    SCHOOL = 320,
    BRIDGE = 321,
    MALL = 322,
    BUSSTOP = 323,
    HOTEL = 324,
    POSTOFFICE = 325,
    BLTIN_COLLOBORATE_USERS = 326,
    BLTIN_INSTRUCT_USER = 327,
    BLTIN_INCREASE_SCORE_OF_ROAD = 328,
    BLTIN_DECREASE_SCORE_OF_ROAD = 329,
    BLTIN_GET_SCORE_OF_ROAD = 330,
    BLTIN_SHOW_ROAD_ON_MAP = 331,
    BLTIN_SHOW_CROSSROAD_ON_MAP = 332,
    BLTIN_ADD_CROSSROAD = 333,
    BLTIN_ADD_ROAD = 334,
    BLTIN_PRINT = 335,
    UMINUS = 336
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

#line 207 "project.tab.c" /* yacc.c:358  */

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
#define YYLAST   674

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  444

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

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
      75,    76,    77,    78,    79,    80,    81
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
     133,   135,   136,   137,   138,   139,   143,   144,   145,   146,
     147,   148,   150,   151,   152,   153,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   176,   177,   179,   180,
     182,   183,   185,   186,   188,   189,   191,   192,   193,   194,
     195,   196,   197,   198,   200,   201,   202,   203,   204,   205,
     206,   208,   210,   211,   213,   214,   216,   218,   220,   222,
     223,   225,   226,   227,   228,   230,   231,   232,   233,   234,
     235,   237,   238,   239,   241,   242,   243,   244,   246,   247,
     248,   249,   250,   251,   253,   254,   256,   257,   258,   259,
     260,   262,   263,   264,   265,   266,   267,   268,   269,   271,
     272,   273,   274,   276
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
  "LEFT_PARANT", "RIGHT_PARANT", "CURLY_OPEN", "CURLY_CLOSE",
  "UNKNOWN_CHAR", "GPS", "ROAD", "CROSSROAD", "GRAPH", "USER", "HOME",
  "HOSPITAL", "SCHOOL", "BRIDGE", "MALL", "BUSSTOP", "HOTEL", "POSTOFFICE",
  "BLTIN_COLLOBORATE_USERS", "BLTIN_INSTRUCT_USER",
  "BLTIN_INCREASE_SCORE_OF_ROAD", "BLTIN_DECREASE_SCORE_OF_ROAD",
  "BLTIN_GET_SCORE_OF_ROAD", "BLTIN_SHOW_ROAD_ON_MAP",
  "BLTIN_SHOW_CROSSROAD_ON_MAP", "BLTIN_ADD_CROSSROAD", "BLTIN_ADD_ROAD",
  "BLTIN_PRINT", "UMINUS", "$accept", "program", "function", "return_type",
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
     335,   336
};
# endif

#define YYPACT_NINF -239

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-239)))

#define YYTABLE_NINF -204

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     157,  -239,   463,    28,   207,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,    32,   102,   106,   163,  -239,  -239,  -239,   110,
    -239,  -239,  -239,   360,  -239,   124,    33,   246,   292,  -239,
     463,   146,   191,  -239,   202,  -239,   220,  -239,   304,   358,
     369,   262,  -239,  -239,  -239,  -239,   234,  -239,   257,  -239,
     264,  -239,  -239,   232,   259,   294,   309,   334,   345,   140,
     317,   330,   368,   382,   386,   388,   419,   422,   431,   379,
     380,   383,   470,   471,   434,   435,   445,   448,   449,   457,
     462,   466,   481,   494,   384,  -239,   472,   504,   506,   201,
    -239,  -239,  -239,    92,   418,   421,   453,  -239,  -239,  -239,
     190,   536,   536,    80,  -239,  -239,  -239,   305,   329,  -239,
    -239,  -239,  -239,  -239,   179,   168,   269,  -239,    17,    22,
      29,    35,    22,    40,    29,    29,    40,   501,   478,   542,
     520,   555,   531,   532,   533,    35,    35,    29,    29,    29,
      29,    40,   559,   560,   190,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,   464,   523,   146,
     562,   538,   566,   549,  -239,  -239,   149,  -239,  -239,  -239,
    -239,   567,     4,   217,  -239,     6,  -239,   263,    12,  -239,
    -239,  -239,   541,   545,  -239,  -239,  -239,  -239,    63,   179,
     179,  -239,   301,   331,   456,   505,  -239,  -239,   539,  -239,
    -239,   546,  -239,    46,  -239,   547,  -239,    22,   548,   550,
    -239,    17,   551,  -239,  -239,   552,   563,   564,   556,   568,
     558,   569,   579,    40,   565,   570,   571,   573,   572,   574,
     575,   576,   577,   581,   582,   170,  -239,    41,   394,  -239,
     263,   390,   465,   536,  -239,   587,   464,   594,   583,   544,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    82,   146,
      82,  -239,  -239,   146,    82,   146,   146,   536,  -239,   269,
     269,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    17,
    -239,   584,   586,  -239,   588,  -239,  -239,   589,  -239,  -239,
    -239,  -239,   590,  -239,   591,  -239,   592,  -239,    47,    22,
    -239,    58,  -239,  -239,  -239,  -239,  -239,    40,    29,  -239,
      15,   593,  -239,   595,    22,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    18,   597,
      59,    83,    40,    17,   568,    98,    40,   598,    40,   543,
    -239,   601,   150,  -239,   599,   600,   602,   146,   311,   101,
     604,    44,  -239,   603,   605,   606,   607,   608,   609,  -239,
     116,  -239,  -239,   158,  -239,  -239,   180,   107,   206,  -239,
      40,  -239,   613,  -239,  -239,  -239,  -239,   219,  -239,  -239,
    -239,    22,   253,  -239,    40,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,   568,  -239,   108,  -239,    40,  -239,  -239,    98,
     614,   612,    40,   311,  -239,   616,   113,  -239,   615,  -239,
    -239,  -239,  -239,   222,   120,  -239,   617,  -239,    40,  -239,
      22,  -239,  -239,  -239,    98,  -239,   618,   619,   318,  -239,
      40,  -239,   620,  -239
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
       0,    23,   153,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
      43,   154,   155,    44,     0,     0,     0,    22,    26,    24,
     203,     0,     0,     0,    39,    40,    92,     0,     0,   140,
     141,   142,   143,    41,     0,     0,    88,    91,     0,     0,
       0,     0,     0,   203,     0,     0,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,   203,    32,    35,    36,    38,    37,
     144,   145,   146,   147,   148,   149,   150,     0,     0,     0,
       0,    45,     0,     0,    33,    28,     0,    29,    27,   168,
     169,     0,   166,     0,   170,     0,   165,     0,     0,   152,
     159,   160,     0,     0,   136,   138,   137,   139,     0,     0,
       0,    42,     0,     0,     0,     0,   135,   134,     0,   133,
     132,     0,   131,   203,   130,     0,   129,     0,     0,     0,
      73,     0,     0,    72,    82,     0,     0,     0,     0,   203,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,    92,   102,   151,
     103,    91,   104,     0,   164,     0,     0,     0,     0,     0,
     106,   167,   178,   179,   180,   181,   182,   183,     0,     0,
       0,   184,   185,     0,     0,     0,     0,     0,    93,    90,
      89,    98,    94,    99,    95,   101,    97,   100,    96,     0,
     108,     0,     0,   109,     0,   110,   111,     0,   112,   113,
     115,   114,     0,    48,     0,    50,     0,    51,   203,     0,
     116,   203,   118,   119,   120,   121,   122,   203,     0,   125,
       0,     0,    46,     0,     0,    30,    31,   176,   175,   174,
     177,   171,   162,   173,   161,   172,   156,   157,     0,     0,
     203,   203,   203,     0,   203,   203,   203,     0,   203,     0,
      63,     0,     0,   127,     0,     0,     0,     0,   203,   203,
       0,     0,   107,     0,     0,     0,     0,     0,     0,    86,
       0,    76,    75,     0,    74,    79,     0,     0,     0,    54,
     203,   133,     0,   117,   123,   124,   163,     0,    84,    83,
      59,     0,     0,    60,   203,   158,    71,    70,    69,    68,
     128,    81,   203,    49,     0,    52,   203,    53,    64,   203,
       0,     0,   203,     0,    47,     0,     0,    57,     0,    87,
      78,    77,    80,     0,     0,    55,     0,    85,   203,    62,
       0,    56,    65,    66,   203,   126,     0,     0,     0,    58,
     203,    67,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,   634,  -239,  -239,  -239,   487,  -155,  -239,   509,   529,
    -239,  -239,  -218,  -132,  -238,   295,  -207,  -239,  -239,   -60,
     281,   402,   -43,  -239,   337,  -114,  -127,  -125,  -100,  -239,
    -111,  -239,  -239,  -239,  -239,  -239,  -239,  -239,   -96,  -239,
     -55,  -175,  -239,    23,    56,   129,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    22,    35,   176,    52,    94,    95,    96,
     392,   349,   214,   375,   373,   376,   223,   387,   370,   248,
     126,   249,   187,   354,   218,   215,   211,   297,   127,   167,
      98,    99,   100,   101,   102,   192,   193,   103,   252,   186,
     331,   270,   274,   104,   105,    25,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   222,   191,   208,   227,   219,   292,   268,    97,   125,
     177,   184,   184,   305,   254,   185,   188,   271,   272,   242,
     225,   226,   303,   271,   272,    23,   271,   272,    27,   271,
     272,    39,   206,   238,   239,   240,   241,   209,   262,   263,
     264,   265,   266,   267,   212,    62,    42,    29,    43,   106,
     216,    97,  -166,  -166,   177,   220,    36,   110,    24,   189,
     273,   291,   347,    48,   198,   207,   275,   251,   183,   357,
     361,   210,   268,   220,   363,   262,   263,   264,   265,   266,
     267,    62,   213,     5,     6,     7,     8,     9,   217,    37,
     294,   327,   328,   221,   110,   189,    49,   329,   365,   221,
     348,   307,   282,   284,   286,   288,   199,   200,   178,   168,
     169,   352,   221,   371,   332,    30,   390,   278,   334,    31,
     336,   337,   408,   420,   250,   117,   118,   372,   429,   119,
     120,   121,   122,   364,   366,   433,   221,   369,    79,    80,
      81,    82,    83,    14,    15,    16,    17,    18,    19,    20,
      21,   213,   178,   184,   391,   116,   251,   320,     1,   326,
     409,   213,    38,    33,   339,   381,   430,   402,   330,    50,
     330,   423,   403,   434,   330,    40,    32,   184,    41,   353,
       2,   338,   351,   117,   118,   355,   421,   119,   120,   121,
     122,   372,   123,   124,   116,   419,   438,   360,   207,   210,
     259,    51,   386,   260,   356,   175,    53,    -2,     1,   404,
     367,   199,   200,   250,   405,   333,   372,    54,   368,   335,
     201,   259,   117,   118,   319,   382,   119,   120,   121,   122,
       2,   406,   124,   117,   118,    55,   407,   119,   120,   121,
     122,   160,   161,   162,   163,   164,   165,   166,   411,   107,
     395,   262,   263,   264,   265,   266,   267,   406,   388,    44,
     410,    45,   418,    62,   415,     5,     6,     7,     8,     9,
     413,   269,   108,   404,   422,   414,   432,    63,    64,   109,
     426,    65,    66,    67,    68,   110,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   436,   262,   263,   264,
     265,   266,   267,   437,   416,    46,   350,    47,   442,   417,
     202,   203,   111,   427,   204,   205,   281,    56,  -203,    57,
      79,    80,    81,    82,    83,    14,    15,    16,    17,    18,
      19,    20,    21,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,   374,   117,   118,   283,   112,   119,   120,
     121,   122,   194,   195,   117,   118,   389,   393,   119,   120,
     121,   122,   113,     5,     6,     7,     8,     9,    34,   404,
     128,    58,   441,    59,   117,   118,   196,   197,   119,   120,
     121,   122,    60,   129,    61,    62,   114,     5,     6,     7,
       8,     9,   137,   139,   138,   140,   141,   115,   142,    63,
      64,  -170,  -170,    65,    66,    67,    68,   374,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    10,    11,
      12,   130,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   170,   374,   171,   172,   131,   173,   199,   200,   132,
     155,   133,    79,    80,    81,    82,    83,    14,    15,    16,
      17,    18,    19,    20,    21,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   246,     5,     6,     7,     8,
       9,   285,   134,   179,   180,   135,   271,   272,   181,   247,
     279,   280,   236,   237,   136,   143,   144,   145,   146,    70,
      71,    72,    73,    74,    75,    76,    77,    78,   147,   117,
     118,   148,   149,   119,   120,   121,   122,   117,   118,   174,
     150,   119,   120,   121,   122,   151,   228,   124,   229,   152,
     287,    10,    11,    12,   157,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   153,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   179,   180,   154,   117,   118,
     181,   182,   119,   120,   121,   122,   158,   230,   159,   325,
     231,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     232,   233,   234,   235,   243,   244,   253,   255,   256,   117,
     118,   257,   261,   119,   120,   121,   122,   117,   118,   258,
     289,   119,   120,   121,   122,   276,   302,   277,   304,   379,
     290,   293,   295,   156,   296,   298,   299,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   300,   301,   306,
     308,   221,   213,   309,   311,   310,   312,   321,   313,   314,
     315,   316,   317,   318,   323,   340,   324,   341,    28,   342,
     343,   245,   190,   378,     0,   344,   345,   346,   358,   377,
     359,   362,   380,   383,   384,   394,   385,   396,   322,   397,
     398,   399,   400,   401,   412,   424,   425,   428,     0,   431,
     440,   435,   439,     0,   443
};

static const yytype_int16 yycheck[] =
{
       2,   133,   113,   128,   136,   132,   213,   182,    51,    69,
     110,   111,   112,   231,   169,   111,   112,    11,    12,   151,
     134,   135,   229,    11,    12,     2,    11,    12,     0,    11,
      12,    33,    15,   147,   148,   149,   150,    15,    34,    35,
      36,    37,    38,    39,    15,     1,    13,    15,    15,    51,
      15,    94,    11,    12,   154,    15,    33,    53,     2,    15,
      54,    15,    15,    40,   124,    48,    54,   167,   111,    54,
      52,    49,   247,    15,    15,    34,    35,    36,    37,    38,
      39,     1,    53,     3,     4,     5,     6,     7,    53,    33,
     217,     9,    10,    53,    53,    15,    40,    15,    15,    53,
      53,   233,   202,   203,   204,   205,    43,    44,   110,    17,
      18,    53,    53,    15,   269,    13,    15,    54,   273,    13,
     275,   276,    15,    15,   167,    43,    44,   345,    15,    47,
      48,    49,    50,   340,   341,    15,    53,   344,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    53,   154,   253,    53,    15,   256,   253,     1,   259,
      53,    53,    33,    53,   289,    15,    53,    51,   268,    40,
     270,   409,    56,    53,   274,    51,    13,   277,    54,   311,
      23,   277,   309,    43,    44,   317,   404,    47,    48,    49,
      50,   409,    52,    53,    15,   402,   434,   324,    48,    49,
      51,    55,   357,    54,   318,    15,    15,     0,     1,    51,
     342,    43,    44,   256,    56,   270,   434,    15,   343,   274,
      52,    51,    43,    44,    54,   352,    47,    48,    49,    50,
      23,    51,    53,    43,    44,    15,    56,    47,    48,    49,
      50,    40,    41,    42,    43,    44,    45,    46,   380,    15,
     361,    34,    35,    36,    37,    38,    39,    51,   358,    13,
      54,    15,   394,     1,   391,     3,     4,     5,     6,     7,
      51,    54,    15,    51,   406,    56,    54,    15,    16,    15,
     412,    19,    20,    21,    22,    53,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   428,    34,    35,    36,
      37,    38,    39,   430,    51,    13,   308,    15,   440,    56,
      41,    42,    53,   413,    45,    46,    15,    13,    56,    15,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   345,    43,    44,    15,    53,    47,    48,
      49,    50,    47,    48,    43,    44,   358,   359,    47,    48,
      49,    50,    53,     3,     4,     5,     6,     7,     8,    51,
      53,    13,    54,    15,    43,    44,    47,    48,    47,    48,
      49,    50,    13,    53,    15,     1,    52,     3,     4,     5,
       6,     7,    13,    13,    15,    15,    13,    52,    15,    15,
      16,    11,    12,    19,    20,    21,    22,   409,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    58,    59,
      60,    53,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    13,   434,    15,    13,    53,    15,    43,    44,    53,
      56,    53,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     1,     3,     4,     5,     6,
       7,    15,    53,     9,    10,    53,    11,    12,    14,    15,
     199,   200,   145,   146,    53,    15,    15,    53,    53,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    53,    43,
      44,    53,    53,    47,    48,    49,    50,    43,    44,    56,
      53,    47,    48,    49,    50,    53,    15,    53,    40,    53,
      15,    58,    59,    60,    52,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    53,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     9,    10,    53,    43,    44,
      14,    15,    47,    48,    49,    50,    52,    15,    52,    15,
      40,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      15,    40,    40,    40,    15,    15,    53,    15,    40,    43,
      44,    15,    15,    47,    48,    49,    50,    43,    44,    40,
      51,    47,    48,    49,    50,    54,    40,    52,    40,    56,
      54,    54,    54,    94,    54,    54,    54,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    54,    54,    40,
      55,    53,    53,    53,    51,    54,    54,    40,    54,    54,
      54,    54,    51,    51,    40,    51,    53,    51,     4,    51,
      51,   154,   113,   348,    -1,    55,    55,    55,    55,    51,
      55,    54,    51,    54,    54,    51,    54,    54,   256,    54,
      54,    54,    54,    54,    51,    51,    54,    51,    -1,    54,
      51,    54,    54,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    23,    83,    84,     3,     4,     5,     6,     7,
      58,    59,    60,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    85,   125,   126,   127,   128,     0,    83,    15,
      13,    13,    13,    53,     8,    86,   125,   126,   127,   128,
      51,    54,    13,    15,    13,    15,    13,    15,   125,   126,
     127,    55,    88,    15,    15,    15,    13,    15,    13,    15,
      13,    15,     1,    15,    16,    19,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    58,
      59,    60,    61,    62,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    89,    90,    91,   104,   112,   113,
     114,   115,   116,   119,   125,   126,   128,    15,    15,    15,
      53,    53,    53,    53,    52,    52,    15,    43,    44,    47,
      48,    49,    50,    52,    53,   101,   102,   110,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    13,    15,    13,
      15,    13,    15,    15,    15,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    56,    90,    52,    52,    52,
      40,    41,    42,    43,    44,    45,    46,   111,    17,    18,
      13,    15,    13,    15,    56,    15,    87,   110,   128,     9,
      10,    14,    15,   104,   110,   120,   121,   104,   120,    15,
      91,   112,   117,   118,    47,    48,    47,    48,   101,    43,
      44,    52,    41,    42,    45,    46,    15,    48,   109,    15,
      49,   108,    15,    53,    94,   107,    15,    53,   106,   108,
      15,    53,    95,    98,   128,   107,   107,    95,    15,    40,
      15,    40,    15,    40,    40,    40,   106,   106,   107,   107,
     107,   107,    95,    15,    15,    87,     1,    15,   101,   103,
     104,   110,   120,    53,    88,    15,    40,    15,    40,    51,
      54,    15,    34,    35,    36,    37,    38,    39,   123,    54,
     123,    11,    12,    54,   124,    54,    54,    52,    54,   102,
     102,    15,   110,    15,   110,    15,   110,    15,   110,    51,
      54,    15,    98,    54,   108,    54,    54,   109,    54,    54,
      54,    54,    40,    98,    40,    94,    40,    95,    55,    53,
      54,    51,    54,    54,    54,    54,    54,    51,    51,    54,
     120,    40,   103,    40,    53,    15,   110,     9,    10,    15,
     110,   122,    88,   122,    88,   122,    88,    88,   120,   109,
      51,    51,    51,    51,    55,    55,    55,    15,    53,    93,
     128,   108,    53,    95,   105,    95,   107,    54,    55,    55,
     108,    52,    54,    15,    98,    15,    98,    95,   109,    98,
     100,    15,    94,    96,   128,    95,    97,    51,    97,    56,
      51,    15,   108,    54,    54,    54,    88,    99,   110,   128,
      15,    53,    92,   128,    51,   112,    54,    54,    54,    54,
      54,    54,    51,    56,    51,    56,    51,    56,    15,    53,
      54,    95,    51,    51,    56,   108,    51,    56,    95,    98,
      15,    94,    95,    96,    51,    54,    95,   110,    51,    15,
      53,    54,    54,    15,    53,    54,    95,   108,    96,    54,
      51,    54,    95,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,   100,   100,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   112,   113,   113,   114,   114,   115,   116,   117,   118,
     118,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   121,   121,   121,   122,   122,   122,   122,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   128
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
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     4,     6,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     4,     4,
       4,     4,     4,     6,     6,     4,     5,     1,     5,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     5,     5,     5,     1,
       1,     5,     5,     6,     3,     1,     1,     2,     1,     1,
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
#line 1647 "project.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 140 "project.y" /* yacc.c:1646  */
    { if ((yyvsp[0])) (yyval) = (yyvsp[-2]) / (yyvsp[0]);
			else {error_msg("Divide by zero!");}
		}
#line 1655 "project.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 153 "project.y" /* yacc.c:1646  */
    {error_msg("Not a valid expression!");}
#line 1661 "project.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 211 "project.y" /* yacc.c:1646  */
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
#line 278 "project.y" /* yacc.c:1906  */

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
