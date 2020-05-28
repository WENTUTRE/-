#include "Player.h"
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

void player::setName(string)
{
	this->name = name;
}

void player::setPoint(int)
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
	cout << "";

	string a;

	cin >> a;

	if (a == "Y")
		;
	else if (a == "N")
		;
	else
		cout << "";
}
