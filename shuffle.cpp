```
#include <iostream>
#include <vector>
#include <ctime>
#include <string> 
using namespace std;
void drawcard(int *i)
{
	string suits[4] = { "梅花", "紅心", "方塊", "黑桃" };
	string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
vector<int> deck(52);


	for (int i = 0; i < 52; i++)
		deck[i] = i;


	srand(time(0));
	for (int i = 0; i < 52; i++)
	{
		int k = rand() % 52;
		int temp = deck[i];
		deck[i] = deck[k];
		deck[k] = temp;
	}
	char enter;
	double point1 = 0;
	
	cout << suits[deck[*i] / 13] << ranks[deck[*i] % 13] << endl;
	double point[13] = { 1,2,3,4,5,6,7,8,9,10,0.5,0.5,0.5};
	cout << point1 + point[deck[*i] % 13] << endl;
	*i+=1;
}

int main()
{
	int i = 0;
	drawcard(&i);
	
	drawcard(&i);
	system("pause");
	return 0;
}

```
