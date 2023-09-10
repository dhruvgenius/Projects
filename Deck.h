#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Card.h"

class Deck
{
    // Private variables for deck class
    private:
    std::vector<Card> deck;
    // Public variables for deck class
    public:
    Deck();
    void shuffle();
    Card drawCard();
    int getDeckSize();
};
  

#endif
