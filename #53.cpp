#include<stdio.h>


int main()
{
	int a=11;
	int* ptr=&a;
	
	printf("Address in ptr is %d",ptr);
	printf("Value of a is %d",*ptr);
	return 0;
}


/*
int main()
{
	int a=11;
	int* ptr=NULL;
	
	printf("Address in ptr is %d",ptr);
	printf("Value of a is %d",*ptr);
	return 0;
}
*/
