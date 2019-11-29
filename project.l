%{
#include <stdio.h>
#include <string.h>
#include <"y.tab.h">
%}
Digit [0-9]
Sign [+-]
Alphabetic [A-Za-z]
%%
"//"([a-z]|[0-9]|[A-Z]|" ")*	{}
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]	{}

int	return (INT);
float	return (FLOAT);
bool	return (BOOL);
void	return (VOID);
char	return (CHAR);
string	return (STR);
false	return (FALSE);
true	return (TRUE);
"&&"	return (AND_OP);
"||"	return (OR_OP);
if	return (IF);
elif	return (ELIF);
else	return (ELSE);
while	return (WHILE);
for	return (FOR);
continue	return (CONTINUE);
break	return (BREAK);
func	return (FUNCTION);
return	return (RETURN);
"<="	return (LESS_EQ_OP);
">="	return (GREATER_EQ_OP);
"!="	return (NOT_EQ_OP);
"=="	return (EQUALITY_OP);
"<"	return (LESS_OP);
">"	return (GREATER_OP);
"="	return (EQUAL_OP);
"*"	return (MULTIPLY_OP);
"/"	return (DIVIDE_OP);
"-"	return (SUB_OP);
"+"	return (ADD_OP);
"^"	return (POW_OP);
"%"	return (MOD_OP);
"++"	return (INCREMENT_OP);
"--"	return (DECREMENT_OP);
";"	return (SEMICOLON);
"{"	return (CURLY_OPEN);
"}"	return (CURLY_CLOSE);
"("	return (LEFT_PARANT);
")"	return (RIGHT_PARANT);
"["	return (SQR_BRACKET_OPEN);
"]"	return (SQR_BRACKET_CLOSE);
","	return (COMMA);

{Sign}?{Digit}+	{ sscanf(yytext, "%d", &yylval);
	return (INT_LITERAL);
	}
{Sign}?{Digit}*"."{Digit}+	return (FLOAT_LITERAL);
\"(\\.|[^\\"])*\"	return (STR_LITERAL);
\.(\\.|[^\\'])+\'	return (CHAR_LITERAL);
{Alphabetic}({Digit}|{Alphabetic})*	return (IDENT);
(\r|\n|\r\n)	yylineto++;
[ \t\v\f]+	{};
.	{yyerror("Non recognized!");}
%%
int yywrap () {
	return 1;
}
