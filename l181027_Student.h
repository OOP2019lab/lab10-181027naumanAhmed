#include<iostream> 
#include <string>
using namespace std;

class Course;

#ifndef STUDENT_H
#define STUDENT_H

class Student
{

private:
	string name;
	string userName;
	string rollNumber;
	Course ** course_ptr;
	int noOfCourses;
	int maxCourses;

public:

	Student(string, string);
	~Student();
	void addCourse(Course*);
	friend ostream& operator<<(ostream &, const Student &);
	


};

#endif