#include <iostream>
#include "Node.h"


using namespace std;
template<class T>

class LinkedList
{
	private:
		Node<T> *head;
		Node<T> *tail;
	public:
		LinkedList()// user cannot decide the start or end by the start
		{
			head=tail=0;
		}
		Node<T> *getHead();
		Node<T>* getTail();
		void addToTail(int element); //append
		void traversing();
		void delfromhead();
		void delfromtail();
		Node<T>* search(T element);
		void addAfter(T existingV, T newV);
};
template<class T>
Node<T>* LinkedList<T>::getHead()
{
	return this->head;
}//getHead 
template<class T>
Node<T>* LinkedList<T>::getTail()
{
	return this->tail;
}//get tail
template<class T>
void LinkedList<T>::addToTail(int element)
{
	Node<T>*n=new Node<T>(element);
	if (head==0&&tail==0)//n will be the first node
	{
		head=tail=n;
		
	}
	else // there are on or more nodes already in the list
	{
		tail->setnext(n);
		tail=n;
	}
}//add to tail
template<class T>
void LinkedList<T>::traversing()
{
	Node<T>*ptr=head;
	while(ptr!=0)
	{
	//	cout<<ptr->getinfo()<<endl;
	ptr->display();
		ptr=ptr->getnext();
	}
}

template<class T>
void LinkedList<T>::delfromhead(){

if (head==0&&tail==0)
{
	cout<<"there is nothing to del";
	
}
else if (head==tail)
{
	delete head;
	head=tail=0;
}
else
{
	/*Node<T> *ptr=head;
	head=head->getnext();
 	delete ptr;*/
 	Node<T> *ptr=head->getnext();
 	delete head;
 	head=ptr;
	
}
}

template<class T>
void LinkedList<T>::delfromtail(){
	if (head==0&&tail==0)
{
	cout<<"there is nothing to del";
	
}
else if (head==tail)
{
	delete tail;
	head=tail=0;
}
else
{
	Node<T> *ptr=head;
	while(ptr->getnext()!=tail)
	{
		ptr=ptr->getnext();
		
	}
	ptr->setnext(0);
	delete tail;
	tail=ptr;
}
	
}
template<class T>
Node<T>*LinkedList<T>::search(T element)
{
	Node<T> *ptr=head;
	while(ptr!=0)
	{
		if(element==ptr->getinfo())
		{
			return ptr;
		}
		ptr=ptr->getnext();
	
	}
	return 0;
}
template<class T>
void LinkedList<T>::addAfter(T existingV, T newV)
{
	if((head==0&&tail==0)||(search(existingV)==0))//error
	{
		cerr<<"Element cannot be added\n";	
	}
	else if (existingV==tail->getinfo())//existing v is present at tail node
	{
		addToTail(newV);
	}
	else//existing is present inbetween
	{
		Node<T> *n=new Node<T>(newV);
		Node<T> *ptr=search(existingV);
		n->setnext((ptr->getnext()));
		ptr->setnext(n);
		
	}
}
