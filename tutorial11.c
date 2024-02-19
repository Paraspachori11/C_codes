#include<stdio.h>

int main()
{
	int age,marks;
	
	printf("enter your age\n");
	scanf("%d",&age);
	
	printf("enter your marks\n");
	scanf("%d",&marks);
	
	switch (age){
		case 3:
			printf("your age is 3\n");
			switch (marks){
				case 45:
					printf("your marks are 45");
					default:
						printf("entered marks didn't matched with database");
			}
			break;
			
		case 13:
			printf("your age is 13");
			break;
		case 23:
			printf("your age is 23");
			break;
		default:
			printf("age is not confirmed in database");
	}
	return 0;
}
