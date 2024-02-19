#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d" , &age);
	printf("your age is %d years", age);
	
	if(age>=18){
		printf("you can vote");
	};
	return 0;
}
