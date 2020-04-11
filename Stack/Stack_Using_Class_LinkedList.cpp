#include <iostream>
using namespace std;

template <typename v>
class Node{
	public:
		v data;
		Node *link;
};

template<typename t>
class Stack {
	private:
		Node<t> *top = NULL;
	public:
		bool isEmpty() {
			if(top == NULL)
				return true;
			else 
				return false;
		}

		void push(t value) {
			Node<t> *ptr = new Node<t>();
			ptr->data = value;
			ptr->link = top;
			top = ptr;
		}

		void pop() {
			if(isEmpty()) {
				cout << "Stack is Empty";
			} else {
				Node<t> *ptr = top;
				top = top->link;
				delete(ptr);
			}
		}

		void showTop() {
			if(isEmpty()) {
				cout << "Stack is Empty";
			} else {
				cout << "Element at top is : " << top->data;
			}
		}

		void displayStack(){
			if(isEmpty()) {
				cout << "Stack is Empty";
			} else {
				Node<t> *temp = top;
				while(temp != NULL) {
					cout << temp->data << " ";
					temp = temp->link;
				}
				cout << '\n';
			}
		}
};

int main() {
	int choice, flag = 1;
	string value;
	Stack<string> s;
	while(flag == 1) {
		cout << "\n1.PUSH 2.POP 3.TOP 4.DisplayStack 5.EXIT\n";
		cin >> choice;
		cout << "----------------------------------------" << endl;
		switch(choice) {
			case 1: 
				cout << "Enter value:\n";
				cin >> value;
				s.push(value);
				break;
			case 2: 
				s.pop();
				break;
			case 3:
				s.showTop();
				break;
			case 4: 
				s.displayStack();
				break;
			case 5:
				flag = 0;
				cout << "EXIT" << endl;
				break;
			default:
				cout << "Wrong Choice" << endl;
				break;
		}
		cout << endl;
	}

	return 0;	
}
