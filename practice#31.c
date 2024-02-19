/*Quick quiz:

Given two numbers a and b ,
add them subtract them and assign them to a and b 
using call by reference.

a = 4
b = 3

after running the function , the values of a and b should be:
a = 7
b = 1
*/

#include<stdio.h>
void add_sub(int*x,int*y){
	*x = *x+*y;
	*y = *x-(*y*2);
}

int main()
{
	int a,b;
	printf("enter the value a\n");
	scanf("%d",&a);
	printf("enter the value b\n");
	scanf("%d",&b);
	add_sub(&a,&b);
	printf("addition stored in a is %d\n",a);
	printf("subtraction stored in b is %d\n",b);
	return 0;
}
