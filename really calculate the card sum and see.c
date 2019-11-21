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
	
	

int checkResult() {
	int i;
	int num_player;
	num_player=configUser ();
	int gameend=0;
	
	printf("your result : ");
	for(i=0;i<num_player;i++)
		{	
		printf(" %d'th player's result : ",i+1);
		}

	return gameend++;
}











