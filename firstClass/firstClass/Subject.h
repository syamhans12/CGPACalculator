#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
	char* _grade;
	int _credithour;
	int _numsubject;
public:
	void setNumsubject(int numsubject);
	int getNumsubject();


	void setGrade(char* grade);
	char* getGrade();

	void setCredit(int credit);
	int getCredit();

	void getInfo(char* g, int ch);


};

#endif
