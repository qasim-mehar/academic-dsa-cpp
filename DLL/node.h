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