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
        Card("spades", "2", 2),
        Card("hearts", "2", 2),
        Card("diamonds", "2", 2),
        Card("clubs", "2", 2),
        Card("spades", "3", 3),
        Card("hearts", "3", 3),
        Card("diamonds", "3", 3),
        Card("clubs", "3", 3),
        Card("spades", "4", 4),
        Card("hearts", "4", 4),
        Card("diamonds", "4", 4),
        Card("clubs", "4", 4),
        Card("spades", "5", 5),
        Card("hearts", "5", 5),
        Card("diamonds", "5", 5),
        Card("clubs", "5", 5),
        Card("spades", "6", 6),
        Card("hearts", "6", 6),
        Card("diamonds", "6", 6),
        Card("clubs", "6", 6),
        Card("spades", "7", 7),
        Card("hearts", "7", 7),
        Card("diamonds", "7", 7),
        Card("clubs", "7", 7),
        Card("spades", "8", 8),
        Card("hearts", "8", 8),
        Card("diamonds", "8", 8),
        Card("clubs", "8", 8),
        Card("spades", "9", 9),
        Card("hearts", "9", 9),
        Card("diamonds", "9", 9),
        Card("clubs", "9", 9),
        Card("spades", "10", 10),
        Card("hearts", "10", 10),
        Card("diamonds", "10", 10),
        Card("clubs", "10", 10),
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
    Card drawCard();       // 抽牌
    int getCardCount();    // 剩餘張數
    void resetCardCount(); // 重製牌堆
    void shuffle();        // 洗牌
};
#endif
