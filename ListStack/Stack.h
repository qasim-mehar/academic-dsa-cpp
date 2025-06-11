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
template <class T>
void LinkedStack<T>::push (T element)
{

	Node<T>* n=new Node<T> (element);
		
		if(top==0)
		{
			top=n;
		}
		else
		{
			n->setnext(top);
			top=n;
		}	
}
template <class T>
T LinkedStack<T>::pop()
{ 	
   if(top==0 )
		{
			cout<<"There is nothing to delete\n";
		}
		/*else if(head==tail)
		{
			delete head;
			head=tail=0;
		}*/
		else
		{
		Node<T> *i =top->getnext();
		delete top;
		top=i;		
		}
}


template <class T>
bool LinkedStack<T>:: isEmpty()
{
	return top==0;
}
