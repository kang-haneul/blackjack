
int printCardInitialStatus( ) //���Ƿ� �̹� ������ ī�带 �����ִ� �ܰ�
{
	int i;
	int n; 
	n=configUser ( );
	int num_player;
	int configuser [num_player+1];
	n= offerCards();
	
printf("--------CARD OFFERING---------");


if(configuser[0])
		printf("---server %c %s", 'X',n);
	
	
else if(configuser[1])
	printf(" ->you             : %s %s", n,n);
	
else if(configuser[2])
	printf(" ->you             : %s %s",n,n);
	
else if(configuser[3])
	printf(" ->you             : %s %s", n,n);
	
else if(configuser[4])
	printf(" ->you             : %s %s", n,n);
	
else if(configuser[5])
	printf(" ->you             : %s %s", n,n);
	


}

