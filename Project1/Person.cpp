#include "Person.h"
#include<iostream>
#include <string>
using namespace std;



Person::Person()
{
	int occ = 0;
}

void Person::setName(std::string _name)
{
	cout << "What is your name?:";
	cin >> _name;
}

void Person::setid(int _id)
{
	cout << "What is your 5 digit Id?";
	cin >> _id;
}

void Person::setOcc(int occ)
{
	
	cout << "Are you a Teacher?(1 for Yes/2 for No):";
	cin >> occ;
	if (occ == 1)
	{
		cout << "You are a Teacher and dont need a Grade.";
		
	}
	else if(occ==2)
	{
		cout << "You are a student and need a grade.";
		
	}
}

int Person::getOcc()
{
	return occ;
}


Person::~Person()
{
}
