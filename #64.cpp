//File I/Os

#include<stdio.h>

int main()
{
	char strStore[25];
	FILE *ptr = NULL;
	
	ptr = fopen("file.txt","r");
	for(int i=0;i<5;i++)
	{
		fscanf(ptr,"%s",strStore);
		printf("%s",strStore);
		printf(" ");
	}
	fclose(ptr);
	return 0;
}
