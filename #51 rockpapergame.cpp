/*create (rock[R], paper[P] or scissors[S])
	player 1: rock
	player 2(comp): scissors
		{whoever wins gets one point}
		
	conditions-:
		R v/s S -> R wins
		P v/s S -> S wins
		R v/s P -> P wins
	
	TASKs-:
		
	WAP to allow user to play this game three times with the computer.
	Log the scores of the player and computer .
	Display the name of the winner at the end.(take input from the user)
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//player 2(computer's turn generater)
int getnum()
{
	int r;
	srand(time(NULL));
	start: 
	r = rand()%3;
	if(r==0)
	{
		goto start;
	}
	else if(r==1||r==2||r==3)
	{
		return r;
	}
	return 0;
}

//Outcome decider
int decision(int a,int b)
{
	if(a==b)
	{
		printf("(Match Tie's)");
	}
	else if(a==1&&b==2)
	{
		printf("(Computer wins)");
	}
	else if(a==1&&b==3)
	{
		printf("(player 1 wins)");
	}
	else if(a==2&&b==1)
	{
		printf("(player 1 wins)");
	}
	else if(a==2&&b==3)
	{
		printf("(Computer wins)");
	}
	else if(a==3&&b==1)
	{
		printf("(Computer wins)");
	}
	else if(a==3&&b==2)
	{
		printf("(player 1 wins)");
	}
	return 0;
}

//score displayer
int scoreboard(int a,int b)
{
	extern int playerscore,computerscore;
	static int player,computer;
	if(a==b)
	{
		player=player;
		computer=computer;
	}
	else if(a==1&&b==2)
	{
		computer++;
	}
	else if(a==1&&b==3)
	{
		player++;
	}
	else if(a==2&&b==1)
	{
		player++;
	}
	else if(a==2&&b==3)
	{
		computer++;
	}
	else if(a==3&&b==1)
	{
		computer++;
	}
	else if(a==3&&b==2)
	{
		player++;
	}
	printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("CURRENT SCORE\n-------------\n\nPLAYER  1\t = (%d)\nPLAYER 2(COMP'S) = (%d)\n\n",player,computer);
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");
	
	//sending the final updated value to global variables
	playerscore=player;
	computerscore=computer;
	return 0;
}

int winner(int a,int b,char* name)
{
	printf("========================================================================\n");
	if(a==b)
	{
		printf("THERE IS DRAW\n");
	}
	else if(a>b)
	{
		printf("%s WIN'S\t\tCONGRATULATIONS!!!!\n",name);
	}
	else
	{
		printf("COMPUTER WIN'S\t\tYOU LOST\t\tBETTER LUCK NEXT TIME\n");
	}
	printf("========================================================================\n");
	return 0;
}

//creating the global variables (for storing the latest updated values by static variables) for using those values in another function(here, winner())
int playerscore,computerscore;

int main()
{
	//int playerscore,computerscore;
	//Taking input(of name) from the user
	char name[15];
	printf("HELLO USER :)\n\n");
	printf("                                                                                   WELCOME TO THE GAME OF {ROCK}<-->{PAPER}<-->{SCISSORS}\n\n");
	printf("PLEASE!! ENTER YOUR NAME\n");
	printf("========================\t");
	gets(name);
	
	int i=1;
	while(i<4) //while loop to run the program 3 times
	{
		int playerinput;
		printf("\nROUND %d\n",i);
		printf("=======\n");
		printf("\nPRESS \n1.To select ROCK\n2.To select PAPER\n3.To select SCISSOR\n\n");
		printf("-->>");
		scanf("%d",&playerinput);
		printf("\n\nPLAYER 1\n");
		printf("========");
		
		switch(playerinput)
		{
			case 1:
				{
					printf("\t\t\tYOU'VE SELECTED ROCK\n\n");
					break;
				}
			case 2:
				{
					printf("\t\t\tYOU'VE SELECTED PAPER\n\n");
					break;
				}
			case 3:
				{
					printf("\t\t\tYOU'VE SELECTED SCISSORS\n\n");
					break;
				}
			default:
				{
					printf("\t\t\tYOU'VE ENTERED THE WRONG INPUT\t");
					printf("KINDLY ENTER THE RIGHT INPUT\n\n");
				}		
		}
		
		//Computer's turn
		int computerinput;
		printf("PLAYER 2(COMP'S Turn):\n");
		printf("=====================");
		computerinput = getnum();
		
		switch(computerinput)
		{
			case 1:
				{
					printf("\t\tCOMP'S SELECTED ROCK\n\n");
					break;
				}
			case 2:
				{
					printf("\t\tCOMP'S SELECTED PAPER\n\n");
					break;
				}
			case 3:
				{
					printf("\t\tCOMP'S SELECTED SCISSORS\n\n");
					break;
				}
			default:
				{
					printf("\t\tCOMP'S ENTERED THE WRONG INPUT\t");
					printf("KINDLY ENTER THE RIGHT INPUT\n\n");
				}		
		}
		
		//winner decider function
		decision(playerinput,computerinput);
		//score displayer function
		scoreboard(playerinput,computerinput);
		
		i++;
	}
	
	//winner decider function
	winner(playerscore,computerscore,name);
	
	return 0;
}
