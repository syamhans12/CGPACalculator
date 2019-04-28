#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
private:
	char subjectname[50];
	int credithour;
	float pointer, total, percentage;
public:
	void acceptDat();
	void display();
	void calPercent();

};

#endif
