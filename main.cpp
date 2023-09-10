#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {

  // 1. Create a deck of cards and shuffle it.
  Deck deckOfCards;
  deckOfCards.shuffle();
  // 2. Create two players, each one with 5 cards in their hand.
  Player computerHand(deckOfCards, 5);
  Player humanHand(deckOfCards, 5);
  // 3. Play five rounds. In each round:
  //    - Have computer deal a card from their hand.
  //    - Show human their hand of cards so that they can make a selection.
  //    - Have human deal their card. 
  //    - Determine who won the round and update points accordingly.
  //    - Print results for current round.
  int humanScore = 0;
  int computerScore = 0;
  for (int i = 1; i <= 5; i++)
  {
    Card tempCard = computerHand.hand.dealCard(1);
    cout << "The computer plays: " << tempCard.printCard() << endl;
    cout << "Your hand: " << humanHand.hand.printHand() << endl;
    int choice;
    cout << "Which card do you want to play? " << endl;
    cin >> choice;
    Card playercard = humanHand.hand.dealCard(choice);
    cout << "You played: " << playercard.printCard() << endl;
    if (tempCard.getValue() < playercard.getValue())
    {
      cout << "You win this round!" << endl << endl;
      humanScore = humanScore + tempCard.getValue() + playercard.getValue();
    } else if (tempCard.getValue() > playercard.getValue())
    {
      cout << "The computer wins this round!" << endl << endl;
      computerScore = computerScore + tempCard.getValue() + playercard.getValue();
    } else
    {
      cout << "Tie!" << endl;
    }
    cout << "Current scores:" << endl;
    cout << "Human: " << humanScore << endl;
    cout << "Computer: " << computerScore << endl;
  }
  // 4. Print final game results.  
  cout << "FINAL SCORE: " << endl;
  cout << "Human: " << humanScore << endl;
  cout << "Computer: " << computerScore << endl;
  if (humanScore < computerScore)
  {
    cout << "Computer has won!";
  } else if (computerScore < humanScore)
  {
    cout << "Human has won!";
  }

  
  return 0;
}