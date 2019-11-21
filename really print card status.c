//print initial card status


int getAction(void) {
	int i;
	
	for( ; ; );
		{
			printf("Action? (0-go, others -stay)");
				i= getIntegerInput( );
				if(i=0)
					return -1;
					
				else
					return 1;
					
					
		}
		
		return 0;
}






