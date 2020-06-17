#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Poker.h"
using namespace std;

//*****************************************

int main()
{
	int draw, start;
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
	cout << endl;

	//-----------------------------------------------------------------

	while (start == 1)
	{
		pool.shuffle();
		Player p1(name);
		Player p2("Dealer");

		p1.drawCard(pool.drawCard());
		cout << endl;
		p2.drawCard(pool.drawCard());
		cout << endl;
		cout << "Keep draw or not?  (Enter 1 to draw one , 0 to pass)" << endl;
		cout << "Enter: ";
		cin >> draw;
		cout << endl;
		while (draw == 1) // 1繼續抽 0停止
		{
			cout << endl;
			p1.drawCard(pool.drawCard());
			cout << endl;
			if ((p1.getPoint() > 10.5) || (p1.getCardCount() == 5))
				goto END;
			cout << endl;
			cout << "Keep draw or not?  (Enter 1 to draw one , 0 to pass)" << endl;
			cout << "Enter: ";
			cin >> draw;
		}

		while ((p2.getPoint() < 7.0))
		{
			cout << endl;
			p2.drawCard(pool.drawCard());
			cout << endl;
			if ((p2.getPoint() > 10.5) || (p2.getCardCount() == 5))
				goto END;
		}
	END:
		if ((p1.getPoint() > 10.5) || (p2.getCardCount() == 5) || (p1.getPoint() < p2.getPoint())) // p2 win
		{
			cout << setw(35) << "Dealer WIN" << endl;
			cout << endl;
			p1.setMoney(-10);
			p2.setMoney(10);
		}
		else
		{
			cout << setw(35) << p1.getName() << " WIN" << endl;
			cout << endl;
			p1.setMoney(10);
			p2.setMoney(-10);

			cout << p1.getName() << ": " << p1.getMoney() << endl;
			cout << p2.getName() << ": " << p2.getMoney() << endl;
			cout << endl;
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
