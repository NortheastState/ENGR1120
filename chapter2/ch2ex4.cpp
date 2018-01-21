/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Average two numbers
 * Description: This project show how to prompt the user for
 *              information and then process that information
 *              then output the results back to the user.
 *              It does no error checking for invalid user
 *              input. That will come later.
 *
 * ========================================================
 */

//include required library to output strings to console
#include <iostream>

int main()
{
    //define two local string variables
    std::string fName = "";
    std::string lName = "";

    //define two local floating point variables
    float num1 = 0.0;
    float num2 = 0.0;

    //prompt for first name and last name
    std::cout << "Please enter your name (first last): ";
    //get both first and last name. They must be seperated by a space
    std::cin >> fName >> lName;

    //prompt user with their name
    std::cout << "Thanks: " << fName << " " << lName;

    //prompt for two numbers - can be floating point or integers
    std::cout << "Now please enter two numbers two average (e.g. 5.1 10.5): ";
    //get both from input
    std::cin >> num1 >> num2;

    //output the average
    std::cout << "The average of those two number is: " << (num1 + num2)/2.0;

    return 0;
}
