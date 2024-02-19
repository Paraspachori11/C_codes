#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *arr = argv[1];
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	
	int result = 0;
	
	if(strcmp(arr,"add") == 0)
	{
		printf("Sum of %d + %d = %d",num1,num2,num1+num2);
	}
	else if(strcmp(arr,"subtract") == 0)
	{
		printf("Subtract of %d - %d = %d",num1,num2,num1-num2);
	}
	else if(strcmp(arr,"multiply") == 0)
	{
		printf("Multiply of %d & %d = %d",num1,num2,num1*num2);
	}
	else if(strcmp(arr,"divide") == 0)
	{
		printf("Divison of %d / %d = %d",num1,num2,num1/num2);
	}
	
	return 0;
}
