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

int const i = 4;

void Subject:: kiraGPA() {
	
	int kira;
	cout << "\nHow many subject's points do you want to calculate? :";
	cin >> kira;

	double credit[i];
	double marks[i];
	for (int i = 0; i < kira; i++)
	{
		cout << "\nEnter the credit hour for the subject " << i + 1 << ": ";
		cin >> credit[i];
		do {
			cout << "\nEnter points of the subject " << i + 1 << ": ";
			cin >> marks[i];
		} while ( marks[i] > 1 || marks[i] < 4);
		
	}
	double sum = 0;
	double tot;
	for (int j = 0; j < kira; j++)
	{
		tot = credit[j] * marks[j];
		sum = sum + tot;
	}

	double totCr = 0;
	for (int k = 0; k < kira; k++)
	{
		totCr = totCr + credit[k];
	}

	cout << "\n\n\nTotal Points: " << sum << "\t Total Credits: " << totCr << "\t Total GPA: " << sum / totCr << endl;
}


