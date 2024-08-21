#include <iostream>
#include <string>
using namespace std;
int main() {
	string n1;
	string n2;
	string op;

	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	cout << "Enter the operator: ";
	cin >> op;

	int int1 = stoi(n1);
	int int2 = stoi(n2);

	if (op == "+") {
		cout << int1 + int2 << endl;
	} else if (op == "-") {
		cout << int1 - int2 << endl;
	} else if (op == "*") {
		cout << int1 * int2 << endl;
	} else if (op == "/") {
		cout << int1 / int2 << endl;
	} else {
		cout << "Invalid operator" << endl;
	}
	return 0;
	
	

}