%{
#include <stdio.h>
#include <stdlib.h>
%}

%token INT DOUBLE VOID CONSTANT STRING_LITERAL
%token FOR CONDITIONAL_OPERATOR
%token PRINTF RETURN
%token BREAK CONTINUE
%token STRUCT 
%token IDENTIFIER NUMBER
%token PREPROC
%token DOT

%right '='
%left DINCR DDCR
%left AND OR 
%left '<' '>' LT GT LE GE EQ NE
%%

start: Function start
		| StructStmt start
		| PREPROC start
		| Declaration 
		|
		;

Declaration: 
		ReturnStmt ';'
		|Type Assignment ';'
		| Assignment ';'
		| FunctionCall ';'
		| ArrayUsage ';'
		| Type ArrayUsage ';'
		| StructStmt ';'
		| PrintFunc ';'
		| error
		;

ReturnStmt: RETURN ';'
		| RETURN Assignment ';'
		|
		;

Assignment: IDENTIFIER '=' Conditional_statement
		| IDENTIFIER '=' FunctionCall
		| IDENTIFIER '=' ArrayUsage
		| IDENTIFIER '=' Assignment
		| ArrayUsage '=' Assignment
		| IDENTIFIER ',' Assignment
		| NUMBER ',' Assignment
		| CONSTANT ',' Assignment
		| IDENTIFIER '+' Assignment
		| IDENTIFIER '-' Assignment
		| IDENTIFIER '*' Assignment
		| IDENTIFIER '/' Assignment	
		| IDENTIFIER DINCR
		| IDENTIFIER DDCR
		| NUMBER '+' Assignment
		| NUMBER '-' Assignment
		| NUMBER '*' Assignment
		| NUMBER '/' Assignment
		| CONSTANT '+' Assignment
		| CONSTANT '-' Assignment
		| CONSTANT '*' Assignment
		| CONSTANT '/' Assignment
		| '\'' Assignment '\''	
		| '(' Assignment ')'
		| '-' '(' Assignment ')'
		| '-' NUMBER
		| '-' IDENTIFIER
		| '-' CONSTANT
		| NUMBER
		| IDENTIFIER
		| CONSTANT
		| STRING_LITERAL
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
	| RETURN Expr ';'
	| Conditional_statement
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

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

specifier_qualifier_list
	: Type specifier_qualifier_list
	| Type
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;


StructStmt : STRUCT IDENTIFIER '{'
	struct_declaration_list '}'
	| STRUCT '{' struct_declaration_list '}'
	;


declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	;

pointer
	: '*'
	| '*' pointer
	;

Expr:	 Expr LE Expr 
	| Expr GE Expr
	| Expr NE Expr
	| Expr EQ Expr
	| Expr GT Expr
	| Expr LT Expr
	| Assignment
	| ArrayUsage
	;

PrintFunc : PRINTF '(' "\"" Expr "\""')' ';'
	;


Conditional_statement:  Expr '?' Assignment ':' Assignment 
	| Expr
	|
	;

constant_expression : Conditional_statement ;

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
