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
	
	char mainName[50];
	char mainMatricnum[10];
	char mainCourse[5];
	int mainSemester;
	
	cout << "CGPA Calculator" << endl;
	cout << "School Of Computing" << endl;
	cout << "Faculty Of Engineering" << endl;
	cout << " " << endl;
	cout << "Enter your name : ";
	cin.getline(mainName, 50,'\n');
	cout << endl;
	cout << "Enter your matric number :";
	cin.getline(mainMatricnum, 50,'\n');
	st1.setMatricnumber(mainMatricnum);
	st1.setName(mainName);
	cout << endl;
	

	
	cout << "5 Major Course Offered" << endl;
	cout << "->SCSR ( Network & Security )" << endl;
	cout << "->SCSV" << endl;
	cout << "->SCSJ" << endl;
	cout << "->SCSP" << endl;
	cout << "->SCSB (Bioinformatics)" << endl;
	cout << "Type in YOUR code course :";
	cin.getline(mainCourse, 5, '\n');
	sb1.setCourse(mainCourse);
	cout << "Choose your semester (1-8) :";
	cin>>mainSemester;
	st1.setSemester(mainSemester);

	cout << st1 << endl;

	return 0;
	
}

