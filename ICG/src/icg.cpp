#include <bits/stdc++.h>

char tokenStack[100][10];
int tokenStackTop = -1;
char id[2] = "0";
char tempVarName[2] = "t";

int tokenLabls[20];
int lanNumber=0;
int labTokenStackTop=0;

char *ToString(int x){
	char buffer[20];
	sprintf(buffer, "%d", x);
	return buffer;
}

void PushICGStack(char *a)
{
	strcpy(tokenStack[++tokenStackTop], a);
	//printf("%s\n", a);
	return;
}

void ICGCurrCodeGenr()
{
	strcpy(tempVarName, "t");
	strcat(tempVarName, id);
	printf("%s = %s %s %s\n", tempVarName, tokenStack[tokenStackTop-2], tokenStack[tokenStackTop-1], tokenStack[tokenStackTop]);
	tokenStackTop -= 2;
	strcpy(tokenStack[tokenStackTop], tempVarName);
	id[0]++;
	return;
}

void ICGCurrAssignCodeGenr()
{
	printf("%s %s %s\n", tokenStack[tokenStackTop-2], tokenStack[tokenStackTop-1], tokenStack[tokenStackTop]);
	tokenStackTop -= 3;
	return;
}

void ICGCurrArrayCodeGenr()
{
	strcpy(tempVarName, "t");
	strcat(tempVarName, id);
	printf("%s = %s * 4\n", tempVarName, tokenStack[tokenStackTop] );
	strcpy(tokenStack[tokenStackTop], tempVarName);
	id[0]++;
	strcpy(tempVarName, "t");
	strcat(tempVarName, id);
	printf("%s = %s [ %s ]\n", tempVarName, tokenStack[tokenStackTop-1], tokenStack[tokenStackTop]);
	tokenStackTop -= 1;
	strcpy(tokenStack[tokenStackTop], tempVarName);
	id[0]++;
	return;
}

void ifAssignment()
{
	 lanNumber++;
	 strcpy(tempVarName,"t");
	 strcat(tempVarName,id);
	 printf("%s = not %s\n",tempVarName,tokenStack[tokenStackTop--]);
	 printf("if %s goto L%d\n",tempVarName,lanNumber);
	 id[0]++;
	 tokenLabls[++labTokenStackTop]=lanNumber;
	 return;
}

void ifCondition()
{
	int x;
	lanNumber++;
	x=tokenLabls[labTokenStackTop--];
	printf("%s %s %s\n",tokenStack[tokenStackTop-2], tokenStack[tokenStackTop-1], tokenStack[tokenStackTop]);
	tokenStackTop--;
	printf("goto L%d\n",lanNumber);
	printf("L%d: \n",x); 
	tokenLabls[++labTokenStackTop]=lanNumber;
	return;
}

void ifAfter()
{
	int y;
	y=tokenLabls[labTokenStackTop--];
	printf("%s %s %s\n",tokenStack[tokenStackTop-2], tokenStack[tokenStackTop-1], tokenStack[tokenStackTop]);
	printf("L%d: \n",y);
	
	tokenStackTop = tokenStackTop-3;
	return;
}

void ForInitialisation()
{
    lanNumber++;
	printf("L%d: \n",lanNumber);
	tokenLabls[++labTokenStackTop] = lanNumber;
	return;
}

void ForCondition()
{
    strcpy(tempVarName,"t");
    strcat(tempVarName,id);
    id[0]++;
    printf("%s = not %s\n",tempVarName,tokenStack[tokenStackTop--]);
    lanNumber++;
    printf("if %s goto L%d\n",tempVarName,lanNumber);
    tokenLabls[++labTokenStackTop] = lanNumber;
    lanNumber++;
    printf("goto L%d\n",lanNumber);
    tokenLabls[++labTokenStackTop] = lanNumber;
    lanNumber++; 
    printf("L%d: \n",lanNumber);
    tokenLabls[++labTokenStackTop] = lanNumber;
    return;
}
void ForChange()
{
    printf("goto L%d \n",tokenLabls[labTokenStackTop - 3]);
    printf("L%d: \n",tokenLabls[labTokenStackTop - 1]);
    return;
}

void ForAfter()
{
    printf("goto L%d \n",tokenLabls[labTokenStackTop]);    
    printf("L%d: \n",tokenLabls[labTokenStackTop-2]);
   	labTokenStackTop -= 4;
   	return;
}