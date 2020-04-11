#include <iostream>
using namespace std;

#define SIZE	5
int A[SIZE], top = -1;

bool isEmpty() {
	if(top == -1)
		return true;
	else
		return false;
}

void push(int value) {
	if(top == SIZE - 1)
		cout << "Stack is FULL\n";
	else {
		top++;
		A[top] = value;
	}
}

void pop(){
	if(isEmpty())
		cout << "Stack is Empty!\n";
	else
		top--;
}

void Top(){
	if(isEmpty()) 
		cout << "Stack is Empty\n";
	else
		cout << "Element an TOP is : " << A[top] << '\n';
}

void displayStack() {
	if(isEmpty())
		cout << "Stack is empty\n";
	else {
		for (int i = 0; i <= top; i++)
			cout << A[i] << ' ';
		cout << "\n";
	}
}

int main() {
	int choice, flag = 1, value;
	cout << "\n1.PUSH 2.POP 3.TOP 4.DisplayStack 5.EXIT\n";
	cin >> choice;
	switch(choice) {
		case 1:
			cout << "Enter Value:\n";
			cin >> value;
			push(value);
			break;
		case 2:
			pop();
			break;
		case 3:
			Top();
			break;
		case 4:
			displayStack();
			break;
		case 5:
			flag = 0;
			break;
	}
}
