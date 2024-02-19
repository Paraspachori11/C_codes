#include<stdio.h>

//Function to swap arr[i] with arr[8-i]
void arrayrev(int arr[])
{
	int i,temp;
	
	for(i=0;i<9/2;i++)
	{
		temp=arr[i];
	    arr[i]=arr[8-i];
	    arr[8-i]=temp;
	}
}

//function to print array
void printarray(int arr[])
{

    int i;
	for(i=0;i<9;i++)
	{
		printf("[%d]\t",arr[i]);
	}
}

int main()
{
	int i;
	int array[]={1,2,3,4,5,6,7,8,9};
	
	printf("Array before reversel\n");
	printarray(array);
	printf("\n");
	
	printf("Array after reversal\n");
	arrayrev(array);
	printarray(array);
	
	return 0;
}
