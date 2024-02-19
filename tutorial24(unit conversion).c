 #include<stdio.h>

int main()
{
	char input;
	float kmsTomiles = 0.621371;
	float inchesTofoot = 0.833333;
	float cmsToinches = 0.393701;
	float poundTokgs = 0.453592;
	float inchesTometers = 0.0254;
	float first,second;
	
	while (1)
	{
		printf("Enter the input\n    q. to quit\n    1. kmsTomiles\n    2. inchesTofoot\n    3. cmsTo inches\n    4. poundTokgs\n    5. inchesTometers\n");
		scanf(" %c",&input); //ek problem create ho rahi thi jisse bachne k liye %c k aage ' ' ek character space dena zaroori hai . so that hamara new line OR spaces scanf consder na kare
		
		switch(input)
		{
			case 'q':
				printf("exiting the program....");
				goto end;
				
			case '1':
				printf("Enter the value in kms\n");
				scanf("%f",&first);
				second = first * kmsTomiles;
				printf("%f kms is equals to %f miles\n", first, second);
				break;
			case '2':
				printf("Enter the value in inches\n");
				scanf("%f",&first);
				second = first * inchesTofoot;
				printf("%f inches equals %f foots\n",first,second);
				break;
			case '3':
				printf("Enter the value in cms\n");
				scanf("%f",&first);
				second = first * cmsToinches;
				printf("%f cms equals to %f inches",first,second);
				break;
			case '4':
				printf("Enter the value in pounds\n");
				scanf("%f",&first);
				second = first * poundTokgs;
				printf("%f pounds equals to %f kgs\n",first,second);
				break;
			case '5':
				printf("Enter the value in inches\n");
				scanf("%f",&first);
				second = first * inchesTometers;
				printf("%f inches equals to %f meters\n",first,second);
				break;
			default :
			printf("operation at the entered input isn't unavailable\n");
			break;	
				
		}
		
	}
	end:
	return 0;
}

//alter

/*
#include <stdio.h>

float getConValue(int opt){
	float returnVal;
	switch(opt)
	{
		case 1:
			returnVal = 0.621;
			break;
		case 2:
			returnVal = 0.0833;
			break;
		case 3:
			returnVal = 0.393701;
			break;
		case 4:
			returnVal = 0.453592;
			break;
		case 5:
			returnVal = 0.0254;
			break;
		default:
			break;
	}
	return returnVal;
}

float generateOutput(float input,float conversionFactor)
{
	return input * conversionFactor;
}

int main()
{
	int option;
	float userInput;
	printf("WELCOME TO THE UNIT CONVERTER\n\n");
	start:
	printf("\nSelect\n"
	"1. Km to miles\n"
	"2. inches to foot\n"
	"3. cms to inches\n"
	"4. pound to kgs\n"
	"5. inches to meters\n");
	
	scanf("%d", &option);
	
	if(option == 1 ||option == 2 ||option == 3 ||option == 4 ||option == 5)
	{
		float conversionValue;
		float Output;
		printf("Valid Option\n\n");
		conversionValue = getConValue(option);
		printf("Enter User Input \n");
		scanf("%f",&userInput);
		Output = generateOutput(userInput,conversionValue);
		printf("\n\nGenerated Output = %f", Output);
		goto start;
	}
	else
	{
		printf("InValid Option\n\n");
		goto start;
	}
	return 0;
}*/
