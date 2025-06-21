
  #include <iostream>
using namespace std;
template<class T>
 class Node
 {
 	private :
	T info;
	 Node<T> *next;
	 public:
	 Node(T info=0 , Node *next=0)
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

 
template <class T>
void TreeNode<T>::setInfo(T info){
	this->info=info;
}
template <class T>
void TreeNode<T>::setLeft(TreeNode<T>* left){
	this->left=left;
}
template <class T>
void TreeNode<T>::setRight(TreeNode<T>* right){
	this->right=right;
}
template <class T>

T TreeNode<T>::getInfo(){
	return info;
}