#include "Subject.h"
#include<iostream>
#include<string>
#include<cstring>


using namespace std;

void Subject::setCourse(char*  c)
{

}
char * Subject::getCourse() {return course;}

void Subject::setSemester(int s) {semester = s;}
int Subject::getSemester() { return semester; }

void Subject::setSubject(char* subs)
{
	subject = new char[strlen(subs) + 1];
	#pragma warning(suppress : 4996)
	strcpy(subject, subs);
}
char* Subject::getSubject() { return subject; }

void Subject::checkInfo(char* c)
{
	int i = 0;
	while (i != 1)
	{
		if (course == "SCSR" || "scsr" ||
			"SCSV" || "scsv" ||
			"SCSJ" || "scsj" ||
			"SCSP" || "scsp" ||
			"SCSB" || "scsb")
		{
			course = new char[strlen(c) + 1];
			#pragma warning(suppress : 4996)
			strcpy(course, c);
			i = 1;
		}

		else
			cout << "Wrong course entered!" << endl;
	}

}



