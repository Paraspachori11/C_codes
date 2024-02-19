//using iterative approach
#include<stdio.h>
int main()
{
	int a=0,b=1;
	int n,i,c;
	
	printf("Enter the position of element of fibonacci series\n");
	scanf("%d",&n);
    printf("%d,%d,",a,b);	
	for(i=1;i<n-1;i++)
	{
	c=a+b;
	a=b;
	b=c;
	if(i == n-2){
		printf("%d.",c);
		continue;
	} //try kara tha last comma hatane k liye
	printf("%d,",c);
	}
	return 0;
}
