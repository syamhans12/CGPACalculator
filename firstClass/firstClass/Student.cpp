#include "Student.h"
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>

using namespace std;

void Student::setName(char *n)
{
	int length_name = strlen(n) + 1;
	name = new char[length_name];
	strcpy(name, n);
}

void Student::setMatricNUmber(char *m)
{
	int length_matric = strlen(m) + 1;
	name = new char[length_matric];
	strcpy(matric_number, m);
}

char Student::getName()
{
	return *name;
}

char Student::getMatricNumber()
{
	return *matric_number;
}