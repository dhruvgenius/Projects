#include "Deck.h"
#include <vector>
using namespace std;
// Default constructor
Deck::Deck()
{
    for (int i = 1; i <= 10; i++)
    {
        deck.push_back(Card(i,Card::Color::purple));
    }
    for (int i = 1; i <= 10; i++)
    {
        deck.push_back(Card(i,Card::Color::orange));
    }
}
// Shuffle the deck
void Deck::shuffle()
{
    srand(unsigned(time(0)));
    std::random_shuffle(deck.begin(), deck.end());
}
// Draw a card
Card Deck::drawCard()
{
    Card card = deck.front();
    deck.erase(deck.begin());
    return card;
}
// Getter function
int Deck::getDeckSize()
{
    return deck.size();
}