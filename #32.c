// passing arrays as arguments in function
   // 2ways 
   // -> By making array as parameter ,we can pass array (WAY 1)
   // -> By passing array's address(initial) ,using pointer variable (WAY 2)

/*
//                                        (WAY 1)
#include<stdio.h>

int func1(int array[]) // NOTE
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("At index %d value %d\n",i,array[i]);
	}
	array[0]= 54; // if you'll change any value here , it gets reflected in main()
	return 0;
}

int main()
{
	int arr[]={1,2,33,43};
	printf("the value at index 0 is %d\n",arr[0]);
	func1(arr); // NOTE
	printf("the value at index 0 is %d\n",arr[0]);
	return 0;
}
*/

// NOTE -> jab maine array ko pass kiya (in line 25) , toh woh copy banke pass nahi hoti ,bulki (for line 10 ) pointers mai convert ho jaate hain

//                                         (WAY 2)
#include<stdio.h>

void func2(int* ptr)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("At index %d value %d\n",i,*(ptr+i));
	}
	*(ptr+2)=77;
}
int main()
{
	int arr[]={45,85,65,76};
	func2(arr);
	func2(arr);
}
