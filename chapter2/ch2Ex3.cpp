/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Hello World
 * Description: This project uses integer data types
 *              
 *
 * ========================================================
 */

#include <iostream>

int main()
{
	// integers are usually 32 bits wide, or 4 bytes
	// 2 ^ 32 = 4294967296. Divided by 2 is 2147483648.
	// So an integer that is 32 bits wide can hold 
	// about plus and minus 2 billion.

	// create a new variable and initialize it to 
	// the max value an int will hole
	int milesFromTheSun = 2147483647;

	//now output to screen to verify it happened
	std::cout << std::endl << milesFromTheSun << std::endl;

	//increment the variable by one
	milesFromTheSun++;	

	//now output the variable and observe what happened 
	std::cout << std::endl << milesFromTheSun << std::endl;

	//satisfy the return value of main() function
	return 0; 
}
