#ifndef player_H
#define player_H
#include "Card.h"
#include <string>
#include <vector>
using namespace std;

class player : public Card
{
private:
	string name;
	vector<Card> hand{Card(), Card(), Card(), Card(), Card()};
	int cardCount;

public:
	player();
	player(string name);
	void setName(string);
	string getName();	 // 回傳姓名
	bool overflow();	 // 檢查是否爆牌
	void drawCard(Card); // 抽卡
	void printCard();	 // 印牌
	int getMoney();		 // 回傳剩餘的錢
	double getPoint();	 // 回傳點數
};
#endif
