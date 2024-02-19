#include<stdio.h>
#include<string.h>
struct Student harry,sharry,marry;
struct Student{
	int id;
	float marks;
	char name[20];
};

int main()
{
	
	harry.id=21;
	sharry.id=22;
	marry.id=23;
	harry.marks=52.63;
	sharry.marks=68.95;
	marry.marks=75.04;
	strcpy(harry.name,"harry kumar");
	strcpy(sharry.name,"sharry mann");
	strcpy(marry.name,"marry jyne");
	
	printf(" %s has Roll number %d scored %.2f marks in exam\n",harry.name,harry.id,harry.marks);
	printf(" %s has Roll number %d scored %.2f marks in exam\n",sharry.name,sharry.id,sharry.marks);
	printf(" %s has Roll number %d scored %.2f marks in exam\n",marry.name,marry.id,marry.marks);
	return 0;
}
