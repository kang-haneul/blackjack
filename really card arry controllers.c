//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {

int i;
int cardinformation;
int allCardNum=52;
int card[52];

for(i=0;i<52;i++);
	{
	cardinformation = 1+rand()%allCardNum;
	card[i]= printCard();
	}	
	
	return 0;
	
}

//get one card from the tray
int pullCard(void) {
}
