#include "Student.h"
#include "Subject.h"
#include<iostream>
#include<string>
#include<cstring>
#define NUMBER 50
using namespace std;

int main()
{
	
	Student a;
	char* mainName = new char[NUMBER];
	char* mainMatricnum = new char[NUMBER];
	cout << "CGPA Calculator" << endl;
	cout << "School Of Computing" << endl;
	cout << "Faculty Of Engineering" << endl;
	cout << "Enter your name : ";
	cin >> mainName;
	a.setName(mainName);
	cout << endl;
	cout << "Enter your matric number :";
	cin >> mainMatricnum;
	a.setMatricnumber(mainMatricnum);

	delete[] mainName;
	delete[] mainMatricnum;

	return 0;
	
}