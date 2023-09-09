// Dhruv Gupta
// CPSC 1020
// 02/21/2023
// This program will implement the function to display the user's quiz results
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "printResult.h"
#include "Quiz.h"
// Implement the function
std::string printResult(int questions, int correct, int wrong)
{
    // Use stringstream for function
    std::stringstream result;
    result << "Number of questions: " << questions << std::endl
    << "Number correct answers: " << correct << std::endl
    << "Number wrong answers: " << wrong << std::endl;
    // Return the result
    return result.str();
}