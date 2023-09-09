// Dhruv Gupta
// CPSC 1020
// 02/21/2023
// This program iwll contain the class Quiz which will have the question, answer and update the score.
#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>
#include <string>

// Create class called quiz
class Quiz
{
    friend std::string printResult(int questions, int correct, int wrong);
    // Declare private variables
    private:
    std::string question = "";
    std::string answer = "";
    static int score;
    // Declare public variables
    public:
    Quiz();
    // Member-list initialization
    Quiz(std::string q, std::string a) : question(q), answer(a) {};
    std::string getQuestion();
    std::string getAnswer();
    static int getScore();
    static void updateScore(int val);
};
#endif