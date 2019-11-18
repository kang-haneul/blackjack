#include <stdio.h>
#include <stdlib.h>


#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30



int main(void)
{
int betting_Dollar;
printf("-----BETTING STEP-----\n");

printf(" -> your betting (tatal:$50) : ");
scanf("%d",&betting_Dollar);

if(betting_Dollar>50)
	do
	{
		printf("you only have $50! Bet again\n-> your betting (tatal:$50) : ");
		scanf("%d",&betting_Dollar);
		
	}while(betting_Dollar<51);
	
else if (betting_Dollar<=50)
	return betting_Dollar;
	
}
