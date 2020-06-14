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
	void setName(string);
	void setPoint(double);
	void setCard(int);
	string getName();
	double getPoint();
	void getCard();
	int getAmount();
	void MyCard();
	void display();
	void drawcard(vector<int> &deck);


	int _Card(vector<int> &deck);
	
};
#endif
