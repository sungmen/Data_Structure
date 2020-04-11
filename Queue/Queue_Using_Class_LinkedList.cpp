#include <iostream>
using namespace std;

// Class Node
template<typename n>
class Node{
private:
	n data;
	Node *link;
public:
	Node(){}
	Node(n data):data(data) {this->link = NULL;}
	Node(n data, Node *link): data(data), link(link) {}
};

// Class Queue
template<typename q>
class Queue {
private:
	
	

};
