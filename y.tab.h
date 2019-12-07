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
#define INCREMENT_OP 296
#define DECREMENT_OP 297
#define MULTIPLY_OP 298
#define DIVIDE_OP 299
#define SUB_OP 300
#define ADD_OP 301
#define MOD_OP 302
#define POW_OP 303
#define INT_LITERAL 304
#define FLOAT_LITERAL 305
#define STR_LITERAL 306
#define CHAR_LITERAL 307
#define COMMA 308
#define SEMICOLON 309
#define LEFT_PARANT 310
#define RIGHT_PARANT 311
#define CURLY_OPEN 312
#define CURLY_CLOSE 313
#define NEW_LINE 314
#define WHITE_SPACE 315
#define UNKNOWN_CHAR 316
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{ double floatValue;	/* float */
	int intValue;	/* int */
	} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
