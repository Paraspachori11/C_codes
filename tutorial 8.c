#include<stdio.h>

int main()
{
	int a,i;
	printf("Want the multiplication table of ");
	scanf("%d", &a);
	printf("Table of %d\n", a);
	
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",a,i,a*i);
	};
	return(0);
 } 
