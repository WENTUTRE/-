#ifndef player_H
#define player_H
#include "Card.h"
#include <string>
#include <vector>
using namespace std;

class player:public Card
{
private:
	string name;
	vector<int> deck;
	int amount;

public:
	player();
	player(string name);
	void setName(string);
	string getName();
	bool action();
	bool overflow();
	void compare(player);
	void display();
};
#endif
