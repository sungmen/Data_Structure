#include <iostream>
#include <stack>
using namespace std;

int matchingPair(char a, char b) {
	if(a=='{' && b=='}')
		return 1;
	else if (a=='[' && b==']')
		return 1;
	else if (a=='(' && b==')')
		return 1;
	return 0;
}

int main() {
	
}
