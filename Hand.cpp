#include "Hand.h"
#include <sstream>
using namespace std;
// Default constructor
Hand::Hand() = default;
// Constructor
Hand::Hand(Deck &deck, int N)
{
    for (int i = 0; i < N; i++)
    {
        hand.push_back(deck.drawCard());
    }
}
// Implementation of print hand
string Hand::printHand()
{
    stringstream cards;
    int hsize = hand.size();
    for (int i = 1; i <= hsize; i++)
    {
        cards << "[" << to_string(i) << "]" << " " << hand[i-1].printCard() << " ";
    }
    return cards.str();
}
// Implementation of deal card
Card Hand::dealCard(int num)
{
    Card card = hand[num-1];
    hand.erase(hand.begin() + (num-1));
    return card;
}
// Getter function
int Hand::getHandSize()
{
    return hand.size();
}