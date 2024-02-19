
// 1)function code with arguments and with return value

/*#include<stdio.h>

int sum(int a,int b){
	return a+b;
};
int main(){
	int a,b,c;
	a=5;
	b=6;
	c=sum(a,b);
	printf("the sum is %d\n",c);
	return 0;
}*/

// 2)function code with arguments and without return value

/*#include<stdio.h>

void printstar(int n){
    int i;
	for(i=0;i<n;i++){
		printf("%c",'*');
	}
}
int main(){
	
	printstar(7);
	return 0;
}*/

// 3)function code without arguments and with return value

/*#include<stdio.h>

int takenumber(){
	int i;
	printf("enter the number");
	scanf("%d", &i);
	return i;
}
int main(){
    int c;
	takenumber();
	c=takenumber();
	printf("The Entered number is %d",c);
}*/

// 4)function code without arguments and without return value
//not sure | sahi hai ki nahi

#include<stdio.h>

void counting(){
	int i,n;
	printf("Enter the number from where the numbering wants to be initiated\n");
	scanf("%d",&i);
	printf("last number\n");
	scanf("%d",&n);
	
	while(i<n){
		if(i == n-1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d,",i);
		}
		i++;
	}
}

int main(){
	counting();
	return 0;
}
