#include<iostream>
#include<string>
using namespace std;

class Student;

#ifndef COURSE_H
#define COURSE_H

class Course
{

private:
	string courseName;
	string courseNumber;
	void addStudent(Student*);
	Student ** student_ptr;
	int maxStudents;
	int noOfStudents;

public:
	Course(string, string);
	~Course();
	friend class Student;
	string getCourse() const;

};

#endif;

