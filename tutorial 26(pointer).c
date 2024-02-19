#include<stdio.h>

int main()
{
	int a=76;//'a' variable create ho rha hai i.e. memory create ho rahi hai i.e. address bhi create ho raha hai of 'a'
	int *ptra=&a;//'ptra' naaam ka poiner variable create ho rha hai aur usme 'a' ka address store ho raha hai
	
	printf("The address of pointer of a is %p\n",&ptra);//i.e way of accessing 'ptra' ka address
	printf("Address of a is %p\n",ptra);//i.e way of accessing 'a' ka address
	printf("Address of a is %p\n",&a);//i.e another way of accessing 'a' ka address
	printf("Value of a is %d\n",*ptra);//i.e way of accessing 'a' ki value using pointer variable
	printf("Value of a is %p\n",a);//i.e way of accessing 'a' ki value
	
	return 0;
}
