#include<stdio.h>

int main()
//WAY 1
/*separately declaration and initialization
{
	int marks[4];//declaration
	
	marks[0]=12;//intialization
	marks[1]=54;//intialization
	marks[2]=6;//intialization
	marks[3]=58;//intialization
	
	for( int i=0;i<4;i++)
	{
		printf("the value at index %d of array is %d\n",i,marks[i]);
	}
	return(0);
}*/

//WAY 2
/*{
	int marks[4];
	
	for( int i=0;i<4;i++)
	{
		printf("enter the value at %dth index of array\n ",i);
		scanf("%d",&marks[i]);
	}
	for(int i=0;i<4;i++)
	{
		printf("the value at %d index is %d\n",i,marks[i]);
	}
	return 0;
}*/

//WAY 3
//initialisation with declaration
/*{
	int marks[4]={55,60,65,70};//not necessary to write [4] but be careful in case of 2D array
	
	for(int i=0;i<4;i++)
	{
		printf("the value at %dth idex of array is %d\n",i,marks[i]);
	}
}*/

//2D array
{
	int marks[2][4]={{1,2,3,4},{5,6,7,8}};
	
	//we'll use doble for loop
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			//printf(" Value at %d,%d index of matrix is %d\n",i,j,marks[i][j]);
			//OR
			printf("%d ",marks[i][j]);
		}
		printf("\n");
	}
}
