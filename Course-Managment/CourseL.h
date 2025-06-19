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
template<class T>
void CourseL<T>::Traverse(){
	Node<T> *i = this->getHead();
	while(i!=0){
	
		//i->display();
		i->getinfo()->display();
		i=i->getNext();
	}
} 
