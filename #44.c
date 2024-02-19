/* you manage a travel agency and you want your (n=3) drivers to input their following details:
1. name
2. driving license number
3. route
4. kms(driven)

you program should be able to take (n=3) as input and your your drivers will start inputing their details one-by-one 

(using structure)
*/

#include<stdio.h>

struct driver{
	char name[20];
	char dlno[20];
	char route[20];
	int kms;
};

int main()
{
	struct driver d1,d2,d3;
	
	//Driver 1
	printf("Enter the Details of driver 1\n");
	
	printf("Enter the name\n");
	scanf("%s",&d1.name);
	
	printf("Enter the driving license number\n");
	scanf("%s",&d1.dlno);
	
	printf("Enter the route\n");
	scanf("%s",&d1.route);
	
	printf("Vehicle Driven(in kms)\n");
	scanf("%d",&d1.kms);
	
	//Driver 2
	printf("Enter the Details of driver 2\n");
	
	printf("Enter the name\n");
	scanf("%s",&d2.name);
	
	printf("Enter the driving license number\n");
	scanf("%s",&d2.dlno);
	
	printf("Enter the route\n");
	scanf("%s",&d2.route);
	
	printf("Vehicle Driven(in kms)\n");
	scanf("%d",&d2.kms);
	
	//Driver 3
	printf("Enter the Details of driver 3\n");
	
	printf("Enter the name\n");
	scanf("%s",&d3.name);
	
	printf("Enter the driving license number\n");
	scanf("%s",&d3.dlno);
	
	printf("Enter the route\n");
	scanf("%s",&d3.route);
	
	printf("Vehicle Driven(in kms)\n");
	scanf("%d",&d3.kms);
	
//*****************printing details****************

printf("***********************************printing details*********************************\n");

printf("Details of driver 1\n");
printf("\tName                   ---> %s\n",d1.name);
printf("\tDriving license number ---> %s\n",d1.dlno);
printf("\tRoute                  ---> %s\n",d1.route);
printf("\tVehicle Driven(in kms) ---> %d\n",d1.kms);

printf("Details of driver 2\n");
printf("\tName                   ---> %s\n",d2.name);
printf("\tDriving license number ---> %s\n",d2.dlno);
printf("\tRoute                  ---> %s\n",d2.route);
printf("\tVehicle Driven(in kms) ---> %d\n",d2.kms);

printf("Details of driver 3\n");
printf("\tName                   ---> %s\n",d3.name);
printf("\tDriving license number ---> %s\n",d3.dlno);
printf("\tRoute                  ---> %s\n",d3.route);
printf("\tVehicle Driven(in kms) ---> %d\n",d3.kms);

return 0;
}
