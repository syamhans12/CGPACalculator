#ifndef STUDENT_H
#define STUDENT_H


class Student
{
private:
	char* name;
	char* matricnumber;
	int semester;
public:
	void setName(char* n);
	void setMatricnumber(char* m);
	void setSemester(int s);
	friend ostream& operator <<(ostream& out, Student& s);
	int getSemester() { return semester; };

};

#endif

