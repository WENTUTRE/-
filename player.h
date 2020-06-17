#ifndef player_H
#define player_H
#include "Card.h"
#include <string>
#include <vector>
using namespace std;

class Player : public Card
{
private:
	string name;
	vector<Card> hand{Card(), Card(), Card(), Card(), Card()};
	int cardCount = 0;
	int money = 1000;

public:
	Player();
	Player(string name);
	void drawCard(Card);  // 抽牌 + 顯示
	int getCardCount();	  // 回傳張數
	int getMoney();		  // 回傳剩餘金錢
	string getName();	  // 回傳姓名
	double getPoint();	  // 回傳點數
	void printCard();	  // 顯示手牌與點得
	void setName(string); // 設定姓名
	void setMoney(int);	  // 設定金錢
};
#endif
