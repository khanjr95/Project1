#pragma once
#include <string>

class professor

{
private:
	std::string _name;
	std::string _grade;

public:
	professor();
	professor(std::string name);
	~professor();

	std::string getName();
	std::string getGrade();
};

