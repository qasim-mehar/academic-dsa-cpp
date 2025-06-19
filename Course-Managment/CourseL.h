#include <iostream>
#include "C:\Users\student\Desktop\Qasim DSA\Course Managment\Linkedlist.h"
using namespace std;
template <class T>
class CourseL:public LinkedList<T>
{
	public:
		void Traverse();
		void Search(string element);
        void deletefrom(T element);

};
