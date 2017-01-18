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

#define IF 276
#define ELSE 277
#define WHILE 278
#define RETURN 279
#define FOR 280
#define DO 281
#define SWITCH 282
#define CASE 283
#define BREAK 284
#define DEFAULT 285
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

FILE *output;
%}
%%
[ \t]		;

[ \n]   { yylineno = yylineno + 1;}
int	fprintf(output,"line : %d type : %d token : %s\n",yylineno,INT,yytext);
double fprintf(output,"line : %d type : %d token : %s\n",yylineno,DOUBLE,yytext);
void fprintf(output,"line : %d type : %d token : %s\n",yylineno,VOID,yytext);
while	fprintf(output,"line : %d type : %d token : %s\n",yylineno,WHILE,yytext);
for fprintf(output,"line : %d type : %d token : %s\n",yylineno,FOR,yytext);
do fprintf(output,"line : %d type : %d token : %s\n",yylineno,DO,yytext);
switch fprintf(output,"line : %d type : %d token : %s\n",yylineno,SWITCH,yytext);
case fprintf(output,"line : %d type : %d token : %s\n",yylineno,CASE,yytext);
break fprintf(output,"line : %d type : %d token : %s\n",yylineno,BREAK,yytext);
return fprintf(output,"line : %d type : %d token : %s\n",yylineno,RETURN,yytext);
default fprintf(output,"line : %d type : %d token : %s\n",yylineno,DEFAULT,yytext);
continue fprintf(output,"line : %d type : %d token : %s\n",yylineno,CONTINUE,yytext);
if	fprintf(output,"line : %d type : %d token : %s\n",yylineno,IF,yytext);
else	fprintf(output,"line : %d type : %d token : %s\n",yylineno,ELSE,yytext);
printf  fprintf(output,"line : %d type : %d token : %s\n",yylineno,PRINTF,yytext);
scanf fprintf(output,"line : %d type : %d token : %s\n",yylineno,SCANF,yytext);
struct 	fprintf(output,"line : %d type : %d token : %s\n",yylineno,STRUCT,yytext);
^"#include ".+ ;

{alpha}({alpha}|{digit})*\[{digit}*\] fprintf(output,"line : %d type : %d token : %s\n",yylineno,IDENTIFIER_ARRAY,yytext);

{alpha}({alpha}|{digit})*\(({alpha}|{digit})*\) fprintf(output,"line : %d type : %d token : %s\n",yylineno, FUNCTION, yytext);

{digit}+       fprintf(output,"line : %d type : %d token : %s\n",yylineno,NUMBER,yytext);

{alpha}({alpha}|{digit})* fprintf(output,"line : %d type : %d token : %s\n",yylineno,IDENTIFIER,yytext);
"<="    fprintf(output,"line : %d type : %d token : %s\n",yylineno,LE,yytext);
">="    fprintf(output,"line : %d type : %d token : %s\n",yylineno,GE,yytext);
"=="    fprintf(output,"line : %d type : %d token : %s\n",yylineno,EQ,yytext);
"!="    fprintf(output,"line : %d type : %d token : %s\n",yylineno,NE,yytext);
">"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,GT,yytext);
"<"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,LT,yytext);
"."     fprintf(output,"line : %d type : %d token : %s\n",yylineno,DOT,yytext);
"&&" fprintf(output,"line : %d type : %d token : %s\n",yylineno,AND,yytext);
"||"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,OR,yytext);
";"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,SEMI_COLON,yytext);
","	fprintf(output,"line : %d type : %d token : %s\n",yylineno,COMMA,yytext);
"{"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,L_CURLY,yytext);
"}"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,R_CURLY,yytext);
"="	fprintf(output,"line : %d type : %d token : %s\n",yylineno,ASSN,yytext);
"+"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,ADD,yytext);
"-"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,SUB,yytext);
"("	fprintf(output,"line : %d type : %d token : %s\n",yylineno,L_BRAC,yytext);
")"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,R_SQ,yytext);
"["	fprintf(output,"line : %d type : %d token : %s\n",yylineno,L_SQ,yytext);
"]"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,R_BRAC,yytext);
\"(\\.|[^"])*\"	fprintf(output,"line : %d type : %d token : %s\n",yylineno,STRING,yytext);
%%
int main() {
 output=fopen("tokens.txt","w");
 yylex();
 return 0;
}
