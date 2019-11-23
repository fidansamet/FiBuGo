digit [0-9]
nonZero [1-9]
sign [+-]
alphabetic [A-Za-z]
assign \=
arithmeticOp [\+\-\*\/]
leftBrace \(
rightBrace \)
integer {sign}?{digit}+
float {sign}?({digit}*\.{digit}+)
variable {alphabetic}{alphanumeric}*
alphanumeric ({alphabetic}|{digit})
eol \n
%{
#define MAX_LENGTH 256
%}
%%
	int i;
	float f;
	char str[MAX_LENGTH];
{integer} {sscanf(yytext, "%d", &i);
        printf("INTEGER "); 
	}
{float} {sscanf(yytext, "%f", &f);
        printf("FLOAT ");
	}
{variable} {sscanf(yytext, "%s", str);
        printf("VARIABLE ");
        }
{assign} {sscanf(yytext, "%s", str);
        printf("ASSIGN ");
        }
{arithmeticOp} {sscanf(yytext, "%s", str);
        printf("ARITHMETICOP ");
        }
{leftBrace} {sscanf(yytext, "%s", str);
        printf("LEFTBRACE ");
        }
{rightBrace} {sscanf(yytext, "%s", str);
        printf("RIGHTBRACE ");
        }
[\t ]+ ;
. ;     /* no action specified */
%%
