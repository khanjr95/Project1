#include "Grade.h"
#include <iostream>
using namespace std;


Grade::Grade()
{
	int firstTest = 0;
	int secondTest = 0;
	int midterm = 0;
	int finalScore = 0;
	int finalGrade = 0;
	char finalLetter = ' ';
}

void Grade::setTestOne(int grade)
{
	cout << "Enter your score out of 100 for the first test:";
	cin >> firstTest;
}

void Grade::setTestTwo(int grade)
{
	cout << "Enter your score out of 100 for the first test:";
	cin >> secondTest;
}

void Grade::setMidterm(int grade)
{
	cout << "Enter your score out of 100 for the first test:";
	cin >> midterm;
}

void Grade::setfinal(int grade)
{
	cout << "Enter your score out of 100 for the Final:";
	cin >> finalScore;
}

int Grade::getTestOne()
{
	return firstTest;
}

int Grade::getTestTwo()
{
	return secondTest;
}

int Grade::getMidterm()
{
	return midterm;
}

int Grade::getFinal()
{
	return finalScore;
}

int Grade::getFinalGrade()
{
	finalGrade = (firstTest + secondTest + midterm + finalScore)/4;
	return finalGrade;
}

char Grade::getLetter()
{
	if (finalGrade >= 90)
	{
		letterGrade = 'A';
	}
	else if (finalGrade >= 80 && finalGrade < 90)
	{
		letterGrade = 'B';
	}
	else if (finalGrade >= 70 && finalGrade < 80)
	{
		letterGrade = 'C';
	}
	else if (finalGrade >= 60 && finalGrade < 70)
	{
		letterGrade = 'D';
	}
	else if (finalGrade < 60)
	{
		letterGrade = 'F';
	}
	return letterGrade;
}


Grade::~Grade()
{
}

