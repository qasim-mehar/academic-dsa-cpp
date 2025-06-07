#include<iostream>
#include "C:\Users\student\Desktop\Qasim DSA\DLL\TNode.h"
using namespace std;
template<class T>
class DLL
{
	private:
		TNode<T> *head;
		TNode<T> *tail;
	public:
	 DLL()
	{
		head=tail=0;	
	}
	TNode<T>* getHead();
	TNode<T>* getTail();		
	void forwardTraversing();
	void reversTraversing();
	void addToHead(T element);		
};
template<class T>
TNode<T>* DLL<T>::getHead()
{
	return this->head;
}//getHead 
