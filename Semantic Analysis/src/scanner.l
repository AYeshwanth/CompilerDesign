alpha [a-zA-Z]
digit [0-9]

%%
[ \t]		;
[ \n]   { yylineno = yylineno + 1;}

int	{ yylval.iValue = INT; return INT; }
double { yylval.iValue = DOUBLE; return DOUBLE;}
void {yylval.iValue=VOID; return VOID;}
sizeof return SIZEOF;
typedef return TYPEDEF;
for 	return FOR;
while	return WHILE;
if	return IF;
else	return ELSE;
return return RETURN;
do return DO;
switch return SWITCH;
case return CASE;
break return BREAK;
default return DEFAULT;
continue return CONTINUE;
printf  return PRINTF;
scanf return SCANF;
struct 	return STRUCT;
^"#include ".+ return PREPROC;
{digit}+       {yylval.realValue=atoi(yytext); return NUM;}
({digit}*\.{digit}+)|({digit}+\.{digit}*) {yylval.realValue=atoi(yytext); return REAL;}
{alpha}({alpha}|{digit})* { yylval.str = strdup(yytext); return ID ;}
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
">"	return GT;
"<"	return LT;
"."     return DOT;
"*=" return MUL_ASSIGN;
"+=" return ADD_ASSIGN;
"-=" return SUB_ASSIGN;
"/=" return DIV_ASSIGN;
"&&" return AND;
"||" return OR;
"++" return DOUBLE_INCR;
"--" return DOUBLE_DCR;
\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
\"(\\.|[^"])*\" {yylval.str=strdup(yytext); return STRING;}
. return yytext[0];

%%