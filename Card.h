#ifndef CARD_H_
#define CARD_H_

#include <string>
using namespace std;
class Card
{
    // Public enumerated variable for card class
    public:
    enum Color {purple, orange};
    // Private variables for card class
    private:
    int rank = 0;
    Color color = purple;
    int value = 0;
    // Public variables for card class
    public:
    Card();
    Card(int rank, Color color);
    string printCard();
    int getRank();
    Color getColor();
    int getValue();
};
  

#endif // CARD_H_
