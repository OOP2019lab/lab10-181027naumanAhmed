#include "Student.h"
#include "Course.h"


int main()
{
	//Create 5 students, with following names and roll numbers	
	Student *s1 = new Student("Anum", "11-1351");
	Student *s2 = new Student("Sara", "12-6462");
	Student *s3 = new Student("Sana", "11-4531");
	Student *s4 = new Student("Zara", "11-4342");
	Student *s5 = new Student("Hira", "11-5940");

	
	
	//Create 3 courses with following name and ID
	Course *c1 = new Course("OOP", "CS102");
	Course *c2 = new Course("PF", "CS101");
	Course *c3 = new Course("AI", "CS365");

	s1->addCourse(c1); // this should also automatically add S1 in C1
	s1->addCourse(c2); // this should also automatically add S1 in C2
	s1->addCourse(c2); // Again try to add C2 to S1, it should give an error as C2 is already added in S1. 
	s1->addCourse(c3); // Try to add C3 into S1 it should give error as S1 has already 2 courses (C1 and C2).
	s2->addCourse(c2); // this should also automatically add S2 in C2
	s3->addCourse(c2); // this should also automatically add S3 in C2
	s4->addCourse(c2); // this should also automatically add S4 in C2
	s5->addCourse(c2); 	// this should give error as C2 already has 4 students in it. 
	//	c1->addStudent(s5); // this should give error as no one is allowed to directly add student to course.

	cout <<*s1; // this should print name RollNo and courses taken by S1;
	cout <<c2; // this should print name and ID and list of student taking C2
	cout <<c1; // this should print name and ID and list of student taking C2



}