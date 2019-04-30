#include "Subject.h"
#include "Semester.h"
#include<iostream>
#include<string>
#include<cstring>



using namespace std;

void Semester::setCountsemester(int countsemester)
{
	_countsemester = countsemester;
}

int Semester::getCountsemester()
{
	return _countsemester;
}

void Semester::setSubjcount(int x )
{
	_subject->setNumsubject(x);
}






