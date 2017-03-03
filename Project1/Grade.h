#pragma once
#include "Honors.h"

class Grade: public Honors
{
private:
	int firstTest;
	int secondTest;
	int midterm;
	int finalScore;
	int finalGrade;
	char letterGrade;
public:
	Grade();
	int getTestOne();
	int getTestTwo();
	int getMidterm();
	int getFinal();
	int getFinalGrade();
	char getLetter();

	void setTestOne(int grade);
	void setTestTwo(int grade);
	void setMidterm(int grade);
	void setfinal(int grade);


	~Grade();
};