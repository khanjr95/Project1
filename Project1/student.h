#pragma once
#include <string>


class student
{
private:
	std::string name;
	int studentId;
	


public:
	student();
	std::string getName();
	int getId();

	~student();

};

