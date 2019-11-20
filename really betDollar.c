int betDollar (void)
{


int betting_Dollar;

printf("-----BETTING STEP-----\n");

printf(" -> your betting (tatal:$50) : ");
betting_Dollar = getIntegerInput;

if(betting_Dollar>N_DOLLAR+1)
	do
	{
		printf("you only have $50! Bet again\n-> your betting (tatal:$50) : ");
		scanf("%d",&betting_Dollar);
		
	}while(betting_Dollar<N_DOLLAR+1);
	
else if (betting_Dollar<N_DOLLAR+1)
	return betting_Dollar;
	
}
