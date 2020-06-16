#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;
class Card
{
private:
	string rank;  // 數字
	string suit;  // 花色
	double point; //點數

public:
	Card();
	Card(const string &, const string &, const double &);
	~Card();

	string getRank();
	string getSuit();
	double getPoint();
};

#endif