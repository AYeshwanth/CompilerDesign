#include <stdio.h>

struct Book{
	int pages;
}

void main(){  
	int i=5, j=1;
	int arr[2];
	double k=3.2;
	i=j*k;
	for(j=0; j<i; j++){
		int t = j;
		i = t<i ? t;
	}
	return;
}