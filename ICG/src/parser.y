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
	char empty[2] = " ";
	
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
%type<realValue> NUM
%type<str> Assignment ArrayUsage StatementDeclaration ValueVar REAL Expr STRING assign_operator Expression Oper VariableInit
Stmt StmtList CompoundStmt Conditional_statement Conditonal_condition Conditional_Operator
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

StatementDeclaration: ID {PushICGStack($1);} assign_operator {PushICGStack($3);} VariableInit ',' StatementDeclaration 
	{ 
		if(IsAlreadyPresent($1)){
			printf("\n%s Already declared\n", $1);
		}
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		ICGCurrAssignCodeGenr();
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
	| ID {PushICGStack($1);} assign_operator {PushICGStack($3);} VariableInit
		{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		ICGCurrAssignCodeGenr();
	}
	| ID {PushICGStack($1);} assign_operator {PushICGStack($3);} Conditional_statement
		{ 
		if(IsAlreadyPresent($1))
			printf("\n%s Already declared\n", $1);
		else{
			identifierList.push_back($1); 
			$$ = $1;
		}
		printf("------ Here ------");
		ICGCurrAssignCodeGenr();
	}
	;

VariableInit: ValueVar {$$ = $1;}
	| ValueVar Oper {{ strcpy(tokenStack[++tokenStackTop], $2); }} ValueVar 
	{
		if(!check($1, $4))
			printf("Type mismatch %s %s\n", $1, $4);
		else
		  	$$ = $1;
		ICGCurrCodeGenr();
	}
	;

ValueVar: ID { printf("----- Here : %s ------", $1); PushICGStack($1); $$ = $1;}
	| NUM {PushICGStack(ToString($1)); $$ = ToString($1);}
	| REAL {PushICGStack($1); $$ = $1;}
	| STRING {PushICGStack($1); $$ = $1;}
	;

Oper: '+' 
	| '-' 
	| '*'
	| '/'
	;
/* Assignment block */
Assignment: ID { PushICGStack($1);} assign_operator { PushICGStack($3); } Expression 
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $5))
				;
			else
			  	$$ = $1;
		}
		ICGCurrAssignCodeGenr();
	}
	| ID {PushICGStack($1);} assign_operator {PushICGStack($3);} Conditional_statement
	{
		if(!IsAlreadyPresent($1)){
			printf("%s Undeclared Variable.", $1);
		}else{
			if(!check($1, $5))
				printf("Type mismatch %s %s\n", $1, $5);
			else
			  	$$ = $1;
		}
		ICGCurrAssignCodeGenr();	
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
	| ID DOUBLE_DCR {$$ = $1;}
	| ID DOUBLE_INCR {$$ = $1;}
	| ID { $$ = $1;}
	| NUM {$$ = ToString($1);}
	| REAL {$$ = $1;}
	;


Expression: Expression '+' { strcpy(tokenStack[++tokenStackTop], "+"); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		ICGCurrCodeGenr();
	}
	|	Expression '-' { strcpy(tokenStack[++tokenStackTop], ""); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		ICGCurrCodeGenr();
	}
	|	Expression '*' { strcpy(tokenStack[++tokenStackTop], "*"); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		ICGCurrCodeGenr();
	}
	|	Expression '/' { strcpy(tokenStack[++tokenStackTop], "/"); } Expression
	{ 
		if(!check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		ICGCurrCodeGenr();
	}
	| '(' Expression ')' 
		{ 
			$$ = $2; 
		}
	|   NUM 
		{ 
			$$ = ToString($1);
			PushICGStack(ToString($1)); 
		}
	|   REAL 
		{
			$$ = $1; 
			PushICGStack($1); 
		}
	|   ID 
		{ 
			$$ = $1; 
			PushICGStack($1); 
		}
	| 	ArrayUsage { ICGCurrArrayCodeGenr(); } 
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
ArrayUsage : ID {PushICGStack($1);} '['Assignment']' 
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
CompoundStmt:	'{' {saveST();} StmtList '}' {popST(); $$ = $3;} 
	;
StmtList:	StmtList Stmt {$$ = $2;}
	| {$$ = empty;}
	;
Stmt: Declaration {$$ = empty;}
	| ForStmt {$$ = empty;}
	| PrintFunc {$$ = empty;}
	| ';' {$$ = empty;}
	| RETURN ';' {$$ = empty;}
	| RETURN Assignment ';' {$$ = $2;}
	| BREAK ';' {$$ = empty;}
	| CONTINUE ';' {$$ = empty;}
	;

/* Type Identifier block */
Type:	INT 
	| DOUBLE
	| VOID 
	;

/* For Block */
ForStmt: FOR '(' Expr {ForInitialisation();} ';' Expr {ForCondition();} ';' Expr {ForChange();} ')' Stmt {ForAfter();} 
       | FOR '(' Expr {ForInitialisation();}';' Expr {ForCondition();} ';' Expr {ForChange();} ')' CompoundStmt {ForAfter();}
	;

/* Struct Statement */
StructStmt : STRUCT ID '{' Type Assignment ';' '}' { insert($2,STRUCT,g_addr); g_addr+=4; } 
	;

/* Print Function */
PrintFunc : PRINTF '(' STRING ')' ';'
	;


/*Expression Block*/
Expr: Expression RelationalOperator Expression
	| Assignment
	;

RelationalOperator: LE
	| GE
	| NE 
	| EQ
	| GT
	| LT
	;


Conditional_statement: '(' Conditional_Operator ')'

/* Conditional Statement */
Conditional_Operator: Conditonal_condition {ifAssignment();} '?' Expression {ifCondition();} ':' Expression { ifAfter(); $$ = $1;}
	;

Conditonal_condition: Expression RelationalOperator Expression 
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
