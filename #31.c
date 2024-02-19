//Call by reference 

#include<stdio.h>

void swap(int*x,int*y)
{
	int extra;
	extra = *x;
	*x=*y;
	*y=extra;
}

int main()
{
	int a=10,b=20;
	printf(" a = %d & b = %d\n",a,b);
	swap(&a,&b);
	printf(" a = %d & b = %d\n",a,b);
	return 0;
} 

//Quick Quiz

//Add & subtract 2 numbers & assign them to 1 variable each using "call by refrence" .

//#include <stdio.h>
//
//void AddSubtract(int* ptra, int* ptrb)
//{
//	int add = *ptra + *ptrb;
//	int subtract = *ptra - *ptrb;
//	*ptra = add;
//	*ptrb = subtract;
//}
//
//int main()
//{
//	int a = 7;
//	int b = 5;
//	
//	AddSubtract(&a,&b);
//	
//	printf("Value of a %d\n",a);
//	printf("Value of b %d\n",b);
//	
//	return 0;
//}


