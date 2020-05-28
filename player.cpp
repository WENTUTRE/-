#include "Header.h"
#include <iostream>
using namespace std;

player::player()
{
	name = 1;
	point = 0;
}

player::player(string name, int point)
{
	this->name = name;
	this->point = point;
}

void player::setName(string name)
{
	this->name = name;
}

void player::setPoint(int point)
{
	this->point = point;
}

string player::getName()
{
	return name;
}

int player::getPoint()
{
	return point;
}

string player::action()
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

void player::compare(player player2)
{
	if (getPoint() > player2.getPoint())
		cout << "Win";
	else if (getPoint() <= player2.getPoint())
		cout << "Lose";
}
