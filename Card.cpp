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
