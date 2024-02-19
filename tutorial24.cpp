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
		scanf(" %c",&input);
		
		switch(input)
		{
			case 'q':
				printf("exiting the program....");
				goto end;
				break;
				
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
