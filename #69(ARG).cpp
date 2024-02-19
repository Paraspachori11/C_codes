//Automated Receipt Generator

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * replaceWord(const char * str, const char * oldWord, const char * newWord)
{
	char * updatedString;
	int i,count = 0;
	int oldWordLen = strlen(oldWord);
	int newWordLen = strlen(newWord);
	
	for(i=0;str[i] !='\0';i++)
	{
		
		if(strstr(&str[i],oldWord) == &str[i])
		{
//			printf("%s\n",strstr(&str[i],oldWord));
//			printf("%s\n",&str[i]);
//			printf("%d\n\n",strstr(&str[i],oldWord) == &str[i]);
			count++;
			
//			Word Jump
			i += oldWordLen - 1;
		}
	}
	
//	Array Memory Extension for replaced words
	updatedString = (char *)malloc(strlen(str) + count * (newWordLen - oldWordLen) + 1);
	
	i = 0;
	while(*str)
	{
		if(strstr(str,oldWord) == str)
		{
			strcpy(&updatedString[i],newWord);
			i += newWordLen;
			str += oldWordLen;
		}
		else
		{
			updatedString[i] = *str;
			i = i+1;
			str = str+1;
		}
	}
	
	updatedString[i] = '\0';
	return updatedString;
}

int main()
{
 	char str[200];
	
	FILE * bill_Temp_ptr = NULL;
	bill_Temp_ptr = fopen("BillTemplate.txt","r");
	
	FILE * receipt_Temp_ptr = NULL;
	receipt_Temp_ptr = fopen("ReceiptTemplate.txt","w");
	
//	READING FILE CONTENT
	printf("Before-:\n\n");
	fgets(str,200,bill_Temp_ptr);
	printf("%s",str);
	
//	Replacer
	char * updStr;
	updStr = replaceWord(str,"{{name}}","Harry");
	updStr = replaceWord(updStr,"{{item}}","RedBull");
	updStr = replaceWord(updStr,"{{outlet}}","XYZ Store");
	
	printf("After-:\n\n");
	printf("%s",updStr);
 
// WRITING FILE CONTENT
// 	fputs(updStr,receipt_Temp_ptr);
 	fprintf(receipt_Temp_ptr,"%s",updStr);
 	
 	fclose(bill_Temp_ptr);
 	fclose(receipt_Temp_ptr);
 	return 0;
 }
