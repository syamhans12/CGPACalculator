#include "Subject.h"
#include "Semester.h"
#include"Calculate.h"

#include<iostream>
#include<string>
#include<cstring>

 

using namespace std;

int main()
{
	
	
	Semester *sem;
	Subject *subj;
	int numberofsemester;
	char *grade;
	int credithour;
	

	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;
	
	cout << "Do you want to calculate for how many semester ? =>";
	cin >> numberofsemester;
	sem = new Semester[numberofsemester]; //so kat sini create size for object sem

	int numberofsubject;
	for (int i = 0; i < numberofsemester; i++)
	{
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
			
			subj[j].compare(grade, credithour);
		}

	}


	return 0;
	
}

