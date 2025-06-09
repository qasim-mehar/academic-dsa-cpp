#include <iostream>
using namespace std;
template<class T>
 class Node
 {
 	private :
	T info;
	 Node<T> *next;
	 public:
	 Node(int info=0 , Node *next=0)
	 {
		this->info=info;
		this->next=next; 	
	 }
	void setinfo(T info);
	void setnext(Node<T> * next);
	T getinfo();
	Node<T>* getnext();
	void display();
 };

// can be move to node .ccp///// decleration
template<class T>
void Node<T> :: setinfo(T info)
{
	this -> info=info;
}//setinfo
template<class T>
void Node<T> :: setnext(Node<T>* next )
{
	this -> next=next;
}//setnext

template<class T>
T Node<T> :: getinfo()
{
	return this->info;
}//get info
template<class T>

Node<T>* Node<T>:: getnext()
{
	return this->next;
}//get next adress
template<class T>

void Node<T> ::display()
{
	cout<<"|("<<this<<")|"<<this->info<<"|"<<this->next<<"|"<<endl;
}

