#include<stdio.h>
int main()
{
	int a = 8;
    float b = 7.333;
    printf("%.4f\n",b);
    printf("%0.4f\n",b);
	printf("%10.4f\n",b);
	printf("%2.4f\n",b);
	printf("%6.4f\n",b);
	printf("%7.4f\n",b);
	printf("%-18.4f\n",b);
	return (0);
}
