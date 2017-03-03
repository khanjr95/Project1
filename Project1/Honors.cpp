#include "Honors.h"
#include <iostream>
using namespace std;



Honors::Honors()
{
	
}
Honors::Honors(char a)
{
	a = a;
}
void Honors::setHonors(char a)
{
	/*if (a = 'A')
	{
		cout<< "Because of your excellent grades, you are being"<<
		 " put in an honors class!";
	}
	else if (a='B')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}
	else if(a='D')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}
	else if (a = 'F')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}*/
}

char Honors::getHonors(char a)
{
	if (a == 'A')
	{
		cout << "Because of your excellent grades, you are being" <<
			" put in an honors class!";
		return 0;
	}
	else if (a == 'B')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}
	else if (a == 'C')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}
	else if (a == 'D')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}
	else if (a == 'F')
	{
		cout << "You did not meet requirments to be in the Honors Program" << endl;
	}
}

//char Honors::getHonors()
//{
//	
//}



Honors::~Honors()
{
}
