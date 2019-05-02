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
	cout << " How many subject do you want to calculate? : ";
	cin >> kira;

	float credit[i];
	float marks[i];
	for (int i = 0; i < kira; i++)
	{
		cout << "Enter the credit hour for the subject " << i + 1 << ": ";
		cin >> credit[i];

		cout << endl;
		cout << "Enter pointer of the subject " << i + 1 << ": ";
		cin >> marks[i];

	}
	float sum = 0;
	float tot;
	for (int j = 0; j < kira; j++)
	{
		tot = credit[j] * marks[j];
		sum = sum + tot;
	}

	float totCr = 0;
	for (int k = 0; k < kira; k++)
	{
		totCr = totCr + credit[k];
	}

	cout << "\n\n\nTotal Points: " << sum << " . Total Credits: " << totCr << " .Total GPA: " <<setprecision(3)<< sum / totCr << " ." << endl;
	cout << endl;
}


