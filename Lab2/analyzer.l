alpha [a-zA-Z]
digit [0-9]

%{
#define IDENTIFIER 258
#define NUMBER 259
#define SIZEOF 260

#define PTR 261
#define GT 262
#define LT 263
#define GE 264
#define LE 265
#define NE 266
#define EQ 267
#define AND 268
#define OR 269
#define DOT 270

#define TYPEDEF 271
#define INT 272
#define DOUBLE 273
#define VOID 274
#define STRUCT 275


#define RETURN 279
#define FOR 280

#define BREAK 284
#define CONTINUE 286

#define PRINTF 287
#define SCANF 288

#define L_CURLY 289
#define R_CURLY 290

#define L_SQ 299
#define R_SQ 300

#define ASSN 291
#define ADD 292
#define SUB 293
#define L_BRAC 294
#define R_BRAC 295
#define COMMA 296
#define SEMI_COLON 297

#define FUNCTION 333

#define STRING 298

#define IDENTIFIER_ARRAY 301

#define CONDITIONAL_OPERATOR 321

#define PREPROC 322

FILE *fd;
%}
%%
[ \t]		;

[ \n]   { yylineno = yylineno + 1;}
int	fprintf(fd,"line : %d type : %d token : %s\n",yylineno,INT,yytext);
double fprintf(fd,"line : %d type : %d token : %s\n",yylineno,DOUBLE,yytext);
void fprintf(fd,"line : %d type : %d token : %s\n",yylineno,VOID,yytext);
for fprintf(fd,"line : %d type : %d token : %s\n",yylineno,FOR,yytext);
return fprintf(fd,"line : %d type : %d token : %s\n",yylineno,RETURN,yytext);
continue fprintf(fd,"line : %d type : %d token : %s\n",yylineno,CONTINUE,yytext);
printf  fprintf(fd,"line : %d type : %d token : %s\n",yylineno,PRINTF,yytext);
scanf fprintf(fd,"line : %d type : %d token : %s\n",yylineno,SCANF,yytext);
struct 	fprintf(fd,"line : %d type : %d token : %s\n",yylineno,STRUCT,yytext);
"("(.*)"?"(.*)":"(.*)")" fprintf(fd, "line : %d type : %d token : %s\n",yylineno, CONDITIONAL_OPERATOR, yytext);
{alpha}({alpha}|{digit})*\[{digit}*\] fprintf(fd,"line : %d type : %d token : %s\n",yylineno,IDENTIFIER_ARRAY,yytext);
{alpha}({alpha}|{digit})*\(({alpha}|{digit})*\) fprintf(fd,"line : %d type : %d token : %s\n",yylineno, FUNCTION, yytext);
{digit}+       fprintf(fd,"line : %d type : %d token : %s\n",yylineno,NUMBER,yytext);
{alpha}({alpha}|{digit})* fprintf(fd,"line : %d type : %d token : %s\n",yylineno,IDENTIFIER,yytext);
"#include ".+ fprintf(fd,"line : %d type : %d token : %s\n",yylineno,PREPROC,yytext);
"<="    fprintf(fd,"line : %d type : %d token : %s\n",yylineno,LE,yytext);
">="    fprintf(fd,"line : %d type : %d token : %s\n",yylineno,GE,yytext);
"=="    fprintf(fd,"line : %d type : %d token : %s\n",yylineno,EQ,yytext);
"!="    fprintf(fd,"line : %d type : %d token : %s\n",yylineno,NE,yytext);
">"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,GT,yytext);
"<"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,LT,yytext);
"."     fprintf(fd,"line : %d type : %d token : %s\n",yylineno,DOT,yytext);
"&&" 	fprintf(fd,"line : %d type : %d token : %s\n",yylineno,AND,yytext);
"||"	fprintf(fd,"line : %d type : %d token : %s\n",yylineno,OR,yytext);
";"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,SEMI_COLON,yytext);
","		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,COMMA,yytext);
"{"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,L_CURLY,yytext);
"}"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,R_CURLY,yytext);
"="		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,ASSN,yytext);
"+"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,ADD,yytext);
"-"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,SUB,yytext);
"("		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,L_BRAC,yytext);
")"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,R_SQ,yytext);
"["		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,L_SQ,yytext);
"]"		fprintf(fd,"line : %d type : %d token : %s\n",yylineno,R_BRAC,yytext);

\"(\\.|[^"])*\"	fprintf(fd,"line : %d type : %d token : %s\n",yylineno,STRING,yytext);
%%
int main() {
	fd=fopen("tokens.txt","w");
	yylex();
	return 0;
}
