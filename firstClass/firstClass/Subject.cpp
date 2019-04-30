#include "Subject.h"

#include<iostream>
#include<string>
#include<cstring>

using namespace std;


void Subject::setNumsubject(int numsubject)
{
	_numsubject = numsubject;

}

int Subject::getNumsubject()
{
	return _numsubject;
}

void Subject::setGrade(char* grade)
{
	int grade_length = strlen(grade)+1;
	_grade = new char[grade_length];
	#pragma warning (suppress:4996)
	strcpy(_grade, grade);

}

char* Subject::getGrade()
{
	return _grade;
}

void Subject::setCredit(int credit)
{
	_credithour = credit;
}

int Subject::getCredit()
{
	return _credithour;
}

void Subject::getInfo(char * g, int ch,int x)
{
	
}
