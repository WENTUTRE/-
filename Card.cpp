#include "Card.h"
#include <iostream>
#include <time.h>
using namespace std;

Card::Card()
{
	vector<int> deck(0);
	amount = 0;
}

Card::Card(int index)
{
	vector<int> deck(index);
	
}

void Card::setName(string name)
{
	this->name = name;
}

void Card::setPoint(double point)//分數
{
	this->point = point;
}

void Card::setCard(int value)//拿牌
{
	deck.push_back(value);
	amount++;
}

string Card::getName()
{
	return name;
}

double Card::getPoint()//得到分數
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

void Card::getCard()//顯示莊家拿到的排
{
	string suits[4] = { "黑桃", "方塊", "菱形", "梅花" };
	string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

	cout << "莊家:" << endl;
	
	cout << suits[deck[amount - 1] / 13] << ranks[deck[amount - 1] % 13] << endl;
	cout << "---------" << endl;
}

void Card::MyCard()//顯示玩家拿到的排
{
	string suits[4] = { "黑桃", "方塊", "菱形", "梅花" };
	string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

	for (int i = 0; i < amount; i++)
		cout << suits[deck[i] / 13] << ranks[deck[i] % 13] << endl;
	cout << "---------" << endl;
	
}

int Card::getAmount() //我們手上得排數
{
	return amount;
}



void Card::display()
{
	cout << getName() << ":" << endl;
	cout << getPoint() << endl;
	MyCard();
}
void Card::drawcard(vector<int> &deck)
{

	srand((unsigned)time(NULL));
	for (int i = 0; i < 52; i++)
	{
		int k = rand() % 52;
		int temp = deck[i];
		deck[i] = deck[k];
		deck[k] = temp;
	}
	
}
int num = 0;
int Card::_Card(vector<int> &deck)
{
	int a = deck[num];
	num++;
	return a;
}
