#include <iostream>
#include <C:\Users\student\Desktop\Qasim DSA\Course Managment\CourseL.h>
#include <C:\Users\student\Desktop\Qasim DSA\Course Managment\Course.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	CourseL<Course*> courses;
	int opt;
	string code;
	string name;
	int hours;
	do
	{
			
		cout<<"press 1 to add a course \n";
		cout<<"press 2 to display a course \n";
		cout<<"press 3 to search a course \n";
		cout<<"press 4 to a delete a course \n ";
		cout<<"press 0 to exit \n";
		
		cin>>opt;	
		switch(opt)
		{
			case 1:
			cout<<"provide course Code\n";
			cin>>code;
			cout<<"provide course Name\n";
			cin>>name;
			cout<<"provide course Hours\n";
			cin>>hours;
			courses.addToTail(new Course(code,name,hours));
			break;
			case 2:
				courses.traversing();
			break;
			case 3:
				cout<<"provide course Code\n";
			cin>>code;
			courses.Search(code);
			break;
			case 4:
			break;
			case 0:
			exit(-1);
		}
	}
	while(true);
	return 0;
}
