#include <stdio.h>

int main()
{
	int num,a,i=0;
	
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("Number till which the table should be printed");
	scanf("%d",&num);
	printf("multiplication table of %d",a);
	
	do{
		printf("%d\n",a*i);
		i=i+1;
	}while(i<=num);
	return 0;
}
