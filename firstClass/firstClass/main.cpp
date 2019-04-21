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
		for (int j = 0; j < numbersubjtaken; j++)
		{
			cout << "Subject " << j + 1 << " grade =>";
			cin >> grade;
		}
		
		cout << "Your cpa is :";
	}

	
	

	return 0;
	
}

