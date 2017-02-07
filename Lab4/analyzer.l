alpha [a-zA-Z]
digit [0-9]
%%
[ \t]		;
[ \n]   { yylineno = yylineno + 1;}
int	return INT;
double return DOUBLE;
void return VOID;
for return FOR;
struct 	return STRUCT;
break return BREAK;
continue return CONTINUE;
printf return PRINTF;
"("(.*)"?"(.*)":"(.*)")" return  CONDITIONAL_OPERATOR;
{digit}+"."{digit}+ return CONSTANT;
alpha?\"(\\.|[^\\"])*\"	return STRING_LITERAL;
{digit}+      return NUMBER;
{alpha}({alpha}|{digit})* return IDENTIFIER;
^"#include ".+ return PREPROC;
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
">"		return GT;
"<"		return LT;
"&&" 	return AND;
"||"	return OR;
"++" return DINCR;
"--" return DDCR;
\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
.       return yytext[0];
%%

