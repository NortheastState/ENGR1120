#include "stdafx.h"
#include "Grade.h"

Grade::Grade()
{
	this->gradeValue = 0;
}

Grade::Grade(string name, int gradeValue)
{
	this->name = name;
	this->gradeValue = gradeValue;
}

int Grade::getGrade()
{
	return this->gradeValue;
}

string Grade::getName()
{
	return this->name;
}

string Grade::toString()
{
	string tempStr = this->name + " " + to_string(this->gradeValue);
	return tempStr;
}
