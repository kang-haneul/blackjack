int offerCards( );
{
임의로 player에게 2장의 카드를 배정한다. 단 연속으로 2장을 주는 것이 아니라 한 바퀴씩 돌면서 
카드를 배정함을 잊지 말자.
}





int printCardInitialStatus( ) //임의로 이미 배정된 카드를 보여주는 단계
{
printf("--------CARD OFFERING---------");

printf(" ->server          : %c %c", 앞 함수에서 배정된 카드 보여주기. );
printf(" ->you             : %c %c", 앞 함수에서 배정된 카드 보여주기);


for(i=0;i<num_player;i++)
{
printf(" ->player %d        : %c %c",i+1, 앞 함수에서 배정된 카드 보여주기);

}

