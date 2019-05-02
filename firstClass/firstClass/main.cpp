#include "Subject.h"
#include "Semester.h"


#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
#include<string.h>

 

using namespace std;

int main()
{
	
	
	Semester *sem;
	Subject *subj;
	int numberofsemester;
	char *grade;
	int credithour;
	float *cpa;
	float gpa = 0;
	

	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;
	
	cout << "Do you want to calculate for how many semester ? =>";
	cin >> numberofsemester;
	sem = new Semester[numberofsemester]; //so kat sini create size for object sem
	cpa = new float[numberofsemester];
	int numberofsubject;
	for (int i = 0; i < numberofsemester; i++)
	{
		cout << endl;
		cout << "Total of subject for " << i + 1 << " SEM=>";
		cin >> numberofsubject;
		subj = new Subject[numberofsubject];// create size for object subj.
		for (int j = 0; j < numberofsubject; j++)
		{
			cout << "Subject " << j + 1 << endl;
			cout << "\tGrade=>";
			grade = new char[3];
			cin.ignore();
			cin.getline(grade, 3);
			cout << "\tCredit Hour=>";
			cin >> credithour;
			subj[j].setInfo(grade, credithour);
			sem[i].subjCount(subj, j);
			sem[i].credCount(subj,j);
			
		}
		cpa[i] = sem[i].getsubjCount() / sem[i].getcredCount();
		cout << endl;
		cout << "Your cpa for semester "<<i+1<< " is:" << setprecision(3) << cpa[i];
		cout << endl;
		gpa += cpa[i] / numberofsemester;
	}
	cout << endl;
	cout << "Your gpa total of " << numberofsemester << " semester is " <<setprecision(3) << gpa;


	return 0;
	
}

