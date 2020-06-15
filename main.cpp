#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include "player.h"
#include "Card.h"
using namespace std;

int main()
{
	vector<int> deck(52);
	string name;

	for (int i = 0; i < 52; i++)
		deck[i] = i;

	cout << "Your player name is?.......";
	cin >> name;
	player p1(name);
	player p2("莊家");
	p1.drawcard(deck);
	p2.setCard(p1._Card(deck));
	p1.setCard(p1._Card(deck));
	p1.display();
	for (int i = 0; i < 4; i++) //second~
	{
		p2.setCard(p1._Card(deck));
		p2.getPoint();
		p2.getCard();

		if (p1.action())
		{
			p1.setCard(p1._Card(deck));
			p1.display();
		}
		else
			continue;

		if (p1.overflow())
			break;
		if (p2.overflow())
			break;
	}
	if (p1.overflow())
	{
		cout << p1.getName() << " lose." << endl;
		p2.display();
	}
	else if (p2.overflow())
	{
		cout << p2.getName() << " lose." << endl;
		p2.display();
	}
	else
		p1.compare(p2);

	system("pause");
	return 0;
}
