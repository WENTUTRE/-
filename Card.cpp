#include "Card.h"

Card::Card()
{
}
Card::Card(string rank, string suit, double point)
{
	this->rank = rank;
	this->suit = suit;
	this->point = point;
}
Card::~Card()
{
}
