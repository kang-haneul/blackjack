int configUser(void) {
	int num_player;
	int  N_MAX_USER	;
	
printf("input the number of players (max 5) : ");
scanf("%d",&num_player);

if(num_player > N_MAX_USER)
	do
	{
		printf("Too many players!\ninput the number of players (max 5) : ");
		scanf("%d",&num_player);
	}while(num_player > N_MAX_USER+1);
	
else if(num_player< N_MAX_USER	+1)
	return num_player;
}
