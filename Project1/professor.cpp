#include "professor.h"
#include "Person.h"
using namespace std;



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

