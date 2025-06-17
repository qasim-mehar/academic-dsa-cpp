#include <iostream>
using namespace std;

class Course 
{	
	private:
		string courseCode;
		string courseName;	
		int creditHours;
	
	public:
		Course(string courseCode, string couseName, int creditHours)
		{
			this->courseCode=courseCode;
			this->courseName=courseName;
			this->creditHours=creditHours;		
		}
    		void setcourseCode(string courseCode);
		void setcourseName(string courseName);
		void setcreditHours(int creditHours);
		string getcourseCode();
		string getcourseName();
		int getcreditHours();
		void display();
};
void Course::setcourseCode(string courseCode)
	{
		this->courseCode=courseCode;
	}
	
	 void Course::setcourseName(string courseName)
	{
		this->courseName=courseName;
	}
		void Course::setcreditHours(int creditHours)
	{
		this->creditHours=creditHours;
	}
	