/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Hello World
 * Description: This project uses a character data type
 *              to demonstrate the ASCII value equivalent
 *
 * ========================================================
 */

//include std library
#include <iostream>

//entry point for C++ programs
int main()
{
	//let's use some different C++ data types

	// A char type (character) is 8 bits, or one byte, wide
	// It is a primitive type meaning it is an integer.
	// The value of the integer is represented in the ASCII 
	// table as a decimal number. For example, a 32 is a space. 
	char middleInitial = 'A';

	//output the character, then concatenate a space using the insertion
	//operator, then output the integer value of the character, then endline.
	std::cout << middleInitial << " " << (int)middleInitial << std::endl;

	//return a zero to satisfy the return value in main()
	return 0;
}
