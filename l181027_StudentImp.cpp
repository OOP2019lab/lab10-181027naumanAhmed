#include "Student.h"
#include "Course.h"

Student::Student(string givenName, string gRollNumber)
	:	name(givenName) , rollNumber(gRollNumber)
{
	noOfCourses =1;
	maxCourses =2;
	course_ptr = new Course*[maxCourses];
	for (int i = 0; i < maxCourses; i++)
		course_ptr[i] = nullptr;
}

void Student::addCourse (Course * ptr)
{

	if(noOfCourses <= maxCourses)
	{
		course_ptr[noOfCourses]=ptr;
		noOfCourses++;
	}
	else
		cout<<"Error\n";

	ptr->addStudent(this);//this doctor will be added to input pat

}



ostream& operator<<(ostream &out, const Student &stud)
{
	
	out << "Name: " << stud.name <<endl;
	out << "Roll Number: " << stud.rollNumber <<endl;
	
	out << "Courses taken by Student:\n";

	for ( int i =0; i < stud.noOfCourses ; i++)
	{
		if (stud.course_ptr[i] != nullptr)
			out << stud.course_ptr[i]->getCourse()<< endl;
	}

	return out;
}




