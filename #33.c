#include<stdio.h>

void starpattern(int row)
{
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void reversepattern(int row)
{
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=row;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int row,input;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	
	printf("Enter \n1. To print star pattern \n2. To print reverse star pattern\n");
	scanf("%d",&input);
	
	
	switch(input)
	{
		case 1:
			starpattern(row);
			break;
		case 2:
			reversepattern(row);
			break;
		default:
			printf("you've entered wrong input");
	}
	return 0;
}
