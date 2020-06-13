#ifndef player_H
#define player_H

#include <string>
#include <vector>
using namespace std;

class player
{
private:
	string name;
	double point;
	vector<int> deck;
	int amount;

public:
	player();
	player(string);
	void setName(string);
	void setPoint(double);
	void setCard(int);
	string getName();
	double getPoint();
	void MyCard();
	bool action();
	bool overflow();
	void compare(player);
	void display();
};
#endif
