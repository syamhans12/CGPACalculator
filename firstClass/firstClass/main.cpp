#include "Student.h"
#include "Subject.h"

#include<iostream>
#include<string>
#include<cstring>
 

using namespace std;

int main()
{
	
	
	int numbersubjtaken;
	int numberofsemester;
	char grade;
	int credit;

	cout << " " << endl;
	cout << "\t CGPA Calculator" << endl;
	cout << "\t School Of Computing" << endl;
	cout << "\t Faculty Of Engineering" << endl;
	cout << " " << endl;
	
	cout << "Do you want to calculate for how many semester ? " << endl;
	cin >> numberofsemester;
	for (int i = 0; i < numberofsemester; i++)
	{
		cout << "Subject taken for (" << i + 1 << "- SEM)?=>";
		cin >> numbersubjtaken;
		cout << endl;
		for (int j = 0; j < numbersubjtaken; j++)
		{
			cout << "Subject " << j + 1 << endl;
			cout<<"Grade(A/A-/B/B+..etc) =>";
			cin >> grade;
			cout << endl;
			cout << "Credit hour (1,2,3...etc) =>";
			cin >> credit;
			cout << endl;
			
		}
		
		cout << "Your cpa is :" << endl;
	}

	
	

	return 0;
	
}

