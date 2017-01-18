letter [a-zA-Z]
string [^\s\\]
digit [0-9]
%{	
	#include <stdio.h>
	FILE *fd;
%}
%%
[\n] {yylineno = yylineno + 1;}
{digit}+("E"("+"|"-")?{digit}+)? fprintf(fd, "\nOn Line Number : %d, Token : %s is a Real Number",yylineno,  yytext);
"\""(.*)*"\"" fprintf(fd, "\nOn Line Number : %d, Token : %s is a String inside Printf/scanf", yylineno, yytext);
"("(.*)"?"(.*)":"(.*)")" fprintf(fd, "\nOn Line Number : %d, Token : %s is a Conditional Operator",yylineno, yytext);
{digit}+"."{digit}+("E"("+"|"-")?{digit}+)? fprintf(fd, "\nOn Line Number : %d, Token : %s is a Floating point number",yylineno, yytext);
"int"|"scanf"|"printf"|"return"|"void"|"double"|"main" fprintf(fd,"\nOn Line Number : %d, Token : %s  Is a KeyWord",yylineno, yytext);
"\a"|"\\n"|"\\b"|"\t"|"\\t"|"\b"|"\\a" fprintf(fd,"\nOn Line Number : %d, Token : %s  is a Escape Sequence",yylineno, yytext);
{letter}({letter}|{digit})* fprintf(fd,"\nOn Line Number : %d, Token : %s  is identifier",yylineno, yytext);
"{"|"}"|"["|"]"|"("|")"|"#"|"'"|"."|"\""|"\\"|";"|"," fprintf(fd,"\nOn Line Number : %d, Token : %s  is a special character",yylineno, yytext);
"&&"|"<"|">"|"<="|">="|"="|"+"|"-"|"?"|"*"|"/"|"%"|"&"|"||" fprintf(fd,"\nOn Line Number : %d, Token : %s  is an Operator",yylineno, yytext);
"%d"|"%s"|"%c"|"%f"|"%e" fprintf(fd,"\nOn Line Number : %d, Token : %s  is a format specifier",yylineno, yytext);
\/\/.* fprintf(fd, "\nOn Line Number : %d, Token : %s  is a Single Line Comment",yylineno, yytext);
\/\*(.*\n)*.*\*\/ fprintf(fd, "\nOn Line Number : %d, Token : %s  is a Multi Line Comment",yylineno, yytext);

%%
int main(){
	fd = fopen("flex_output2.txt", "w");
	yylex();	
	return 0;
}