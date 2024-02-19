//Array reversal exercise -->> print the array before and after of reversal
#include<stdio.h>

/*void Truearray(int arr[])
{
	int i;
	for(i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
	}
}*/
//Aliter
void Truearray(int* ptr)
{
	int i;
	for(i=0;i<=8;i++)
	{
		printf("%d ",*(ptr+i));
	}
}

/*void reversearray(int arr[])
{
    int i,j,c;
	for(i=0;i<=8;i++)
	{
		for(j=8-i;j>=0;j--)
		{
			//c = arr[i];
			arr[i] = arr[j];
			//arr[j] = c;
			printf("%d ",arr[i]);
		}
		break;
	}
}*/

void reversearray(int arr[])
{
    int i=0,j;
	for(j=8-i;j>=0;j--)
		{
			printf("%d ",arr[j]);
			i++;
		}
}

int main()
{
	int array[]={1,2,3,4,5,6,7,8,9};
	
	printf("the array before reversal :");
	Truearray(array);
	printf("\n");
	printf("the array after reversal :");
	reversearray(array);
	return 0;
}




//Alter

//#include <stdio.h>
//
//void reverseArr(int numArr[])
//{ 
//	int i;
//	for(i=0;i<((int)9/2);i++)
//	{
//		int temp;
//		temp = numArr[i];
//		numArr[i] = numArr[8-i];
//		numArr[8-i] = temp;
//	}
//	
//}
//
//int main()
//{
//	int array[] = {1,2,3,4,5,6,7,8,9};
//	int i;
//	
//	printf("Array before Swapping\n");
//	printf("[ ");
//	for(i=0;i<9;i++)
//	{
//		printf("%d ",array[i]);
//	}
//	printf("]\n");
//	
//	reverseArr(array);
//	
//	printf("Array after Swapping\n");
//	printf("[ ");
//	for(i=0;i<9;i++)
//	{
//		printf("%d ",array[i]);
//	}
//	printf("]");
//	
//	return 0;
//}






