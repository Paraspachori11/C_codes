//Eucledian Distance Measure to calculate Area of circle

#include<stdio.h>
#include<math.h>

float EucDist(int x1,int y1,int x2,int y2)
{
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

float AreaOfCircle(float (*Eucptr) (int,int,int,int),int x1,int y1,int x2,int y2)
{
	float radius = (*Eucptr)(x1,y1,x2,y2);
	return (3.14 * radius * radius);
}

int main()
{
	int x1=0,x2=0,y1=0,y2=0;
	
	printf("Enter First Coordinates\n");
	printf("========================\n");
	printf("Abcissa : ");
	scanf("%d",&x1);
	printf("Ordinate : ");
	scanf("%d",&y1);
	
	printf("\nEnter Second Coordinates\n");
	printf("========================\n");
	printf("Abcissa : ");
	scanf("%d",&x2);
	printf("Ordinate : ");
	scanf("%d",&y2);
	
	float (*Eptr) (int,int,int,int);
	Eptr = EucDist;
	
	float area = AreaOfCircle(Eptr,x1,y1,x2,y2);
	
	printf("\n============================\n");
	printf("Area Of Circle is : %.2f Sq.\n",area);
	printf("============================\n");
	
	return 0;
}
