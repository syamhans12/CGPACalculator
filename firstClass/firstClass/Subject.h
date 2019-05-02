#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
	char* _grade;
	int _credithour;
	float eachsubj;
public:

	char* getGrade();
	int getCredithour();
	void setInfo(char * grade, int credhour);
	void kiraGPA();
};

#endif

