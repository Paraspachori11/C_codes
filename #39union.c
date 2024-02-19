#include<stdio.h>
#include<string.h>

union student{
		int id;
		float marks;
		char fav_char;
		char name[34];
    } s1;

int main()
{
	s1.id=0905201120;         //agar 0 ke baad 9 ya 8 put karoge toh ,octal error aayega
	s1.marks=73.5;
	s1.fav_char='x';
	strcpy(s1.name,"PARAS");
	
	//in all of the below 4 cases , they have the common shared storage of highest size {34 bites}
	//so at the the end final update value would appear true
	//& rest will display garbage value
	printf("The roll number is %d\n",s1.id);
	printf("The marks are %.2f\n",s1.marks);
	printf("The favourite character is %c\n",s1.fav_char);
	printf("The name is %s\n",s1.name);
	
	return 0;
	
}
