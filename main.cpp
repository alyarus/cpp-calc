#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
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
			result = add(a, b);
			break;
		case '-':
			result = subtract(a, b);
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