
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string chars;
	char charArray[1024];
	cout << "enter some text: ";
	getline(cin, chars);
	strcpy_s(charArray, chars.c_str());
	int lastCharInArray = 0;
	int aCounter = 0;
	int eCounter = 0;
	int iCounter = 0;
	int oCounter = 0;
	int uCounter = 0;

	for (int i = 0; i < 1024; i++)
	{
		lastCharInArray = i;
		if (chars[i] == '\0')
			break;

		cout << charArray[i];
	}

	cout << endl;

	//==================================

	//find all the vowels
	for (int i = 0; i < lastCharInArray; i++)
	{
		char tempChar = charArray[i];
		tempChar = tolower(tempChar);
		if (tempChar == 'a')
			aCounter++;
		else if(tempChar == 'e')
			eCounter++;
		else if (tempChar == 'i')
			iCounter++;
		else if (tempChar == 'o')
			oCounter++;
		else if (tempChar == 'u')
			uCounter++;
	}

	cout << endl << "A's: " << aCounter;
	cout << endl << "E's: " << eCounter;
	cout << endl << "I's: " << iCounter;
	cout << endl << "O's: " << oCounter;
	cout << endl << "U's: " << uCounter;

	int stop;
	cin >> stop;
	return 0;
}

