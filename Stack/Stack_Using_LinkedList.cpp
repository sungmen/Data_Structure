#include <iostream>
using namespace std;

// Structure of the Node
struct Node {
	int data;
	Node *link;
};

// top pointer to keep track of the top of the stack
Node *top = NULL;

// Fuction to check it stack is empty or not
bool isEmpty() {
	if (top == NULL)
		return true;
	else
		return false;
}

// Function to insert an element in stack
void push(int value) {
	Node *ptr = new Node();
	ptr->data = value;
	ptr->link = top;
	top = ptr;
}

// Function to delete an element in stack
void pop() {
	if (isEmpty())
		cout << "Stack is Empty";
	else {
		Node *ptr = top;
		top = top->link;
		delete(ptr);
	}
}

// Function to show the element an the top of the stak
void showTop() {
	if (isEmpty())
		cout << "Stack is Empty";
	else
		cout << "Element at top is : " << top -> data;
}

// Function to display the stack
void displayStack() {
	if(isEmpty())
		cout << "Stack is Empty";
	else {
		Node *temp = top;
		while(temp != NULL) {
			cout << temp->data << " ";
			temp = temp->link;
		}
		cout << '\n';
	}	
}

// Main function
int main() {
	int choice, flag = 1, value;

	// Menu Driven Program using Switch
	while (flag == 1) {
		cout << "\n1.PUSH 2.POP 3.ShowTOP 4.DisplayStack 5.EXIT\n";
		cin >> choice;
		switch(choice) {
			case 1: 
				cout << "Enter value:\n";
				cin >> value;
				push(value);
				break;
			case 2: 
				pop();
				break;
			case 3:
				showTop();
				break;
			case 4: 
				displayStack();
				break;
			case 5:
				flag = 0;
				break;
		}
	}
}
