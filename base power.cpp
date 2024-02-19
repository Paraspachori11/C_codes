#include<stdio.h>

int main()
{
	int i,b,p,power=1;
	printf("base");
	scanf("%d",&b);
	printf("power");
	scanf("%d",&p);
	for(i=1;i<=p;i++){
		power=power*b;
	}
	printf("the final value is %d",power);
	return 0;
}
