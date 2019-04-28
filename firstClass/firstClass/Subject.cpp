#include "Subject.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void Subject::acceptDat()
{
	cout << "Enter Subject Name: " << endl;
	cin >> subjectname;
	cout << "\n Enter credit hour: " << endl;
	cin >> credithour;

}
