//Check whether a given number is palindrome or not

#include<stdio.h>
#include<string.h>

//int palindrome(int n)
//{
//	char str1[20],str2[20];
//	
////	To Type cast int to string
//	sprintf(str1,"%d",n);
//	
//	strrev(strcpy(str2,str1));
//	int res = strcmp(str1,str2);
//	printf("\nOriginal : %s\n",str1);
//	printf("Reverted : %s",str2);
//	if(strcmp(str1,str2) == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//Alter
int palindrome(int n)
{
	int orgNum = n;
	int revNum = 0;
	
	while(n!=0)
	{
		revNum = revNum*10 + n%10;
		n = n/10;
	}
	
	if(orgNum == revNum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	int num;
	printf("Enter Number :\t");
	scanf("%d",&num);
	
	if(palindrome(num))
	{
		printf("\nNumber is Palindrome");
	}
	else
	{
		printf("\nNumber is NOT Palindrome");
	}
	return 0;
}
