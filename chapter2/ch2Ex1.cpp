/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Foobar
 * Description: This project is another simple example of how
 *              to output information to the console window
 *
 * ========================================================
 */

//include required library to output strings to console
#include <iostream>

//entry point for all C++ programs
int main()
{
	//output an endline character
	std::cout << std::endl;

	//create two local string variables
	std::string message1 = "Foo";
	std::string message2 = "Bar";

	//concatenate strings to the console window
	std::cout << message1 << message2 << std::endl;

	//satisfy the int return value for main() function
	return 0;
}
