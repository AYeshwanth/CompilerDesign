%{
#include <stdio.h>
#include <stdlib.h>
%}

%token INT DOUBLE VOID 
%token FOR CONDITIONAL_OPERATOR
%token PRINTF RETURN
%token STRUCT 
%token IDENTIFIER NUMBER
%token PREPROC
%token DOT

%right '='
%left AND OR
%left '<' '>' LT GT LE GE EQ NE
%%

start: Function
		| Declaration
		;

Declaration: Type Assignment ';'
		| Assignment ';'
		| FunctionCall ';'
		| ArrayUsage ';'
		| Type ArrayUsage ';'
		| StructStmt ';'
		| error
		;

Assignment: IDENTIFIER '=' Assignment
		| IDENTIFIER '=' FunctionCall
		| IDENTIFIER '=' ArrayUsage
		| ArrayUsage '=' Assignment
		| IDENTIFIER ',' Assignment
		| NUMBER ',' Assignment
		| IDENTIFIER '+' Assignment
		| IDENTIFIER '-' Assignment
		| IDENTIFIER '*' Assignment
		| IDENTIFIER '/' Assignment	
		| NUMBER '+' Assignment
		| NUMBER '-' Assignment
		| NUMBER '*' Assignment
		| NUMBER '/' Assignment
		| '\'' Assignment '\''	
		| '(' Assignment ')'
		| '-' '(' Assignment ')'
		| '-' NUMBER
		| '-' IDENTIFIER
		|   NUMBER
		|   IDENTIFIER
		;

FunctionCall : IDENTIFIER'('')'
	| IDENTIFIER'('Assignment')'
	;

ArrayUsage : IDENTIFIER'['Assignment']'
	;

Function: Type IDENTIFIER '(' ArgListOpt ')' CompoundStmt 
	;

ArgListOpt: ArgList
	|
	;

ArgList:  ArgList ',' Arg
	| Arg
	;

Arg:	Type IDENTIFIER
	;

CompoundStmt:	'{' StmtList '}'
	;

StmtList:	StmtList Stmt
	|
	;

Stmt: Declaration
	| ForStmt
	| PrintFunc
	| ';'
	;

Type:	INT 
	| DOUBLE
	| VOID 
	;

ForStmt: FOR '(' Expr ';' Expr ';' Expr ')' Stmt 
       | FOR '(' Expr ';' Expr ';' Expr ')' CompoundStmt 
       | FOR '(' Expr ')' Stmt 
       | FOR '(' Expr ')' CompoundStmt 
	;

StructStmt : STRUCT IDENTIFIER '{' Type Assignment '}'  
	;

PrintFunc : PRINTF '(' "\"" Expr "\""')' ';'
	;

Expr:	
	| Expr LE Expr 
	| Expr GE Expr
	| Expr NE Expr
	| Expr EQ Expr
	| Expr GT Expr
	| Expr LT Expr
	| Assignment
	| ArrayUsage
	;
%%
#include"lex.yy.c"
#include<ctype.h>
int count=0;
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	
   if(!yyparse())
		printf("\nParsing complete\n");
	else
		printf("\nParsing failed\n");
	
	fclose(yyin);
    return 0;
}
         
yyerror(char *s) {
	printf("%d : %s %s\n", yylineno, s, yytext );
}
