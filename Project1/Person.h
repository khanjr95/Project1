#pragma once
#include <string>

class Person
{
private:
	int occ;
public:
	Person();
	void setName(std::string _name);
	void setid(int id);
	void setOcc(int occ);

	int getOcc();


	~Person();
};

