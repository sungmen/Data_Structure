#include <iostream>
using namespace std;

#define SIZE	5
int A[SIZE];
int front = -1;
int rear = -1;
//function to check if queue is empty
bool isEmpty() {
	if(front == -1 && rear == -1)
		return true;
	else
		return false;
}

//function to insert element in queue
void enqueue(int value) {
	if (rear == SIZE - 1)
		cout << "Queue is full \n";
	else {
		if(front == -1)
			front = 0;
		rear++;
		A[rear] = value;
	}
}

//function to remove element from queue
void dequeue() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else
		if(front == rear)
			front = rear = -1;
		else
			front++;
}

// function to display element at front
void showFront() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else
		cout << "element at front is : " << A[front] << '\n';
}

//function to display element of the queue
void displayQueue() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else {
		for(int i = front; i <= rear; i++)
			cout << A[i] << " ";
		cout << '\n';
	}
}

int main () {
	// inserting elements in queue
	cout << "Inserting elements in queue\n";
	enqueue(2);
	displayQueue();
	enqueue(3);
	displayQueue();
	enqueue(5);
	displayQueue();
	enqueue(7);
	displayQueue();
	enqueue(8);
	displayQueue();
	// queue is full
	enqueue(9);
	//show element at front
	showFront();

	cout <<"Removing elements from queue\n";
	//removing elements from the queue
	dequeue();
	displayQueue();	
	dequeue();
	displayQueue();
	dequeue();
	displayQueue();
	dequeue();
	displayQueue();

	return 0;
}
