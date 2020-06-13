#include "player.h"
#include <iostream>
using namespace std;

player::player()
{
	name = 1;
	point = 0;
	vector<int> deck(0);
	amount = 0;
}

player::player(string name)
{
	this->name = name;
	point = 0;
	vector<int> deck(0);
	amount = 0;
}

void player::setName(string name)
{
	this->name = name;
}

void player::setPoint(double point)
{
	this->point = point;
}

void player::setCard(int value)
{
	deck.push_back(value);
	amount++;
}

string player::getName()
{
	return name;
}

double player::getPoint()
{
	double total = 0;
	double point[13] = { 1,2,3,4,5,6,7,8,9,10,0.5,0.5,0.5 };
	for (int i = 0; i < amount; i++)
	{
		total += point[deck[i] % 13];
	}

	setPoint(total);

	return total;
}

void player::MyCard()
{
	string suits[4] = { "桃", "方", "菱", "梅" };
	string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

	for (int i = 0; i < amount; i++)
		cout << suits[deck[i] / 13] << ranks[deck[i] % 13] << endl;
}

/*string player::action()
{
	cout << "加牌?";

	string a;

	cin >> a;

	if (a == "Y")
		;
	else if (a == "N")
		;
	else
		cout << "";
}
*/
void player::compare(player player2)
{
	if (getPoint() > player2.getPoint())
		cout << "Win";
	else if (getPoint() <= player2.getPoint())
		cout << "Lose";
}

void player::display()
{
	cout << getPoint() << endl;
	MyCard();
}
