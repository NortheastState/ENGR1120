/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Hello World
 * Description: This project is a simple example of how
 *              to output information to the console window
 *
 * ========================================================
 */

// Preprocessor Directive - include the functionality to 
// output information to the console window
#include <iostream>

// The main() is the entry point for all C++ applications
int main()
{

    // std is the namespace (container) where cout function lives
    // endl add an endline character the the output
    std::cout << "Hello, World!" << std::endl;

    // the main() function returns an int, so this is to satisfy
    // that requirement
    return 0;

}
