#include<iostream>
#include "C:\Users\student\Desktop\Qasim DSA\ListStack\node.h"
//#include "C:\Users\student\Desktop\Qasim DSA\LinkedList\linkedList.h"
using namespace std;
template <class T>
class LinkedStack
{
	private:
		Node<T> *top;
		
	public:
	LinkedStack()
		{
			top=0;
			
		}
		void push (T element);//add head
		T pop();//removehead
		bool isEmpty();
	    T topValue();
};
