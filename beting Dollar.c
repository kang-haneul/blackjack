#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int betting_Dollar;
printf("-----BETTING STEP-----\n");

printf(" -> your betting (tatal:$50) : ");
scanf("%d",&betting_Dollar);

if(betting_Dollar>50)
	do
	{
		printf("->you only have $50! Bet again\n-> your betting (tatal:$50) : ");
		scanf("%d",&betting_Dollar);
		
	}while(betting_Dollar<51);
	
else if (betting_Dollar<51)
	
	
	
}
