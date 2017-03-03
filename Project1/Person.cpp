#include "Person.h"
#include<iostream>
#include <string>
using namespace std;



Person::Person()
{
	int occ = 0;
	string name = " ";
}

void Person::setName(std::string name)
{
	cout << "What is your name?:";
	cin >> name;
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
		cout << "You are a Teacher and dont need a Grade." << endl;
		cin.clear();
		cin.ignore();
		cin.get();
		exit(0);
	}
	else if(occ==2)
	{
		cout << "You are a student and need a grade." << endl;
		
	}
}

int Person::getOcc()
{
	return occ;
}

string Person::getName()
{
	return name;
}


Person::~Person()
{
}
