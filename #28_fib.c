#include<stdio.h>

//recursive approach
int fib_recursive(int n){
	if(n==1 || n==2){
		return n-1;
	}
	else{
		return fib_recursive(n-1)+fib_recursive(n-2);
	}
}

//iterative approach
int fib_iterative(int n){
	int a=0,i;
	int b=1;
	for(i=0;i<n-1;i++)
	{
		b=b+a;
	    a=b-a; // OR a=(a+b)-a  //to solve the problem of creating multiple variables
	}
	return a; // cause a contain kar rha hai last updated sum 
}


int main(){
	int num;
	printf("enter the index of fibonaci\n");
	scanf("%d",&num);
	printf("the value at index %d by recursive method is %d\n",num,fib_recursive(num));
	printf("the value at index %d by iterative method is %d",num,fib_iterative(num));
	return 0;
}


