
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	const int numGrades = 5;
	int grades[numGrades];

	//load array with grades from user
	for (int i = 0; i < numGrades; i++)
	{
		cout << "enter grade " << i + 1 << " ";
		int temp = 0;
		cin >> temp;
		if (temp >= 0 && temp <= 100)
		{
			grades[i] = temp;
		}
		else
		{
			cout << "\n\nOut of bounds!\n";
			exit(0);
		}
	}

	//find highest grade
	int highestGrade = grades[0];
	for (int i = 0; i < numGrades; i++)
	{
		if (highestGrade < grades[i])
			highestGrade = grades[i];
	}

	cout << " high grade: " << highestGrade;

	//find lowest grade
	int lowestGrade = grades[0];
	for (int i = 0; i < numGrades; i++)
	{
		if (lowestGrade > grades[i])
			lowestGrade = grades[i];
	}

	cout << " lowest grade: " << lowestGrade;
	
	//find average grade
	int averageGrade = 0;
	int totalOfAllGrades = 0;
	for (int i = 0; i < numGrades; i++)
	{
		totalOfAllGrades += grades[i];
	}
	
	averageGrade = (float)totalOfAllGrades / numGrades;
	cout << " average: " << averageGrade;

	//print out array
	cout << endl;
	for (int i = 0; i < numGrades; i++)
	{
		cout << grades[i] << " ";
	}

	//==============================

	vector<int> gradesV;
	int vNum = 0;
	cout << "\n\nenter number of grades: ";
	cin >> vNum;
	int tempV;
	cout << "\n";
	for (int i = 0; i < vNum; i++)
	{
		cout << " enter grade: ";
		cin >> tempV;
		gradesV.push_back(tempV);
	}

	//find lowest grade
	int lowestGrade2 = gradesV[0];
	for (int i = 0; i < vNum; i++)
	{
		if (lowestGrade2 > gradesV[i])
			lowestGrade2 = gradesV[i];
	}

	cout << " lowestest 2: " << lowestGrade2;

	cout << endl << endl;
    return 0;
}

