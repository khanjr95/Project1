#pragma once
#include <string>
#include "Person.h"

class professor:public Person

{
private:
	std::string _name;

public:
	professor(std::string name);
	~professor();

	std::string getName();
};

