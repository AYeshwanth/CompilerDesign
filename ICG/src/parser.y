%{
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp"
	#include "icg.cpp"
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
%token<str> MUL_ASSIGN SUB_ASSIGN DIV_ASSIGN ADD_ASSIGN
%token ARRAY FUNCTION
%token MAIN

%left GT LT LE GE NE EQ
%left AND OR

%right '='
%left '+' '-'
%left '*' '/'

%type<iValue> Type
%type<str> Assignment ArrayUsage StatementDeclaration ValueVar NUM REAL Expr STRING assign_operator Expression Oper VariableInit
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

StatementDeclaration: ID {pushicg($1);} assign_operator {pushicg($3);} VariableInit ',' StatementDeclaration 
	{ 
		if(IsAlreadyPresent($1)){
			printf("\n%s Already declared\n", $1);
		}
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		codegen_assign();
	}
	| ID ',' StatementDeclaration
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		
	}
	| ID
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
	
	}
	| ID {pushicg($1);} assign_operator {pushicg($3);} VariableInit
		{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		codegen_assign();
	}
	| ID {pushicg($1);} assign_operator {pushicg($3);} Conditional_statement
	{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		codegen_assign();
	}
	;

VariableInit: ValueVar {$$ = $1;}
	| ValueVar Oper {{ strcpy(tstack[++top], $2); }} ValueVar 
	{
		if(!check($1, $4))
			printf("Type mismatch %s %s\n", $1, $4);
		else
		  	$$ = $1;
		codegen();
	}
	;

ValueVar: ID {pushicg("$1"); $$ = $1;}
	| NUM {pushicg("$1"); $$ = $1;}
	| REAL {pushicg("$1"); $$ = $1;}
	| STRING {pushicg("$1"); $$ = $1;}
	;

Oper: '+' 
	| '-' 
	| '*'
	| '/'
	;
/* Assignment block */
Assignment: ID { pushicg($1);} assign_operator { pushicg($3); } Expression 
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $5))
				printf("Type mismatch %s %s\n", $1, $5);
			else
			  	$$ = $1;
		}
		codegen_assign();
	}
	| ArrayUsage assign_operator Expression
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
	| ID { $$ = $1;}
	| NUM {$$ = $1;}
	| REAL {$$ = $1;}
	;


Expression: Expression '+' { strcpy(tstack[++top], "+"); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	|	Expression '-' { strcpy(tstack[++top], ""); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	|	Expression '*' { strcpy(tstack[++top], "*"); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	|	Expression '/' { strcpy(tstack[++top], "/"); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	| '(' Expression ')' 
		{ 
			$$ = $2; 
		}
	|   NUM 
		{ 
			$$ = $1;
			pushicg($1); 
		}
	|   REAL 
		{
			$$ = $1; 
			pushicg($1); 
		}
	|   ID 
		{ 
			$$ = $1; 
			pushicg($1); 
		}
	| 	ArrayUsage { codegen_array(); } 
	;

assign_operator: '=' {char assign[2] = "="; $$=assign;}
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
Expr: Expression RelationalOperator Expression
	;

RelationalOperator: LE
	| GE
	| NE 
	| EQ
	| GT
	| LT
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
