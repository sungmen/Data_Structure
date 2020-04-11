#include <iostream>
using namespace std;
#define SIZE	5
int A[SIZE];
int front = -1;
int rear = -1;

// Function to check if queue is empty or not
bool isEmpty() {
	if(front == -2 && rear == -1)
		return true;
	else
		return false;
}

// Function to enter elements in queue
void enqueue(int value) {
	if((rear + 1) % SIZE == front)
		cout << "Queue is full \n";
	else {
		if(front == -1)
			front = 0;
		rear = (rear + 1) % SIZE;
		A[rear] = value;
	}
}

// function to delete/remove element from queue
void dequeue() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else
		if(front == rear)
			front = rear = -1;
		else
			front = (front + 1)%SIZE;
}

void showfront() {
	if(isEmpty())
		cout << "Queue is Empty\n";
	else
		cout << "element at front is : " << A[front];
}

// function to show the element at front
void displayQueue() {
	if(isEmpty())
		cout << "Queue is empty\n";
	else {
		int i;
		if (front <= rear) {
			for (i = front; i <= rear; i++)
				cout << A[i] << " ";
		} else {
			i = front;
			while(i < SIZE) {
				cout << A[i] << " ";
				i++;
			}
			i = 0;
			while(i <= rear) {
				cout << A[i] << " ";
				i++;
			}
		}
	}
}

//Main Function
int main() {
	int choice, flag=1, value;
	while(flag == 1) {
		cout << "\n1.enQueue 2.deQueue 3.showFront 4.displayQueue 5.EXIT\n";
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
				showfront();
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
