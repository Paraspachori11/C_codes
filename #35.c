#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="harry";
	char s2[]="ravi";
	char s3[54];
	
	//using strcat()
	puts(strcat(s1,s2));               // putting the addition of s1 and s2 into s1
	
	//using strlen()
	printf("Length of s1 string is %d\n",strlen(s1));
	printf("Length of s2 string is %d\n",strlen(s2));
	
	//using strrev()
	printf("Reverse of s1 string is : ");
	puts(strrev(s1));
	printf("Reverse of s2 string is : ");
	puts(strrev(s2));
	
	//using strcpy()
	
	//s3 = strcat(s1,s2);  //wrong way
	strcpy(s3,strcat(s1,s2));  //correct way
	puts(s3);
	
	//using strcmp()
	printf("the string comparison between s1&s2 is %d",strcmp(s1,s2));
	
	return 0;
	
}
