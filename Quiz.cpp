// Dhruv Gupta
// CPSC 1020
// 02/21/2023
// This programm will actually implement the class and use a constructor
#include <iostream>
#include <string>
#include "Quiz.h"

// Set score to 0
int Quiz::score = 0;
// Declare default constructor
Quiz::Quiz()
{
    question = "";
    answer = "";
}
// Implement getter functions
std::string Quiz::getQuestion()
{
    return question;
}
std::string Quiz::getAnswer()
{
    return answer;
}
int Quiz::getScore()
{
    return score;
}
// Add value to score and validation for score
void Quiz::updateScore(int val)
{
    score += val;
    if (score < 0)
    {
        score = 0;
    }
}