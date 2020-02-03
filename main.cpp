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

void output(int a, int b, char oper, int result) {
  cout << a << " " << oper << " " << b << " = " << result << endl;
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
	bool corrupted = false;
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
		default:
			corrupted = true;
			break;
	}

	if (!corrupted) output(a, b, oper, result);
	
	return 0;
}
