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

	cout << "The subject listed based on :"<<endl;
	cout<<"http://engineering.utm.my/computing/our-academic/" << endl;
	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;
	cout << "Enter your name : ";
	cin.getline(mainName, 50,'\n');
	cout << endl;
	cout << "Enter your matric number :";
	cin.getline(mainMatricnum, 50,'\n');
	st1.setMatricnumber(mainMatricnum);
	st1.setName(mainName);
	cout << endl;
	

	
	cout << "\t 5 Major Course Offered" << endl;
	cout << "\t ->SCSR ( Network & Security )" << endl;
	cout << "\t ->SCSV" << endl;
	cout << "\t ->SCSJ" << endl;
	cout << "\t ->SCSP" << endl;
	cout << "\t ->SCSB (Bioinformatics)" << endl;
	cout << " " << endl;
	cout << "Type in YOUR COURSE CODE :";
	cin.getline(mainCourse, 5, '\n');
	sb1.setCourse(mainCourse);
	cout << "Choose your semester (1-8) :";
	cin>>mainSemester;
	sb1.setSemester(mainSemester);
	#pragma warning(suppress : 4996)
	strcpy(mainCourse, sb1.getCourse());
	mainSemester = sb1.getSemester();

	sb1.setInfo(mainSemester, mainCourse);
	

	return 0;
	
}

