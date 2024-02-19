//Implementing CallBack Function

#include<stdio.h>

int sum(int i1, int i2)
{
	return i1 + i2;
}

int average(int val)
{
	return val/2;
}

void greetHelloAndSum(int (*Sumptr) (int,int),int n1,int n2)
{
	printf("Greeting Hello\n");
	printf("Sum is %d",Sumptr(n1,n2));
}

void greetGmAndSum(int (*Sumptr) (int,int),int n1,int n2)
{
	printf("Greeting Good Morning\n");
	printf("Sum is %d",Sumptr(n1,n2));
}

void greetGaAndAvg(int (*Avgptr)(int),int value)
{
	printf("Greeting AfterNoon\n");
	printf("Average is %f",(float) (*Avgptr)(value));
}

void greetGeAndAvg(int (*Avgptr) (int), int value)
{
	printf("Greeting Evening\n");
	printf("Average is %f",(float) (*Avgptr)(value));
}

int main()
{
	int num1=0, num2=0;
	
	printf("Enter the First Number:\t");
	scanf("%d",&num1);
	
	printf("Enter the Second Number:");
	scanf("%d",&num2);
	
	int (*Sptr) (int,int);
	Sptr = sum;
	
	printf("\n====================\n");
	greetHelloAndSum(Sptr,num1,num2);
	
	printf("\n====================\n");
	greetGmAndSum(Sptr,num1,num2);
	
	int (*Aptr) (int);
	int sumResult = (*Sptr) (num1,num2);
	Aptr = average;
	
	printf("\n====================\n");
	greetGaAndAvg(Aptr,sumResult);
	
	printf("\n====================\n");
	greetGeAndAvg(Aptr,sumResult);
	
	return 0;
}
