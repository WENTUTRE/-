#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include "Player.h"
#include "Poker.h"
using namespace std;

//*****************************************

int main()
{
	bool draw, start;
	Poker pool;
	string name;

	cout << "Welcome to Ten&Half game." << endl;
	cout << "Your player name is?......." << endl;
	cout << "Name: ";
	cin >> name;
	cout << endl;
	cout << "Ready to start the game?  (Enter 1 to Start , 0 to exit)" << endl;
	cout << "Enter: ";
	cin >> start;
	cout << '\n'
		 << '\n';

	//-----------------------------------------------------------------

	while (start)
	{
		pool.shuffle();
		Player p1(name);
		Player p2("Dealer");

		p1.drawCard(pool.drawCard());
		p2.drawCard(pool.drawCard());

		cout << "Keep draw or not?  (Enter 1 to draw one , 0 to pass)" << endl;
		cin >> draw;
		while (draw) // 1繼續抽 0停止
		{
			p1.drawCard(pool.drawCard());
			cout << endl;
			if ((p1.getPoint() > 10.5) || (p1.getCardCount() == 5))
				goto END;
			cout << "Keep draw or not?  (Enter 1 to draw one , 0 to pass)" << endl;
			cout << "Enter: ";
			cin >> draw;
			cout << endl;
		}

		while ((p2.getPoint() < 6) && p1.getPoint() < 10.5)
		{
			p2.drawCard(pool.drawCard());
			cout << endl;
			if ((p2.getPoint() > 10.5) || (p2.getCardCount() == 5))
				goto END;
		}
	END:
		if ((p1.getPoint() > 10.5) || (p2.getCardCount() == 5) || (p1.getPoint() < p2.getPoint())) // p2 win
		{
			cout << "Dealer WIN" << endl;
			p1.setMoney(-10);
			p2.setMoney(10);
		}
		else
		{
			cout << p1.getName() << " WIN" << endl;
			p1.setMoney(10);
			p2.setMoney(-10);
		}

		cout << "Ready to start the game again?  (Enter 1 to Start , 0 to exit)" << endl;
		cout << "Enter: ";
		cin >> start;
		cout << '\n'
			 << '\n';
	}

	//-----------------------------------------------------------------

	return 0;
}
