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
char * Subject::getCourse() {return course;}

void Subject::setSemester(int s) {semester = s;}
int Subject::getSemester() {return semester;}

void Subject::printSCSRsem1() { cout << "hai"; }
void Subject::printSCSRsem2() {}
void Subject::printSCSRsem3() {}
void Subject::printSCSRsem4() {}
void Subject::printSCSRsem5() {}
void Subject::printSCSRsem6() {}
void Subject::printSCSRsem7() {}
void Subject::printSCSRsem8() {}

void Subject::printSCSVsem1() {}
void Subject::printSCSVsem2() {}
void Subject::printSCSVsem3() {}
void Subject::printSCSVsem4() {}
void Subject::printSCSVsem5() {}
void Subject::printSCSVsem6() {}
void Subject::printSCSVsem7() {}
void Subject::printSCSVsem8() {}


Subject::Subject() { course = 0; semester = 0; }

void Subject::setInfo(int s, char c[5])
{
	course = c;
	semester = s;

	if (semester==1)
	{
		if (course == "SCSR"||"scsr")
			printSCSRsem1();
		else if
			(course == "SCSV"||"scsv")
			printSCSVsem1();
	}

}

