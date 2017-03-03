#include <iostream>
#include "Grade.h"
#include "Person.h"
#include "Honors.h"
#include <string>

using namespace std;


int main()
{
	string name = "";
	int id = 0;
	int occ = 0;
	char a = ' ';
	Person person1;
	person1.setName(name);
	person1.setid(id);
	person1.setOcc(occ);


	int grade = 0;
	Grade gradeBook1;

	gradeBook1.setTestOne(grade);
	gradeBook1.setTestTwo(grade);
	gradeBook1.setMidterm(grade);
	gradeBook1.setfinal(grade);
	cout << "Your final grade out of 100 is:" << gradeBook1.getFinalGrade() << endl;
	cout << "And your Letter Grade is:" << gradeBook1.getLetter() << endl;
	
	a = gradeBook1.getLetter();
	
	//cout << a << endl;
	
	person1.setHonors(a);
	person1.getHonors(a);

	


	cin.clear();
	cin.ignore();
	cin.get();


	return 0;
}