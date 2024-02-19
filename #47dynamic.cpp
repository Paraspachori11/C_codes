#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int* ptr;
	int n,i;
	
	//use of malloc()
	/*printf("Enter the size of array you want to create\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int)); //this will create an array of size int of n blocks
	
	for(i=0;i<n;i++)
	{
		printf("Enter the value for %d location\n",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("value at index %d is %d\n",i,ptr[i]);
	}*/
	
	
	//use of calloc()
	
	printf("Enter the size of array you want to create\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter the value for %d location\n",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("value at index %d is %d\n",i,ptr[i]);
	}
	
	//use of realloc()
	
	printf("Enter the new size of array(updated) you want to create\n");
	scanf("%d",&n);
	ptr=(int*)realloc(ptr,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter the value for %d location\n",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("value at index %d is %d\n",i,ptr[i]);
	}
	
	//use of free()
	free(ptr);
	
	return 0;
}
