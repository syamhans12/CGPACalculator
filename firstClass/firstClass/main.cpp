#include "Subject.h"
#include "Semester.h"
#include"Calculate.h"

#include<iostream>
#include<string>
#include<cstring>

 

using namespace std;

int main()
{
	
	
	Semester sem;
	Subject *subj;
	int numbersubjtaken;
	int numberofsemester;
	char grade[2];
	int credit;

	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;
	
	cout << "Do you want to calculate for how many semester ? =>";
	cin >> numberofsemester;
	
	for (int i = 0; i < numberofsemester; i++)
	{
		cout << "Subject taken for (" << i + 1 << "- SEMESTER)?=>";
		cin >> numbersubjtaken;
		subj = new Subject[numberofsemester];
		subj[i].setNumsubject(numbersubjtaken);
		
		cout << endl;
		for (int j = 0; j < numbersubjtaken; j++)
		{
			

				cout << "Subject " << j + 1 << endl;
				cout << "Grade(A/A-/B/B+..etc) =>";
				cin >> grade;
				subj[j].setGrade(grade);

				cout << endl;
			
			
			do {
				
					cout << "Credit hour (1,2,3...etc) =>";
				
				cin >> credit;
				subj[j].setCredit(credit);
				
			} while (credit >4 ||credit<=0);

			subj[i].getInfo(subj[j].getGrade(), subj[j].getCredit());
		}

		
		
		cout << "Your cpa is :" << endl;
	}
	return 0;
	
}

