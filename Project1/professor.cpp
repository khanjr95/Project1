#include "professor.h"
using namespace std;


professor::professor()
{
}


professor::professor(std::string name) : _name(name)
{
}

professor::~professor()
{
}

std::string professor::getName()
{
	return _name;
}

std::string professor::getGrade()
{

	return std::string();
}
