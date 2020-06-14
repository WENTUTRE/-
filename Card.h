#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>
using namespace std;

class Card
{
private:
	string name;
	double point;
	vector<int> deck;
	int amount;

public:
	Card();
	Card(int index);
	void setPoint(double);
	void setCard(int);
	double getPoint();
	void getCard();
	int getAmount();
	void MyCard();
	void shuffle(vector<int> &deck);
	int drawCard(vector<int> &deck);
	
};
#endif
