/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    2/1/2018
 *
 * ========================================================
 * Project: Foobar
 * Description: This project demonstrates how to use the math
 *              library tan function. There are many more
 *              functions in the math library that are easy
 *              to use. For reference, look at:
 *              cplusplus.com/reference/cmath/
 *
 *              We also see how to create a const variable
 *              type. This prevent the variable from being
 *              changed anywhere in the code at runtime.
 *
 * ========================================================
 */

// for cin, cout, fixed
#include <iostream>

// for setprecision
#include <iomanip>

// for tan
#include <math.h>

using namespace std;

//entry point for all C++ programs
int main()
{
    // declare and define local variables
    const double PI = 3.14159265;
    double degrees = 45.0, results = 0.0;

    // convert 45 degrees to radians and pass to the tan function
    results = tan(degrees * PI / 180.0);

    // output the results to 4 decimal places
    cout << fixed << setprecision(4) << "The tangent of " << degrees << " is: " << results;

    return 0;
}

