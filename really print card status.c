/print initial card status
void printCardInitialStatus(void) {
	
}

int getAction(void) {
	int i;
	
	for( ; ; );
		{
			printf("Action? (0-go, others -stay)");
				i= getIntegerInput(void);
				if(i=0)
					break;
					
				else
					continue;
					
					
		}
		
		return 0;
}


void printUserCardStatus(int user, int cardcnt) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}



