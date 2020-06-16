#include "player.h"

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

player::player()
{
}

player::player(string name)
{
	this->name = name;
	cardCount = 0;
}

void player::setName(string name)
{
	this->name = name;
}

string player::getName() //得到名字
{
	return name;
}

bool player::overflow() //是否爆
{
	if ((getPoint() > 10.5))
		return 1;
	else
		return 0;
}

void player::printCard() //顯示得點與手牌
{
	cout << getName() << ":" << endl;
	for (int i = 0; i < cardCount; i++)
	{
		cout << i + 1 << ". " << setw(10) << hand[i].getSuit() << " " << hand[i].getRank() << endl;
	}
	cout << "Point: " << getPoint() << endl;
}

void player::drawCard(Card newCard) //抽牌
{
	hand[++cardCount] = newCard;
}

int player::getMoney() // 回傳剩餘的錢
{
}

double player::getPoint() // 回傳點數
{
	double point = 0;
	for (int i = 0; i < cardCount; i++)
		point += hand[i].getPoint();
	return point;
}