
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

	for (int i = 0; i < 1023; i++)
	{
		lastCharInArray = i;
		if (chars[i] == '\0')
			break;

		cout << charArray[i];
	}

	cout << endl;

	//==================================

	//find all the vowels
	for (int i = 0; i < 1023; i++)
	{
		
	}

	int stop;
	cin >> stop;
	return 0;
}

