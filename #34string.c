//STRINGS IN C

#include<stdio.h>

void printstr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
}

int main()
{
	//Ways of inserting direct values
/*	
	//WAY 1
	char str[]={'h','a','r','r','y','\0'};
	printstr(str);
*/	

/*
	//WAY 2
	char str[]="paras";      //str[size] ,if taken <6 in this case will generate wrong printation
	printstr(str);
*/

	//WAY of taking input from the user
	char str[34];
	gets(str);                    //it will also consider white spaces
	
//NOTE --> we also have the format of scanf for inserting string input, but it doesn't allow white spaces
	
	//WAYS OF printing 
	
	//1
	printstr(str);
	printf("\n");
	
	//2
	printf("%s\n",str);
	
	//3
	puts(str);
	return 0;
	
}
