#include "Poker.h"
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

Poker::Poker()
{
    cardCount = 52;
}

void Poker::shuffle()
{
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        int swap1 = rand() % cardCount;
        int swap2 = rand() % cardCount;
        Card temp = deck[swap1];
        deck[swap1] = deck[swap2];
        deck[swap2] = temp;
    }
}
Card Poker::drawCard()
{
    return deck[cardCount--];
}