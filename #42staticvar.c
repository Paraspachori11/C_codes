#include<stdio.h>

void func()
{
	static int currentval = 35;
	printf("%d",currentval);
	currentval++;
}

int main()
{
	func();
	func();
	func();
	return 0;
}
