// allow user to enter two strings and then concatenate them by saying that
// str1 is a friend of str2
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[]=" is a friend of ";
	char str3[20];
	
	printf("enter the name of first friend \n");
	gets(str1);
	printf("enter the name of second friend \n");
	gets(str3);
	
	strcat(str1,str2);
	puts(strcat(str1,str3));
	return 0;
	
}

