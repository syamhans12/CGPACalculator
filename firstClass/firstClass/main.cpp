#include "Student.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Student a;
	string mainName, mainMatricnum;
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

	return 0;
	
}