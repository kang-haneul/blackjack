#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void)
{
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
