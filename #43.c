#include<stdio.h>
#include<string.h>

void parser(char* string)
{
	int inside=0;     //for telling to the compiler ki mai tag k andar toh nahi hu
	int index=0;
	int i;
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]=='<')
		{
			inside=1;
			continue;
		}
		else if(string[i]=='>')
		{
			inside=0;
			continue;
		}
		if(inside==0)
		{
			string[index]=string[i];
			index++;
		}
	}
	string[index]='\0';
	
	//removing white spaces
	while(string[0]==' ')
	{
		for(i=0;i<strlen(string);i++)
		{
			string[i]=string[i+1];
		}
	}
	
	while(string[strlen(string)-1]==' ')
	{
		string[strlen(string)-1]='\0';
	}
}

int main()
{
	char string[]="<h1>      This is the heading    <\h1>";
	parser(string);
	printf("[%s]",string);
	return 0;
}
