#pragma once
#include <string>
#include <iostream>
using namespace std;

class Grade
{
private:
	string name;
	int gradeValue;

public:
	Grade(); //constructor
	Grade(string, int);
	int getGrade();
	string getName();
	string toString();
};