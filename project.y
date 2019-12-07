%{
#include <stdio.h>
#include <stdlib.h>
%}
%token CHAR INT FLOAT BOOL STR VOID TRUE FALSE
%token AND_OP OR_OP DOLLAR_SIGN AT_SIGN NOT_OP IDENT
%token IF ELIF ELSE
%token WHILE FOR BREAK CONTINUE
%token FUNC RETURN
%token BLTIN_SHOW_ON_MAP BLTIN_SEARCH_LOCATION BLTIN_GET_ROAD_SPEED BLTIN_GET_LOCATION BLTIN_TARGET BLTIN_GET_ROADS BLTIN_GET_CROSSROADS BLTIN_GET_CROSSROADS_NUM BLTIN_GET_ROADS_NUM
%token LESS_EQ_OP GREATER_EQ_OP NOT_EQ_OP EQUALITY_OP LESS_OP GREATER_OP
%token EQUAL_OP INCREMENT_OP DECREMENT_OP MULTIPLY_OP DIVIDE_OP SUB_OP ADD_OP MOD_OP POW_OP
%token INT_LITERAL FLOAT_LITERAL STR_LITERAL CHAR_LITERAL
%token COMMA SEMICOLON LEFT_PARANT RIGHT_PARANT CURLY_OPEN CURLY_CLOSE
%token NEW_LINE WHITE_SPACE UNKNOWN_CHAR
%%
program : function
	| function program
	;
function : FUNC return_type IDENT LEFT_PARANT parameter_list RIGHT_PARANT block
	;
return_type : data_type
	| empty
	;
parameter_list : empty
	| VOID
	| data_type IDENT
	| parameter_list COMMA data_type IDENT
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
	| RETURN IDENT SEMICOLON
	| RETURN factor SEMICOLON
	| loop
	| if_stmt
	;
declaration : data_type IDENT
	| declaration EQUAL_OP RHS
	| data_type AT_SIGN IDENT EQUAL_OP CURLY_OPEN factor_list CURLY_CLOSE
	| data_type DOLLAR_SIGN IDENT EQUAL_OP CURLY_OPEN factor_list CURLY_CLOSE
	;
tuple : LEFT_PARANT data_type COMMA data_type RIGHT_PARANT
	;
factor_list : factor
	| factor_list COMMA factor
	;
arithmetic_exp : term
	| arithmetic_exp ADD_OP term
	| arithmetic_exp SUB_OP term
	;
term : factor
	| IDENT
	| term MULTIPLY_OP factor
	| term DIVIDE_OP factor
	| term POW_OP factor
	| term MOD_OP factor
	;
RHS : arithmetic_exp
	| function_call
	| bool_exp
	;
function_call : IDENT LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_SHOW_ON_MAP LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_SEARCH_LOCATION LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_GET_ROAD_SPEED LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_GET_LOCATION LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_TARGET LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_GET_ROADS LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_GET_CROSSROADS LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_GET_CROSSROADS_NUM LEFT_PARANT parameter_list RIGHT_PARANT
	| BLTIN_GET_ROADS_NUM LEFT_PARANT parameter_list RIGHT_PARANT
	;
factor : INT_LITERAL
	| FLOAT_LITERAL
	| STR_LITERAL
	| CHAR_LITERAL
	| tuple
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
	| LHS INCREMENT_OP
	| LHS DECREMENT_OP
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
	| factor
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
empty :
	;
%%
#include "lex.yy.c"
int yyerror (char *s) {
	printf("Line no: X found error\n");
}
int main (void) {
	yyparse();
}
