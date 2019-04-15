#include "Student.h"
#include "Subject.h"

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	
	Student st1;
	Subject sb1;
	
	char* mainName = new char[50];
	char* mainMatricnum = new char[50];
	int mainCourse;
	
	cout << "CGPA Calculator" << endl;
	cout << "School Of Computing" << endl;
	cout << "Faculty Of Engineering" << endl;
	cout << "Enter your name : ";
	cin >> mainName;
	st1.setName(mainName);
	cout << endl;
	cout << "Enter your matric number :";
	cin >> mainMatricnum;
	cout << endl;
	st1.setMatricnumber(mainMatricnum);

	
	cout << "1.SCSR ( Network & Security )" << endl;
	cout << "2.SCSV" << endl;
	cout << "3.SCSJ" << endl;
	cout << "4.SCSP" << endl;
	cout << "5.SCSB" << endl;
	cout << "Choose your course :" << endl;
	cin >> mainCourse;
	sb1.setCourse(mainCourse);
	


	

	delete[] mainName;
	delete[] mainMatricnum;

	return 0;
	
}

