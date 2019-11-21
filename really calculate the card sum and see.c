#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	int figure[2];
	int card[2];
	int i;
	
	for(i=0;i<51;i++)
		figure[i]=card[i];
	
	
	if(card[0]+card[1]==21)
	{
		printf("     ::: Black Jack! Congratulation, you win!!");
	}

else if (card[0]+card[1]>21)
	{
		printf("     ::: DEAD");
	}

else if(card[0]+card[1]<21)
	{
		getAction ();
	}
	
	
}

int checkResult(void) {
	int i;
	int num_player;
	num_player=configUser();

	
	printf("your result : ");
	for(i=0;i<num_player;i++)
		{	
		printf(" %d'th player's result : ",i+1);
		}

	return 0;
}

int checkWinner(void) {
	
	
	printf("------------------------------\n------------------------------\n------------------------------");
	printf("game end! your money : $ ");
	printf(" other player's money : $ ");
	
	return 0;
}







