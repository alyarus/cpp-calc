#include <iostream>

using namespace std;

int plus(int a, int b) {
	//todo implement
	return 0;
}

int minus(int a, int b) {
	// todo implement
	return 0;
}

int multiply(int a, int b) {
	// todo implement
	return 0;
}

int divide(int a, int b) {
	//todo implement
	return 0;
}

void output(int result) {
	//todo implement
}

int main(int argc, char const *argv[])
{
	int a,b;
	char oper;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "operator ";
	cin >> oper;

	int result = 0;

	switch(oper) {
		case '+': 
			result = plus(a, b);
			break;
		case '-':
			result = minus(a, b);
			break;
		case '*': 
			result = multiply(a, b);
			break;
		case '/':
			result = divide(a, b);
			break;
	}

	output(result);
	
	return 0;
}