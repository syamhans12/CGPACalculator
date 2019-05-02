#ifndef SEMESTER_H
#define SEMESTER_H


class Semester
{
	Subject* _subject;
	float totalG = 0;
	int totalC = 0;

public:

	void subjCount(Subject* s, int x);
	float getsubjCount();
	void credCount(Subject* ss, int z);
	int getcredCount();


};

#endif
