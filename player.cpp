#include "Player.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

Player::Player()
{
}
Player::Player(string name)
{
	this->name = name;
	cardCount = 0;
}
void Player::drawCard(Card newCard) // 抽牌 + 顯示
{
	hand[cardCount++] = newCard;
	(*this).printCard();
}
int Player::getCardCount()          // 回傳張數
{
	return cardCount;
}
int Player::getMoney()              // 回傳剩餘的錢
{
}
string Player::getName()            // 回傳姓名
{
	return name;
}
double Player::getPoint()           // 回傳點數
{
	double point = 0;
	for (int i = 0; i < cardCount; i++)
		point += hand[i].getPoint();
	return point;
}
void Player::printCard()            // 顯示手牌與點得
{
	cout << getName() << ":" << endl;
	for (int i = 0; i < cardCount; i++)
	{
		cout << i + 1 << ". " << setw(9) << hand[i].getSuit() << " " << hand[i].getRank() << endl;
	}
	cout << "Point: " << getPoint() << endl;
}
void Player::setName(string name)   // 設定姓名
{
	this->name = name;
}
void Player::setMoney(int)             // 設定金錢
{

}