#include "Course.h"
#include "Student.h"

Course::Course(string gCourseName, string gCourseNumber)
	:	courseName(gCourseName) , courseNumber(gCourseNumber) 
{
	maxStudents =4;
	student_ptr = new Student*[maxStudents];
}

void Course::addStudent (Student * ptr)
{

	if(noOfStudents < maxStudents && noOfStudents >= 0)
	{
		student_ptr[noOfStudents] = ptr;
		noOfStudents++;
	}
	else
		cout<<"Error!!!\n\n";
}

string Course::getCourse() const
{

 return courseName; 

}


ostream& operator<<(ostream &out, const Student &stud)
{
	
	out << "Name: " << stud.courseName <<endl;
	out << "Roll Number: " << stud.rollNumber <<endl;
	
	out << "Courses taken by Student:\n";

	for ( int i =0; i < stud.noOfCourses ; i++)
	{
		if (stud.course_ptr[i] != nullptr)
			out << stud.course_ptr[i]->getCourse()<< endl;
	}

	return out;
}

