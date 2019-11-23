%{
#include <stdio.h>
%}
%union{ double floatValue;	/* float */
	int intValue;	/* int */
	}
%token <floatValue> FLOAT
%token <intValue> INTEGER
%%
%%
#include "lex.yy.c"
