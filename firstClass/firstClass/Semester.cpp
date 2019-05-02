#include "Subject.h"
#include "Semester.h"
#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<string.h>



using namespace std;

void Semester::subjCount(Subject * s, int x)
{

	if (strcmp(s[x].getGrade(), "E") == 0)
	{
		totalG += 0.00*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "D-") == 0)
	{
		totalG += 0.67*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "D") == 0)
	{
		totalG += 1.00*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "D+") == 0)
	{
		totalG += 1.33*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "C-") == 0)
	{
		totalG += 1.67*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "C") == 0)
	{
		totalG += 2.00*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "C+") == 0)
	{
		totalG += 2.33*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "B-") == 0)
	{
		totalG += 2.67*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "B") == 0)
	{
		totalG += 3.00*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "B+") == 0)
	{
		totalG += 3.33*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "A-") == 0)
	{
		totalG += 3.67*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "A") == 0)
	{
		totalG += 4.00*s[x].getCredithour();
	}
	else if (strcmp(s[x].getGrade(), "A+") == 0)
	{
		totalG += 4.00*s[x].getCredithour();
	}

	//return totalG;
}

float Semester::getsubjCount()
{
	return totalG;
}



void Semester::credCount(Subject * ss, int z)
{

	totalC += ss[z].getCredithour();
}

int Semester::getcredCount()
{
	return totalC;
}







