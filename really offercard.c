int offerCards( );
{
	
	int mixCardTray(void) 
���Ƿ� player���� 2���� ī�带 �����Ѵ�. �� �������� 2���� �ִ� ���� �ƴ϶� �� ������ ���鼭 
ī�带 �������� ���� ����.
}





int printCardInitialStatus( ) //���Ƿ� �̹� ������ ī�带 �����ִ� �ܰ�
{
	int i;
	int n; 
	n = int configUser(void);
	
printf("--------CARD OFFERING---------");

printf(" ->server          : %c %c", �� �Լ����� ������ ī�� �����ֱ�. );
printf(" ->you             : %c %c", �� �Լ����� ������ ī�� �����ֱ�);


for(i=0;i<n;i++)
{
printf(" ->player %d        : %c %c",i+1, �� �Լ����� ������ ī�� �����ֱ�);

}

