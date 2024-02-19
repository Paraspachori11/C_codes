/*take input from the user 
to choose - 
   0 for triangular star pattern
   1 for reversed triangular star pattern
   
   and print the pattern accordingly*/
   
/* 
   *                      ****
   **                     ***
   ***                    **
   ****                   *
   (triangular pattern)    (reversed triangular pattern)
*/
 
#include<stdio.h>
int main()
{
	int i,j,n;
	char select;
	
	while(1){
	printf("Select 0/1 to print the triangular/reversed triangular star pattern respectively\n press 'e' to exit the program\n");
	scanf(" %c",&select);
	
	switch(select){
			
			case 'e':
				printf("Program exited \nThankyou for using the program");
			    goto end;
	        
			case '0':
				printf("Enter the length\n");
			    scanf("%d",&n);
		    	for(i=1;i<=n;i++){
		    		for(j=1;j<=i;j++){
		    			printf("*");
					}
					printf("\n");
				}
				break;
	        
			case'1':
		    {
			    printf("Enter the lenghth\n");
			    scanf("%d",&n);
			    for(i=1;i<=n;i++){
			    	for(j=n;j>=i;j--){
			    		printf("*");
					}
					printf("\n");
				}
				break;
	     	}
	        default:
	     	{
	    		printf("You've entered the wrong selection \n Please!!! enter the correct selection input\n");
		    }
	}
}
end:
	return 0;
}


//Alter

//#include <stdio.h>
//
//int main()
//{
//	int opt,size;
//	printf("PRINT STAR PATTERN\n");
//	printf("Press \n 1) For upper Triangular pattern \n 2) For lower Triangular pattern \n");
//	
//	while(1)
//	{
//		scanf("%d", &opt);
//		if(opt == 1)
//		{
//			printf("UPPER TRIANGULAR PATTERN\n");
//			break;
//		}
//		else if(opt == 2)
//		{
//			printf("LOWER TRIANGULAR PATTERN\n");
//			break;
//		}
//		else
//		{
//			printf("INVALID INPUT\n");
//		}
//	}
//	
//	printf("\nEnter Size\n");
//	scanf("%d",&size);
//	
//	int i,j;
//	
//	switch(opt)
//	{
//		case 1:
//			{
//				for(i = 1;i <= size;i++)
//				{
//					for(j = 1;j<=i;j++)
//					{
//						printf("*");
//					}
//					printf("\n");
//				}
//				break;			
//			}
//			
//		case 2:
//			{
//				for(i=1;i<=size;i++)
//				{
//					for(j=size+1-i;j>0;j--)
//					{
//						printf("*");
//					}
//					printf("\n");
//				}
//				break;
//			}
//			
//		default:
//			break;
//	}
//	return 0;
//}
