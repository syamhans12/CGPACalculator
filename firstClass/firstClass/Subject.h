#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
private:
	char* course;
	int semester;

public:
	void setCourse(char* c);
	char* getCourse();
	void setSemester(int s);
	int getSemester();
	Subject();
	void setInfo(int s, char c[5]);
	
	void printSCSRsem1();
	void printSCSRsem2();
	void printSCSRsem3();
	void printSCSRsem4();
	void printSCSRsem5();
	void printSCSRsem6();
	void printSCSRsem7();
	void printSCSRsem8();
	
	void printSCSVsem1();
	void printSCSVsem2();
	void printSCSVsem3();
	void printSCSVsem4();
	void printSCSVsem5();
	void printSCSVsem6();
	void printSCSVsem7();
	void printSCSVsem8();
};

#endif
