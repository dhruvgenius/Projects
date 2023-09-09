// Dhruv Gupta
// CPSC 1020
// 02/21/2023
// This program will contain the main function and have the actual game.
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>
#include "Quiz.h"
#include "printResult.h"

int main(int argc, char *argv[])
{
    // Set variables to 0
    int questions = 0;
    int correct = 0;
    int wrong = 0;
    // Random function time assignment
    srand(unsigned(time(0)));
    // Create vector and strings for question and answer
    std::vector<Quiz> quizVector;
    std::string q, a;
    std::ifstream file(argv[1]);
    // Get the file
    if (file.is_open())
    {
        while (getline(file, q) && getline(file, a))
        {
            // Remove first three characters
            q.erase(0, 3);
            a.erase(0, 3);
            Quiz Quiz(q, a);
            quizVector.push_back(Quiz);
        }
        file.close();
    }
    else 
    {
        std::cout << "Unable to open file" << std::endl;
    }
    // Randomly shuffle questions for quiz
    std::random_shuffle (quizVector.begin(), quizVector.end());
    int userScore = 0;
    // For loop for the quiz
    for (std::vector<Quiz>::size_type i = 0; i < quizVector.size(); i++)
    {
        Quiz playerQuiz = quizVector[i];
        // Get the question for the quiz
        std::cout << playerQuiz.getQuestion() << std::endl;
        std::string answer;
        // Prompt user for answer
        std::cout << "Type in your answer: ";
        getline(std::cin, answer);
        std::string correctAnswer = playerQuiz.getAnswer();
        answer.erase(remove_if(answer.begin(), answer.end(), ::isspace), answer.end());
        correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), ::isspace), correctAnswer.end());
        // If statement for validating correct answer
        if (answer == correctAnswer)
        {
            userScore = Quiz::getScore();
            std::cout << "Correct!" << std::endl;
            // Increment correct by 1
            correct++;
            // Increment number of questions by 1
            questions++;
            // Update score by 1 for correct answer
            Quiz::updateScore(1);
            // Print out current score
            std::cout << "Current score: " << playerQuiz.getScore() << std::endl;
        } else
        {
            userScore = Quiz::getScore();
            // If answer is not equal to answer in file, tell user answer is wrong and display the correct answer
            std::cout << "Wrong! Correct answer: " << playerQuiz.getAnswer() << std::endl;
            // Increment wrong by 1
            wrong++;
            // Increment number of questions by 1
            questions++;
            // Decrease score by 1
            Quiz::updateScore(-1);
            // Display score to user
            std::cout << "Current score: " << userScore << std::endl;
        }
    }
    // Call the printResult function
    std::cout << printResult(questions, correct, wrong) << std::endl;
    std::cout << "Final score: " << userScore;
    return 0;
}