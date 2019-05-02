#include "Subject.h"

#include<iostream>
#include<string>
#include<cstring>

using namespace std;







char * Subject::getGrade()
{
	return _grade;
}

int Subject::getCredithour()
{
	return _credithour;
}

float Subject::compare(char * _grade, int credhour)
{
	this->_grade = _grade;
	_credithour = credhour;

	if (this->_grade == "A+")
		this->eachsubj = 4.00*_credithour;
	cout << this->eachsubj;
	return this->eachsubj;
}
