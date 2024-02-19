//VOID POINTER
#include<stdio.h>

int main()
{
	int a=20;
	float b=8.33;
	void* ptr;
	
	ptr=&a;
	printf("Value at 'a' is %d\n",*((int*)ptr));
	ptr=&b;
	printf("Value at 'b' is %f\n",*((float*)ptr));
	return 0;
}
