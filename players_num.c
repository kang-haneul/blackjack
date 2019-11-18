#include <stdio.h>
#include <stdlib.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30


int configuser (void);
{
	int num_player;
	
	printf("input the number of players (max5) : ");
	num_player=getIntegerInput( );
	
	if(num_player>N_MAX_USER)
		do
		{
			int num_player;
			printf("Too many players!\nInput the number of players (max 5) : ");
			num_player=getIntegerInput( );
			
		}while(num_player<=N_MAX_USER);
		
	else if(num_player<=N_MAX_USER)
		return num_player;
	
	
}



