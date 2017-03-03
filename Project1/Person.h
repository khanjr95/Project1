#pragma once
#include <string>

class Person
{
private:
	int occ;
	std::string name;
public:
	Person();
	void setName(std::string name);
	void setid(int id);
	void setOcc(int occ);

	int getOcc();
	std::string getName();


	~Person();
};

