```void drawCard(double *index)
{
	srand((unsigned)time(NULL));
	int k = rand() % 52 ;
	switch (k/13)
	{
		case 0:
			if(1 + k % 13==1)
				cout << "黑桃" << 'A';
			else if (1 + k % 13 == 11)
				cout << "黑桃" << 'J';
			else if (1 + k % 13 == 12)
				cout << "黑桃" << 'Q' ;
			else if (1 + k % 13 == 13)
				cout << "黑桃" << 'K' ;
			else
				cout << "黑桃" << 1 + k % 13 ;
			break;
		case 1:
			if (1 + k % 13 == 1)
				cout << "梅花" << 'A' ;
			else if (1 + k % 13 == 11)
				cout << "梅花" << 'J' ;
			else if (1 + k % 13 == 12)
				cout << "梅花" << 'Q' ;
			else if (1 + k % 13 == 13)
				cout << "梅花" << 'K' ;
			else
				cout << "梅花" << 1 + k % 13 ;
			break;
		case 2:
			if (1 + k % 13 == 1)
				cout << "紅心" << 'A' ;
			else if (1 + k % 13 == 11)
				cout << "紅心" << 'J' ;
			else if (1 + k % 13 == 12)
				cout << "紅心" << 'Q' ;
			else if (1 + k % 13 == 13)
				cout << "紅心" << 'K' ;
			else
				cout << "紅心" << 1 + k % 13 ;
			break;
		case 3:
			if (1 + k % 13 == 1)
				cout << "方塊" << 'A' ;
			else if (1 + k % 13 == 11)
				cout << "方塊" << 'J' ;
			else if (1 + k % 13 == 12)
				cout << "方塊" << 'Q' ;
			else if (1 + k % 13 == 13)
				cout << "方塊" << 'K' ;
			else
				cout << "方塊" << 1 + k % 13 ;
			break;
	}
	if (1 + k % 13 == 11|| 1 + k % 13 == 12|| 1 + k % 13 == 13)
		*index += 0.5;
	else	
		*index += 1 + k % 13;
}
```
##會抽到重複的
