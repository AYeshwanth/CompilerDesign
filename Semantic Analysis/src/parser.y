%{
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp"
	int g_addr = 100;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}

	
%}
%token<str> ID 
%token NUM SIZEOF REAL
%token PTR DOT
%token TYPEDEF STRUCT
%token<iValue> INT DOUBLE VOID
%token IF ELSE WHILE RETURN FOR DO SWITCH CASE BREAK DEFAULT CONTINUE
%token PRINTF SCANF
%token STRING
%token PREPROC
%token DOUBLE_INCR DOUBLE_DCR
%token MUL_ASSIGN SUB_ASSIGN DIV_ASSIGN ADD_ASSIGN
%token ARRAY FUNCTION
%token MAIN

%left GT LT LE GE NE EQ
%left AND OR

%right '='
%left '+' '-'
%left '*' '/'

%type<iValue> Type
%type<str> Assignment ArrayUsage
%union {
 		int iValue; /* integer value */
 		float realValue;
 		char *str; /* identifier name */
	}


%%
start:	Function start
	| Declaration start
	| PREPROC start
	|
	;

/* Declaration block */
Declaration: Type StatementDeclaration ';' {insertWithError($1, g_addr); g_addr+=4; identifierList.clear();}
	| Assignment ';'
	| FunctionCall ';' 	
	| ArrayUsage ';' 
	| Type ArrayUsage ';' { insert($2,ARRAY,g_addr);
							insert($2,$1,g_addr); g_addr+=4; } 
	| StructStmt ';'
	| error	
	;

StatementDeclaration: ID '=' VariableInit ',' StatementDeclaration 
	{ 
		if(IsAlreadyPresent($1)){
			printf("\n%s Already declared\n", $1);
		}
		else{
			identifierList.push_back($1); 
		}
	}
	| ID ',' StatementDeclaration
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
		}
		
	}
	| ID
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
		}
	
	}
	| ID '=' VariableInit
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
		}
	
	}
	| ID '=' Conditional_statement
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
		}
	
	}
	;

VariableInit: ValueVar
	| ValueVar Oper ValueVar
	;

ValueVar: ID
	| NUM
	| REAL
	| STRING
	| 
	;

Oper: '+'
	| '-'
	| '*'
	| '/'
	|
	;
/* Assignment block */
Assignment: ID assign_operator Assignment
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $3))
				printf("Type mismatch %s %s\n", $1, $3);
			else
			  	$$ = $1;
		}
	}
	| ID '=' Conditional_statement
	| pointer Assignment
	| ID assign_operator FunctionCall
	| ID assign_operator ArrayUsage
	| ArrayUsage assign_operator Assignment
	| ID ',' Assignment
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $3))
				printf("Type mismatch %s %s\n", $1, $3);
			else
			  	$$ = $1;
		}
	}
	| NUM ',' Assignment
	| ID '+' Assignment 
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $3))
				printf("Type mismatch %s %s\n", $1, $3);
			else
			  	$$ = $1;
		}
	}
	| ID '-' Assignment
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $3))
				printf("Type mismatch %s %s\n", $1, $3);
			else
			  	$$ = $1;
		}
	}
	
	| ID '*' Assignment
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $3))
				printf("Type mismatch %s %s\n", $1, $3);
			else
			  	$$ = $1;
		}
	}
	| ID '/' Assignment
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $3))
				printf("Type mismatch %s %s\n", $1, $3);
			else
			  	$$ = $1;
		}
	}
	| ID DOUBLE_DCR
	| ID DOUBLE_INCR
	| NUM '+' Assignment
	| NUM '-' Assignment
	| NUM '*' Assignment
	| NUM '/' Assignment
	| REAL '+' Assignment
	| REAL '-' Assignment
	| REAL '*' Assignment
	| REAL '/' Assignment
	| '\'' Assignment '\''	
	| '(' Assignment ')'
	| '-' '(' Assignment ')'
	| '-' NUM
	| '-' REAL
	| '-' ID
	|   NUM {$$ = "INT";}
	|   REAL {$$ = "DOUBLE";}
	|   ID { $$ = $1;}
	;

assign_operator: '='
	| MUL_ASSIGN
	| SUB_ASSIGN
	| DIV_ASSIGN
	| ADD_ASSIGN
	;

/* Function Call Block */
FunctionCall : ID'('')'
	| ID'('Assignment')' 
	;

/* Array Usage */
ArrayUsage : ID'['Assignment']' 
	;


/* Function block */
Function: Type ID '(' ArgListOpt ')' CompoundStmt { insert($2,FUNCTION,g_addr); insert($2,$1,g_addr);g_addr+=4; }
	;

ArgListOpt: ArgList
	|
	;
ArgList:  ArgList ',' Arg
	| Arg
	;
Arg:	Type ID
	;
CompoundStmt:	'{' {saveST();}StmtList '}' {popST();}
	;
StmtList:	StmtList Stmt
	|
	;
Stmt: Declaration
	| ForStmt
	| IfStmt
	| PrintFunc
	| ';'
	| RETURN ';'
	| RETURN Assignment ';'
	| BREAK ';'
	| CONTINUE ';'
	;

/* Type Identifier block */
Type:	INT 
	| DOUBLE
	| VOID 
	;

/* For Block */
ForStmt: FOR '(' Expr ';' Expr ';' Expr ')' Stmt 
       | FOR '(' Expr ';' Expr ';' Expr ')' CompoundStmt
       | FOR '(' Expr ')' Stmt 
       | FOR '(' Expr ')' CompoundStmt 
	;

/* IfStmt Block */
IfStmt : IF '(' Expr ')' Stmt
		| IF '(' Expr ')' CompoundStmt
        | IF '(' Expr ')' CompoundStmt ELSE CompoundStmt
	;

/* Struct Statement */
StructStmt : STRUCT ID '{' Type Assignment ';' '}' { insert($2,STRUCT,g_addr); g_addr+=4; } 
	;

/* Print Function */
PrintFunc : PRINTF '(' STRING ')' ';'
	;


/*Expression Block*/
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

/* Conditional Statement */
Conditional_statement:  Conditonal_condition '?' ValueVar ':' ValueVar 
	;

Conditonal_condition: ValueVar LE ValueVar 
	| ValueVar GE ValueVar
	| ValueVar NE ValueVar
	| ValueVar EQ ValueVar
	| ValueVar GT ValueVar
	| ValueVar LT ValueVar
	;

/* Pointer handling */
pointer
	: '*'
	| '*' pointer
	;



%%

#include "lex.yy.c"
#include "ctype.h"
int count=0;

int main(int argc,char *argv[])
{
	FILE *file;
		file = fopen(argv[1], "r");
		if (!file)
		{
			fprintf(stderr, "Could not open %s\n", argv[1]);
			exit(1);
		}
		yyin = file;

	if(!yyparse())
		{
		printf("\nParsing done\n");
		printsym();
		}
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	return 0;
}

void yyerror(char *s)
{
	printf("%d 	:	%s  %s \n",yylineno,s,yytext);
}
