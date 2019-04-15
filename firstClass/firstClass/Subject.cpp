#include "Subject.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void Subject::setCourse(char*  c)
{
	course = new char[strlen(c) + 1];
	#pragma warning(suppress : 4996)
	strcpy(course, c);
}



