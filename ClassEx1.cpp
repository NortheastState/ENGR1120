#include "stdafx.h"
#include "Grade.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<Grade> grades;

	Grade test1("quiz", 93);
	Grade test2("quiz", 67);
	Grade test3("test three", 100);

	grades.push_back(test1);
	grades.push_back(test2);
	grades.push_back(test3);
	
	for (int i = 0; i < grades.size(); i++)
	{
		if(grades[i].getName() == "quiz")
			cout << grades[i].getGrade() << endl;
	}
	
	cout << endl;
	return 0;
}
