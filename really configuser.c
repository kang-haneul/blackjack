int configUser(void) {
	int num_player;

printf("input the number of players (max 5) : ");
scanf("%d",&num_player);

if(num_player>max_user)
	do
	{
		printf("Too many players!\ninput the number of players (max 5) : ");
		scanf("%d",&num_player);
	}while(num_player<max_user+1);
	
else if(num_player<max_user+1)
	return num_player;
}
