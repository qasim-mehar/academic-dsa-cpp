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

	template<class T>
TNode<T>* DLL<T>::getTail()
{
	return this->tail;
}//getTail

template<class T>
void DLL<T>::forwardTraversing()
{
	TNode<T>*ptr=head;
	while(ptr!=0)
	{
    	//	cout<<ptr->getinfo()<<endl;
	    ptr->display();
		ptr=(TNode<T>)*ptr->getnext();
	}	
	
}

template <class T>

void DLL<T>::addToHead(T element){
	TNode<T>* n= new TNode<T>(element);
	if(head=0 && tail==0){
		head=tail=n;
	}
	else{
		n->setnext(head);
		head->setprev(n);
		head =n;
	}
}

