#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
private:
	char* course;
	int semester;
	char* subject;
	

public:
	void setCourse(char* c);
	char* getCourse();
	void setSemester(int s);
	int getSemester();
	void setSubject(char* subs);
	char* getSubject();
	void checkInfo(char* c);

	

};

#endif
