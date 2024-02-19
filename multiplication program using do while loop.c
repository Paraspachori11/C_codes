#include <stdio.h>

int main()
{
	int num,a,i=0;
	
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("Number till which the table should be printed\n");
	scanf("%d",&num);
	printf("multiplication table of %d till %d\n",a,num);
	
	do{
		printf("%d * %d = %d\n", a,i,a*i);
		i=i+1;
	}while(i<=num);
	return 0;
}
