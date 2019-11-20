int configUser(void) {
	int num_player;

printf("input the number of players (max 5) : ");
scanf("%d",&num_player);

if(num_player>6)
	do
	{
		printf("Too many players!\ninput the number of players (max 5) : ");
		scanf("%d",&num_player);
	}while(num_player<6);
	
else if(num_player<6)
	return num_player;
}
