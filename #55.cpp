#include<stdio.h>

int main()
{
	int a=3;
	int *ptr;//Wild pointer
	ptr = &a;// Not a wild pointer anymore
	printf("%d is the value",*ptr);
	return 0;
}
