#include<iostream>
using namespace std;

// Structure of Node.
struct Node {
	int data;
	Node *link;
};

Node *front = NULL;
Node *rear = NULL;

// Function to check if queue is empty or not
bool isEmpty() {
	if(front == NULL && rear == NULL)
		return true;
	else
		return false;
}

// Fucntion to enter elements in queue
void enqueue(int value) {
	Node *ptr = new Node();
	ptr->data = value;
	ptr->link = NULL;

	// if inserting the first element/Node
	if (front == NULL) {
		front = ptr;
		rear = ptr;
	} else {
		rear->link = ptr;
		rear = ptr;
	}
}

// function to delete/remove element from queue
void dequeue() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else
		// only one element/node in queue
		if(front == rear) {
			free(front);
			front = rear = NULL;
		} else {
			Node *ptr = front;
			front = front->link;
			free(ptr);
		}
}

// function to show the element at front
void showFront() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else 
		cout << "element at front is: "<<front->data;
}

//function to display queue
void displayQueue() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else {
		Node *ptr = front;
		while(ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->link;
		}
	}
}

// Main Function
int main() {
	int choice, flag=1, value;
	while(flag==1) {
		cout << "\n1.enqueue 2.dequeue 3.showFront 4.displayQueue 5.EXIT\n";
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "Enter value:\n";
				cin >> value;
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				showFront();
				break;
			case 4:
				displayQueue();
				break;
			case 5:
				flag = 0;
				break;
		}
	}

	return 0;
}
