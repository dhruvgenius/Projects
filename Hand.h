#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "Deck.h"
using namespace std;

class Hand
{
    // Private variable for hand class
    private:
    std::vector<Card> hand;
    // Public variables for hand class
    public:
    Hand();
    Hand(Deck &deck, int N);
    string printHand();
    Card dealCard(int num);
    int getHandSize();
};
#endif // HAND_H_
