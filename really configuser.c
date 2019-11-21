#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int configUser(void) {
	int num_player;
	int  N_MAX_USER	;
	int n_user;
	int n;
	
	printf("input the number of players (max 5) : ");
	n=getIntegerInput();

	if(num_player > N_MAX_USER)
		do
		{
			printf("Too many players!\n");
			return -1;
		
		}while(num_player > N_MAX_USER+1);
	
	else if(num_player< N_MAX_USER	+1)
		n_user = num_player;
		return n_user;
}
