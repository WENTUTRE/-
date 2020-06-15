#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;
class Card
{
private:
    string rank;
    string suit;
    double point;

public:
    Card();
    Card(string, string, double);
    ~Card();
};

#endif