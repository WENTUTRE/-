#include "Poker.h"
#include <ctime>
#include <iostream>
#include <random>
using namespace std;

Poker::Poker()
{
    cardCount = 52;
}
Card Poker::drawCard() // 抽牌
{
    return deck[--cardCount];
}
int Poker::getCardCount() // 剩餘張數
{
    return cardCount;
}
void Poker::resetCardCount() // 重製牌堆
{
    cardCount = 52;
}
void Poker::shuffle() // 洗牌
{
    if (cardCount < 26) // 牌少於一半時重洗牌
        cardCount = 52;
    srand(time(0));
    for (int i = 0; i < 150; i++)
    {
        int swap1 = rand() % cardCount;
        int swap2 = rand() % cardCount;
        Card temp = deck[swap1];
        deck[swap1] = deck[swap2];
        deck[swap2] = temp;
    }
}
