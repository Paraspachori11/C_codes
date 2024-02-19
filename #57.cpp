//Problem - : Matrix Multiplication
//
//* Take Input of Elements for MultiDimensional Arrays (a & b)
//* Check & show ,whether the multiplication is possible or not in between them
//* If Possible Then Display Multiplication result

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rowA,rowB,columnA,columnB;
	int **ptrA = NULL;
	int **ptrB = NULL;
	
	int **newMatrix = NULL;
	
	prev:
		
	printf("Welcome to Matrix Multiplication\n\n");
	
	printf("Enter Number of Rows You Want For Matrix A\n");
	scanf("%d",&rowA);
	getchar();
	
	printf("Enter Number of Columns You Want For Matrix A\n");
	scanf("%d",&columnA);
	getchar();
	
	printf("\n\n");
	
	printf("Enter Number of Rows You Want For Matrix B\n");
	scanf("%d",&rowB);
	getchar();
	
	printf("Enter Number of Columns You Want For Matrix B\n");
	scanf("%d",&columnB);
	getchar();
	
	if(columnA == rowB)
	{
		printf("\nValid Dimensions\n");
		goto next;
	}
	else
	{
		printf("\nInValid Dimensions\n");
		goto prev;
	}
	
	next:
	
//	Dynamic Array of pointers
	ptrA = (int **) calloc(rowA,sizeof(int *));
	
//	Allocating 1D arrays base addresses to each of the ptrA(pointer Array containing pointers) elements
	for(int i=0;i<rowA;i++)
	{
		ptrA[i] = (int *) calloc(columnA,sizeof(int));
	}
	
//	Dynamic Array of pointers
	ptrB = (int **) calloc(rowB,sizeof(int *));
	
//	Allocating 1D arrays base addresses to each of the ptrA(pointer Array containing pointers) elements
	for(int j=0;j<rowB;j++)
	{
		ptrB[j] = (int *) calloc(columnB,sizeof(int));
	}
	
	printf("\nEnter Elements of Matrix A\n");
//	Note - Dynamic Array ka size calculate nahi kiya jaa sakta (But static array ka kiya jaa sakta hai)
//	printf("%d",sizeof(ptrA)); //This will give me the size of pointer to be stored in a block (i.e. 8 in my case)
	
	for(int a=0;a<rowA;a++)
	{
		for(int b=0;b<columnA;b++)
		{
			printf("Row %d Column %d \t",a+1,b+1);
			scanf("%d",&ptrA[a][b]);
			getchar();
		}
	}
	
	printf("\nEnter Elements of Matrix B\n");
	for(int a=0;a<rowB;a++)
	{
		for(int b=0;b<columnB;b++)
		{
			printf("Row %d Column %d \t",a+1,b+1);
			scanf("%d",&ptrB[a][b]);
			getchar();
		}
	}
	
	printf("\nMATRIX A\n");
	for(int z=0;z<rowA;z++)
	{
		printf("[");
		for(int x=0;x<columnA;x++)
		{
			printf(" %d ",ptrA[z][x]);
		}
		printf("]\n");
	}
	
	printf("\nMATRIX B\n");
	for(int z=0;z<rowB;z++)
	{
		printf("[");
		for(int x=0;x<columnB;x++)
		{
			printf(" %d ",ptrB[z][x]);
		}
		printf("]\n");
	}
	
//	Multiplication Matrix Memory
	newMatrix = (int **) calloc(rowA,sizeof(int *));
	
	for(int k=0;k<rowA;k++)
	{
		newMatrix[k] = (int *) calloc(columnB,sizeof(int));
	}
	
//	Multiplication Logic
//	newMatrix[0][0] = (ptrA[0][0] * ptrB[0][0])+(ptrA[0][1] * ptrB[1][0]) + ........

//Loop for swaping Rows (of matrix A)
	for(int g=0;g<rowA;g++)
	{
//		Loop for swaping Columns (of matrix B)
		for(int n=0;n<columnB;n++)
		{
//			Loop for swaping Elements (of Both matrix in their row or column)
			for(int h=0;h<columnA;h++)
			{
				newMatrix[g][n] += ptrA[g][h] * ptrB[h][n];
//				printf("newMatrix[%d][%d] %d\n",g,n,newMatrix[g][n]);
			} 
//			printf("\nchange\n");
		}
	}	
	
	printf("\n\nMultiplication Matrix\n\n");
	for(int u=0;u<rowA;u++)
	{
		printf("[");
		for(int p=0;p<columnB;p++)
		{
			printf(" %d ",newMatrix[u][p]);
		}
		printf("]\n");
	}
	
//	Deallocating Memory
	for(int i=0;i<rowA;i++)
	{
		free(ptrA[i]);
		ptrA[i] = NULL;
	}
	
	for(int j=0;j<rowB;j++)
	{
		free(ptrB[j]);
		ptrA[j] = NULL;
	}
	
	free(ptrA);
	free(ptrB);
	ptrA = NULL;
	ptrB = NULL;
	
	
	return 0;
}
