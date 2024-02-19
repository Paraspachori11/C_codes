#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=1;
	//char a,b;  //(extra) just for uderstanding about getchar()
	while(i<4)
	{
		char*ptr;
		int n;
		printf("Employee %d\n",i);
		//asking for size of dynamic memory allocation
		printf("Enter no of characters in your Employee ID\n");
		scanf("%d",&n);
		//getchar();
		//(extra)  At some places scanf will behave strangely ,like skipping the user inputs
		// so to solve such problems getchar() function would be used
		
		/*
		printf("Enter the character a\n");
		scanf("%c",&a);
		getchar();
		printf("Enter the character b\n");
		scanf("%c",&b);
		*/
		
		//Dynamicaly memory allocation
		ptr=(char*)malloc((n+1)*sizeof(char)); // (n+1) is used cause string acquires+1 size to store null character too.
		//taking input as a string
		printf("Enter the employee ID\n");
		scanf("%s",ptr);
		//displaying empolyee id
		printf("Your Employee ID is %s\n",ptr);
		//releasing the Dynamically allocated memory after use
		free(ptr);
		i++;
	}
	return 0;
}
