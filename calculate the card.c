

// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	if(ī�� ������ ���� 21�̴�.)
	{
		printf("     ::: Black Jack! Congratulation, you win!! ---> +$%d($%d)", ���ñݾ�*2,50-���ñݾ�+���ñݾ�*2);
	}

else if (ī�� ���� ���� 21 �ʰ���)
	{
		printf("     ::: DEAD (sum:%d) --> -$%d ($%d)",������ ī���� ���� ��, ���� �޷�, ���� �޷�);
	}

else if(ī�� ���� ���� 21���� �۴�.)
	{
		printf("     ::: Action? ( 0 -go, others - stay)   :  ");
		scanf("%d",&order);
		
		if(order==0)
		{

		 ī�� ���Ƿ� ���� �� �� ��
		�� ���ڸ� ���ϰ� 21���� �ƴ��� �ľ�
		21 �̸��̸� �� ���� �ٽ� �����
		21�̸� win �ϰ� �� 2��
		21�ʰ��̸� lose  -> scanf�� ������,

		}
		
		for(i=0;i<num_player;i++)
{
printf(" > > > player %i turn! ----------\n-> card : &C &C",i+1,���õ� ī�� ����);

	
	if(ī�� ������ ���� 21�̴�.)
		{
			printf("     ::: Black Jack! Congratulation, you win!! ---> +$%d($%d)", ���ñݾ�*2,50-���ñݾ�+���ñݾ�*2);
		}

	else if (ī�� ���� ���� 21 �ʰ���)
		{
			printf("     ::: DEAD (sum:%d) --> -$%d ($%d)",������ ī���� ���� ��, ���� �޷�, ���� �޷�);
		}

	else if(ī�� ���� ���� 21���� �۴�.)
		{
			printf("     ::: Action? ( 0 -go, others - stay)   :  ");
			scanf("%d",&order);
		
			if(order==0)
				{

					 ī�� ���Ƿ� ���� �� �� ��
					�� ���ڸ� ���ϰ� 21���� �ƴ��� �ľ�
					21 �̸��̸� �� ���� �ٽ� �����
					21�̸� win �ϰ� �� 2��
					21�ʰ��̸� lose  -> scanf�� ������,

				}
		



printf(" > > > server turn! -------------------\n-> card : &C &C",i+1,���õ� ī�� ����);
if(ī�� ������ ���� 21�̴�.)
		{
			printf("     ::: Black Jack! Congratulation, you win!! ---> +$%d($%d)", ���ñݾ�*2,50-���ñݾ�+���ñݾ�*2);
		}

	else if (ī�� ���� ���� 21 �ʰ���)
		{
			printf("     ::: DEAD (sum:%d) --> -$%d ($%d)",������ ī���� ���� ��, ���� �޷�, ���� �޷�);
		}

	else if(ī�� ���� ���� 21���� �۴�.)
		{
			printf("     ::: Action? ( 0 -go, others - stay)   :  ");
			scanf("%d",&order);
		
			if(order==0)
				{

					 ī�� ���Ƿ� ���� �� �� ��
					�� ���ڸ� ���ϰ� 21���� �ƴ��� �ľ�
					21 �̸��̸� �� ���� �ٽ� �����
					21�̸� win �ϰ� �� 2��
					21�ʰ��̸� lose  -> scanf�� ������,

				}
		
	
}

int checkResult() {
	
}

int checkWinner() {
	
}
