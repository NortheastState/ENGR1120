/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Foobar
 * Description: This project asks the user for three grades.
 *  It will then process those three grades finding their
 *  average. Then it will output the average of those three
 *  grades to the console window, rounding to two decimal
 *  point precision.
 * ========================================================
 */

// include required library to output strings to console
#include <iostream>
#include <iomanip>

// bring the standard namespace in so it is
// no longer necessary to resolve the namespace using
// the scope resolution operator ::
using namespace std;

// entry point for all C++ programs
int main()
{
    // declare all local variable
    int firstGrade = 0;
    int secondGrade = 0;
    int thirdGrade = 0;
    float averageGrade = 0.0;

    // output a header for the project to the user
    cout << endl << "\t==============================================" << endl;
    cout << "\tWelcome to the grade averaging program that will" << endl;
    cout << "\task you for three grades, average those grades, and" << endl;
    cout << "\toutput the average to the console with decimal points" << endl;
    cout << "\tof precision";
    cout << "\t=====================================================" << endl;

    cout << "\n\tPlease enter 3 integer test grades seperated by a space." << endl;
    cout << "\t";

    // get three grades from user
    cin >> firstGrade >> secondGrade >> thirdGrade;

    // turn on output for fixed decimal points
    // and precision to two decimal points
    // fixed is in standard library and
    // setprecision is in iomanip library
    cout << fixed << setprecision(2);

    // find average of three grades
    // and divide by 3.0 to force floating point division
    averageGrade = (firstGrade + secondGrade + thirdGrade) / 3.0;

    //output average grade
    cout << "\n\tGrade average: " << averageGrade;

    // stop execution
    getchar();

    // satisfy the int return value for main() function
    return 0;
}


