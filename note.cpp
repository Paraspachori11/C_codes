#include<stdio.h>

int function(int n,int *money)
{
	int Q;
	Q = *money/n;
	*money = *money%n;
	return Q;
}

int main()
{
	int money;
	//value insert
	printf("Input amount: ");
	scanf("%d",&money);
	
	printf("\n\nTotal number of notes:\n");
	printf("======================\n");
	if(money>=0)
	{
		printf("500 : %d\n",function(500,&money));
		if(money<500)
		{
			printf("200 : %d\n",function(200,&money));
			if(money<200)
			{
				printf("100 : %d\n",function(100,&money));
				if(money<100)
				{
					printf("50 : %d\n",function(50,&money));
					if(money<50)
					{
						printf("20 : %d\n",function(20,&money));
						if(money<20)
						{
							printf("10 : %d\n",function(10,&money));
							if(money<10)
							{
								printf("5 : %d\n",function(5,&money));
								if(money<5)
								{
									printf("2 : %d\n",function(2,&money));
									if(money<2)
									printf("1 : %d\n",function(1,&money));
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
