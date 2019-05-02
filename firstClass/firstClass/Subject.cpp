#include "Subject.h"

#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<string.h>

using namespace std;

char * Subject::getGrade()
{
	return _grade;
}

int Subject::getCredithour()
{
	return _credithour;
}

void Subject::setInfo(char * grade, int credhour)
{
	_grade = grade;
	_credithour = credhour;
}


