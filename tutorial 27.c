/*#include<stdio.h>

int main()
{
	int a=32;
	int* ptra=&a;
	printf("%d\n",ptra);
	printf("%d\n",ptra+1);
	printf("%d\n",ptra+2);
	
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	char a='3';
	char* ptra=&a;
	printf("%d\n",ptra);
	printf("%d\n",ptra+1);
	printf("%d\n",ptra+2);
	
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	char a='3';
	char* ptra=&a;
	printf("%p\n",ptra);
	ptra++;// pointer k andar stored a k address ka increament according to size of char
	printf("%p\n",ptra);
	printf("%p",ptra-2);
	return 0;
}*/

#include<stdio.h>

int main()
{
	int arr[] = {5,8,3,9};
	//int* arrayptr = arr;//first go to line number 61
	printf("The value at second index is %d\n",arr[1]);
	printf("Address of first index of array %d\n",arr);// & lagane ki zaroorat nahi padti sirf iss case mai
    printf("Address of first index of array %d\n",&arr[0]);
	printf("Address of second index of array %d\n",arr+1);
	printf("Address of second index of array %d\n",&arr[1]);
	
	printf("Value at first index of array %d\n",*(arr));
    printf("Value at first index of array %d\n",*(&arr[0]));
    printf("Value at first index of array %d\n",arr[0]);
	printf("Value at second index of array %d\n",*(arr+1));
	printf("Value at second index of array %d\n",*(&arr[1]));
	printf("Value at second index of array %d\n",arr[1]);
	
	//arr++;//this line will generate error because arr is constant and contains base address of 0th index or arr--
	
	//arrayptr++;//yeh main kar sakta hun
	return 0;
}
