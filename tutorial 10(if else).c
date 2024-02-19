#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d" , &age);
	printf("your age is %d years\n", age);
	
	if(age>=18){
		printf("you can vote");
	}
	else{
	printf("you can't vote");
	};
	return 0;
}
