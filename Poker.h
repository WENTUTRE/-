#ifndef POKER_H
#define POKER_H

#include "Card.h"
#include <string>
#include <vector>
using namespace std;

class Poker
{
private:
    vector<Card> deck{
        Card("spades", "A", 1),
        Card("hearts", "A", 1),
        Card("diamonds", "A", 1),
        Card("clubs", "A", 1),
        Card("spades", "2", 1),
        Card("hearts", "2", 1),
        Card("diamonds", "2", 1),
        Card("clubs", "2", 1),
        Card("spades", "3", 1),
        Card("hearts", "3", 1),
        Card("diamonds", "3", 1),
        Card("clubs", "3", 1),
        Card("spades", "4", 1),
        Card("hearts", "4", 1),
        Card("diamonds", "4", 1),
        Card("clubs", "4", 1),
        Card("spades", "5", 1),
        Card("hearts", "5", 1),
        Card("diamonds", "5", 1),
        Card("clubs", "5", 1),
        Card("spades", "6", 1),
        Card("hearts", "6", 1),
        Card("diamonds", "6", 1),
        Card("clubs", "6", 1),
        Card("spades", "7", 1),
        Card("hearts", "7", 1),
        Card("diamonds", "7", 1),
        Card("clubs", "7", 1),
        Card("spades", "8", 1),
        Card("hearts", "8", 1),
        Card("diamonds", "8", 1),
        Card("clubs", "8", 1),
        Card("spades", "9", 1),
        Card("hearts", "9", 1),
        Card("diamonds", "9", 1),
        Card("clubs", "9", 1),
        Card("spades", "10", 1),
        Card("hearts", "10", 1),
        Card("diamonds", "10", 1),
        Card("clubs", "10", 1),
        Card("spades", "J", 0.5),
        Card("hearts", "J", 0.5),
        Card("diamonds", "J", 0.5),
        Card("clubs", "J", 0.5),
        Card("spades", "Q", 0.5),
        Card("hearts", "Q", 0.5),
        Card("diamonds", "Q", 0.5),
        Card("clubs", "Q", 0.5),
        Card("spades", "K", 0.5),
        Card("hearts", "K", 0.5),
        Card("diamonds", "K", 0.5),
        Card("clubs", "K", 0.5),
    };
    int cardCount = 52;

public:
    Poker();
    void shuffle();  // 洗牌
    Card drawCard(); // 抽牌
};
#endif
