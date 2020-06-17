#include "Card.h"

Card::Card()
{
}
Card::Card(const string &suit, const string &rank, const double &point)
{
	this->suit = suit;
	this->rank = rank;
	this->point = point;
}
Card::~Card()
{
}
double Card::getPoint()
{
	return point;
}
string Card::getRank()
{
	return rank;
}
string Card::getSuit()
{
	return suit;
}