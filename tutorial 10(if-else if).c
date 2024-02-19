#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d" , &age);
	printf("your age is %d years\n", age);
	
	if(age>=18){
		printf("you are adult");
	}
	else if(age>=11){
	printf("you are a teen");
	}
	/*else condition ka hona zaroori nahi hai*/
	else{
		printf("you are a kid");
	};
	return 0;
}
