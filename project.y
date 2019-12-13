%{
#include <stdio.h>
#include <stdlib.h>
int errorCount = 0;
%}
%{
int yylex();
int yyerror(char *s);
%}
%token CHAR INT FLOAT BOOL STR VOID TRUE FALSE
%token AND_OP OR_OP DOLLAR_SIGN AT_SIGN NOT_OP IDENT
%token IF ELIF ELSE
%token WHILE FOR BREAK CONTINUE
%token FUNC RETURN
%token BLTIN_SHOW_ON_MAP BLTIN_SEARCH_LOCATION BLTIN_GET_ROAD_SPEED BLTIN_GET_LOCATION BLTIN_TARGET BLTIN_GET_ROADS BLTIN_GET_CROSSROADS BLTIN_GET_CROSSROADS_NUM BLTIN_GET_ROADS_NUM
%token LESS_EQ_OP GREATER_EQ_OP NOT_EQ_OP EQUALITY_OP LESS_OP GREATER_OP
%token EQUAL_OP MULTIPLY_OP DIVIDE_OP SUB_OP ADD_OP MOD_OP POW_OP
%token INT_LITERAL FLOAT_LITERAL STR_LITERAL CHAR_LITERAL
%token COMMA SEMICOLON LEFT_PARANT RIGHT_PARANT CURLY_OPEN CURLY_CLOSE
%token NEW_LINE WHITE_SPACE UNKNOWN_CHAR
%token GPS ROAD CROSSROAD ROADS CROSSROADS GRAPH USER
%token HOME HOSPITAL SCHOOL BRIDGE MALL BUSSTOP HOTEL POSTOFFICE
%token BLTIN_COLLOBORATE_USERS BLTIN_INSTRUCT_USER BLTIN_INCREASE_SCORE_OF_ROAD BLTIN_DECREASE_SCORE_OF_ROAD BLTIN_GET_SCORE_OF_ROAD BLTIN_SHOW_ROAD_ON_MAP BLTIN_SHOW_CROSSROAD_ON_MAP
%nonassoc UMINUS
%%
program : function
	| function program
	;
function : FUNC return_type IDENT LEFT_PARANT parameter_list RIGHT_PARANT block
	;
return_type : data_type
	| data_type DOLLAR_SIGN
	| geo_types
	| geo_types DOLLAR_SIGN
	| three_d_objects
	| three_d_objects DOLLAR_SIGN
	| empty
	;
parameter_list : empty
	| VOID
	| data_type IDENT
	| data_type DOLLAR_SIGN IDENT
	| geo_types IDENT
	| geo_types DOLLAR_SIGN IDENT
	| three_d_objects IDENT
	| three_d_objects DOLLAR_SIGN IDENT
	| parameter_list COMMA data_type IDENT
	| parameter_list COMMA data_type DOLLAR_SIGN IDENT
	| parameter_list COMMA geo_types IDENT
	| parameter_list COMMA geo_types DOLLAR_SIGN IDENT
	| parameter_list COMMA three_d_objects IDENT
	| parameter_list COMMA three_d_objects DOLLAR_SIGN IDENT
	;
argument_list : empty
	| IDENT
	| literal
	| argument_list COMMA IDENT
	| argument_list COMMA literal
	;
block : CURLY_OPEN stmt_list CURLY_CLOSE
	| CURLY_OPEN empty CURLY_CLOSE
	;
stmt_list : stmt
	| stmt_list stmt
	;
stmt : declaration SEMICOLON
	| assignment SEMICOLON
	| function_call SEMICOLON
	| CONTINUE SEMICOLON
	| RETURN SEMICOLON
	| RETURN arithmetic_exp SEMICOLON
	| loop
	| if_stmt
	;
declaration : data_type IDENT
	| declaration EQUAL_OP RHS
	| data_type DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN literal_list CURLY_CLOSE
	| GPS IDENT EQUAL_OP tuple
	| GPS DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN tuple_list CURLY_CLOSE
	| ROAD IDENT EQUAL_OP road
	| CROSSROAD IDENT EQUAL_OP cross_road
	| ROAD DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN roads_list CURLY_CLOSE
	| CROSSROAD DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN cross_roads_list CURLY_CLOSE
	| GRAPH IDENT EQUAL_OP CURLY_OPEN graph_arguments CURLY_CLOSE
	| USER IDENT EQUAL_OP LEFT_PARANT str_param COMMA cross_road RIGHT_PARANT
	| three_d_objects IDENT EQUAL_OP LEFT_PARANT str_param COMMA cross_road RIGHT_PARANT
	| three_d_objects DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN three_d_arguments CURLY_CLOSE
	;
three_d_arguments : LEFT_PARANT str_param COMMA cross_road RIGHT_PARANT
	| IDENT
	| empty
	| three_d_arguments COMMA LEFT_PARANT str_param COMMA cross_road RIGHT_PARANT
	| three_d_arguments COMMA IDENT
	;
graph_arguments : empty
	| IDENT COMMA IDENT
	| IDENT COMMA LEFT_PARANT roads_list RIGHT_PARANT
	| LEFT_PARANT cross_roads_list RIGHT_PARANT COMMA IDENT
	| LEFT_PARANT cross_roads_list RIGHT_PARANT COMMA LEFT_PARANT roads_list RIGHT_PARANT
	;
road : LEFT_PARANT tuple COMMA tuple RIGHT_PARANT
	| LEFT_PARANT tuple COMMA IDENT RIGHT_PARANT
	| LEFT_PARANT IDENT COMMA tuple RIGHT_PARANT
	| LEFT_PARANT IDENT COMMA IDENT RIGHT_PARANT
	;
cross_road : tuple
	| IDENT
	;
roads_list : empty 
	| road
	| IDENT
	| roads_list COMMA road
	| roads_list COMMA IDENT
	;
cross_roads_list : empty
	| cross_road
	| cross_roads_list COMMA cross_road
	;
tuple : LEFT_PARANT long_lat_param COMMA long_lat_param RIGHT_PARANT
	| empty
	;
literal_list : empty
	| literal
	| literal_list COMMA literal
	;
tuple_list : tuple
	| tuple_list COMMA tuple
	;
arithmetic_exp : term
	| arithmetic_exp ADD_OP term
	| arithmetic_exp SUB_OP term
	;
term : literal
	| IDENT
	| LEFT_PARANT arithmetic_exp RIGHT_PARANT
	| term MULTIPLY_OP literal
	| term DIVIDE_OP literal
		{ if ($3) $$ = $1 / $3;
			else {yyerror("Divide by zero!");}
		}
	| term POW_OP literal
	| term MOD_OP literal
	| term MULTIPLY_OP IDENT
	| term DIVIDE_OP IDENT
	| term POW_OP IDENT
	| term MOD_OP IDENT
	;
RHS : arithmetic_exp
	| function_call
	| bool_exp

	;
function_call : IDENT LEFT_PARANT argument_list RIGHT_PARANT
	| BLTIN_SHOW_ON_MAP LEFT_PARANT long_lat_param COMMA long_lat_param RIGHT_PARANT
	| BLTIN_SEARCH_LOCATION LEFT_PARANT str_param RIGHT_PARANT
	| BLTIN_GET_ROAD_SPEED LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_GET_LOCATION LEFT_PARANT user_param RIGHT_PARANT
	| BLTIN_TARGET LEFT_PARANT str_param RIGHT_PARANT
	| BLTIN_GET_ROADS LEFT_PARANT cross_road RIGHT_PARANT
	| BLTIN_GET_CROSSROADS LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_GET_ROADS_NUM LEFT_PARANT cross_road RIGHT_PARANT
	| BLTIN_GET_CROSSROADS_NUM LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_COLLOBORATE_USERS LEFT_PARANT user_param COMMA user_param RIGHT_PARANT
	| BLTIN_INSTRUCT_USER LEFT_PARANT user_param COMMA destination RIGHT_PARANT
	| BLTIN_INCREASE_SCORE_OF_ROAD LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_DECREASE_SCORE_OF_ROAD LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_GET_SCORE_OF_ROAD LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_SHOW_ROAD_ON_MAP LEFT_PARANT road_param RIGHT_PARANT
	| BLTIN_SHOW_CROSSROAD_ON_MAP LEFT_PARANT cross_road RIGHT_PARANT
	;
destination : LEFT_PARANT str_param COMMA cross_road RIGHT_PARANT
	| cross_road
	;
user_param : LEFT_PARANT str_param COMMA cross_road RIGHT_PARANT
	| IDENT
	;
road_param : road
	| IDENT
	;
str_param : STR_LITERAL
	| IDENT
	;
long_lat_param : FLOAT_LITERAL
	| IDENT
	;
literal : SUB_OP INT_LITERAL
	| ADD_OP INT_LITERAL
	| SUB_OP FLOAT_LITERAL
	| ADD_OP FLOAT_LITERAL
	| INT_LITERAL
	| FLOAT_LITERAL
	| STR_LITERAL
	| CHAR_LITERAL
	;
assignment_op : EQUAL_OP
	| MULTIPLY_OP
	| DIVIDE_OP
	| SUB_OP
	| ADD_OP
	| MOD_OP
	| POW_OP
	;
assignment : LHS assignment_op RHS
	;
LHS : IDENT
	;
loop : while
	| for
	;
while : WHILE LEFT_PARANT bool_exp RIGHT_PARANT block
	;
for : FOR LEFT_PARANT for_stmt RIGHT_PARANT block
	;
for_stmt : for_init SEMICOLON bool_exp SEMICOLON assignment
	;
for_init : declaration
	| assignment
	;
if_stmt : IF LEFT_PARANT bool_exp RIGHT_PARANT block
	| IF LEFT_PARANT function_call RIGHT_PARANT block
	| if_stmt ELIF LEFT_PARANT bool_exp RIGHT_PARANT block
	| if_stmt ELSE block
	;
bool_exp : comparison
	| IDENT
	| NOT_OP IDENT
	| TRUE
	| FALSE
	;
comparison : bool_exp relational_op compared
	| bool_exp logic_op compared
	| function_call relational_op compared
	;
compared : IDENT
	| FALSE
	| TRUE
	| literal
	;
relational_op : LESS_EQ_OP
	| GREATER_EQ_OP
	| NOT_EQ_OP
	| EQUALITY_OP
	| LESS_OP
	| GREATER_OP
	;
logic_op : AND_OP
	| OR_OP
	;
data_type : CHAR
	| INT
	| FLOAT
	| BOOL
	| STR
	;
three_d_objects : HOME
	| HOSPITAL
	| SCHOOL
	| BRIDGE
	| MALL
	| BUSSTOP
	| HOTEL
	| POSTOFFICE
	;
geo_types : GPS
	| ROAD
	| CROSSROAD
	| USER
	;
empty :
	;
%%
#include "lex.yy.c"
int yyerror (char *s) {
	errorCount++;
        printf("%s\nLine no: %d found error\n", s, yylineno);
}
int yywrap () {
	if (errorCount == 0) {
		printf("The program was compiled successfully.\n");
	}
	return 1;
}
int main (void) {
	yyparse();
}
