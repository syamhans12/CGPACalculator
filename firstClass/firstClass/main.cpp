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
	int numbersubjtaken;
	int numberofsemester;
	char grade[2], name[30];
	int credit;

	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;

	cout << "Do you want to calculate for how many semester ? =>";
	cin >> numberofsemester;
	sem = new Semester[numberofsemester];

	for (int i = 0; i < numberofsemester; i++)
	{
		cout << endl;
		cout << "Total of subject for " << i + 1 << " SEM=>";
		cin >> numberofsubject;
		subj = new Subject[numberofsubject];// create size for object subj.
		for (int j = 0; j < numberofsubject; j++)
		{
			

				cout << "Subject " << j + 1 << endl;
				cout << "Grade =>";
				cin >> grade;
				subj[j].setGrade(grade);
				cout << endl;

			//error detection for credit hour		
			do {
				
				cout << "Credit hour =>";
				cin >> credit;
				
			} while (credit >4 ||credit<=0);

			subj[j].setCredit(credit);
			subj[i].getInfo(subj[j].getGrade(), subj[j].getCredit(),numbersubjtaken);
			
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

