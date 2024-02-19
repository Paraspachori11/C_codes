//Function Pointers

#include<stdio.h>

int sum(int one, int two)
{
	return one + two;
}

int main()
{
	int a=0,b=0;
	printf("Enter Num 1:\t");
	scanf("%d",&a);
	
	printf("Enter Num 2:\t");
	scanf("%d",&b);
	
	int (*Fptr) (int,int);   	//Declaring Function Pointer
	Fptr = &sum;				//Creating Function Pointer
	int result = (*Fptr)(a,b);	//Derefrencing Function Pointer
	
	printf("\nSum is : %d",result);
	return 0;
}
