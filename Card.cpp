#include "Card.h"
#include <string>
using namespace std;
// Default constructor
Card::Card()
{
    rank = 0;
    color = purple;
    value = 0;
}
// Constructor
Card::Card(int rank, Color color)
{
    this->rank = rank;
    this->color = color;
    if (color == orange)
    {
        value = rank * 2;
    } else{
        value = rank;
    }
}
// Implementation for print card
std::string Card::printCard()
{
    string color_str;
    if (color == orange)
    {
        color_str = "orange";
    } else{
        color_str = "purple";
    }
    return color_str + ":" + std::to_string(rank);
}
// Getter functions
int Card::getRank()
{
    return rank;
}
Card::Color Card::getColor()
{
    return color;
}
int Card::getValue()
{
    return value;
}