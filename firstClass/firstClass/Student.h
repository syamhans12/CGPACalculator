#ifndef STUDENT_H
#define STUDENT_H


class Student
{
private:
	char *name;
	char *matric_number;
public:
	void setName(char *n);
	void setMatricNUmber(char *m);
	char getName();
	char getMatricNumber();


};


#endif

