#include "Student.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;


void Student::setName( char* n)
{
	name = new char[strlen(n) + 1];
	#pragma warning(suppress : 4996)
	strcpy(name, n);
}

void Student::setMatricnumber(char* m)
{
	matricnumber = new char[strlen(m) + 1];
	#pragma warning(suppress : 4996)
	strcpy(matricnumber, m);
}



