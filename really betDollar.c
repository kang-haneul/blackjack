int betDollar (void)
{
int betting_Dollar;
int i;
int otherplayers_bettingmoney=0;

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

for(i=1;i<num_player=1;i++)	
	{
	  otherplayers_bettingmoney=1+rand()%N_MAX_BET;
	printf("-> player %d bets $%d (out of $50): ",i,otherplayers_bettingmoney);
	
return 0;

}
