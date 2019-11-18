

// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	if(카드 숫자의 합이 21이다.)
	{
		printf("     ::: Black Jack! Congratulation, you win!! ---> +$%d($%d)", 베팅금액*2,50-배팅금액+배팅금액*2);
	}

else if (카드 숫자 합이 21 초과다)
	{
		printf("     ::: DEAD (sum:%d) --> -$%d ($%d)",배정된 카드의 숫자 합, 잃은 달러, 보유 달러);
	}

else if(카드 숫자 합이 21보다 작다.)
	{
		printf("     ::: Action? ( 0 -go, others - stay)   :  ");
		scanf("%d",&order);
		
		if(order==0)
		{

		 카드 임의로 배팅 한 장 더
		그 숫자를 더하고 21인지 아닌지 파악
		21 미만이면 위 질문 다시 물어보기
		21이면 win 하고 돈 2배
		21초과이면 lose  -> scanf로 보여줘,

		}
		
		for(i=0;i<num_player;i++)
{
printf(" > > > player %i turn! ----------\n-> card : &C &C",i+1,배팅된 카드 숫자);

	
	if(카드 숫자의 합이 21이다.)
		{
			printf("     ::: Black Jack! Congratulation, you win!! ---> +$%d($%d)", 베팅금액*2,50-배팅금액+배팅금액*2);
		}

	else if (카드 숫자 합이 21 초과다)
		{
			printf("     ::: DEAD (sum:%d) --> -$%d ($%d)",배정된 카드의 숫자 합, 잃은 달러, 보유 달러);
		}

	else if(카드 숫자 합이 21보다 작다.)
		{
			printf("     ::: Action? ( 0 -go, others - stay)   :  ");
			scanf("%d",&order);
		
			if(order==0)
				{

					 카드 임의로 배팅 한 장 더
					그 숫자를 더하고 21인지 아닌지 파악
					21 미만이면 위 질문 다시 물어보기
					21이면 win 하고 돈 2배
					21초과이면 lose  -> scanf로 보여줘,

				}
		



printf(" > > > server turn! -------------------\n-> card : &C &C",i+1,배팅된 카드 숫자);
if(카드 숫자의 합이 21이다.)
		{
			printf("     ::: Black Jack! Congratulation, you win!! ---> +$%d($%d)", 베팅금액*2,50-배팅금액+배팅금액*2);
		}

	else if (카드 숫자 합이 21 초과다)
		{
			printf("     ::: DEAD (sum:%d) --> -$%d ($%d)",배정된 카드의 숫자 합, 잃은 달러, 보유 달러);
		}

	else if(카드 숫자 합이 21보다 작다.)
		{
			printf("     ::: Action? ( 0 -go, others - stay)   :  ");
			scanf("%d",&order);
		
			if(order==0)
				{

					 카드 임의로 배팅 한 장 더
					그 숫자를 더하고 21인지 아닌지 파악
					21 미만이면 위 질문 다시 물어보기
					21이면 win 하고 돈 2배
					21초과이면 lose  -> scanf로 보여줘,

				}
		
	
}

int checkResult() {
	
}

int checkWinner() {
	
}
