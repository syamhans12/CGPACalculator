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
	float compare(char * _grade, int credhour);
};

#endif
