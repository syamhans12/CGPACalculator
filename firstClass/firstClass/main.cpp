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
	int numbersubjtaken;

	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;
	cout << "Enter students name : ";
	cin.getline(mainName, 50,'\n');
	cout << endl;
	cout << "Enter students matric number :";
	cin.getline(mainMatricnum, 50,'\n');
	st1.setMatricnumber(mainMatricnum);
	st1.setName(mainName);
	cout << endl;
	

	
	cout << "\t 5 Major Course Offered" << endl;
	cout << "\t ->SCSR ( Network & Security )" << endl;
	cout << "\t ->SCSV (Graphic and Multimedia)" << endl;
	cout << "\t ->SCSJ (Software Engineering)" << endl;
	cout << "\t ->SCSP (Data Engineering)" << endl;
	cout << "\t ->SCSB (Bioinformatics)" << endl;
	cout << " " << endl;
	cout << "Type in YOUR COURSE CODE :";
	cin.getline(mainCourse, 5, '\n');
	sb1.checkInfo(mainCourse);
	//sb1.setCourse(mainCourse);
	cout << "Choose your semester (1-8) :";
	cin>>mainSemester;
	sb1.setSemester(mainSemester);
	cout << "Number of subject taken : ";
	cin >> numbersubjtaken;
	

	
	

	return 0;
	
}

