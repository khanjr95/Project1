#pragma once
#include <string>

class Honors
{
private:
	char grade;
	char a;
public:
	Honors();
	Honors(char a);
	void setHonors(char grade);
	char getHonors(char a);
	/*char getHonors();*/
	~Honors();
};

