#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	a=b+c;
	a = ((b+c)*(b) + c);
	int i;
	for(i=0; i<5; i++)	
		a=b;
	int x;
	x = (a ? a : b);
	return 0;
}