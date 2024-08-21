#include<iostream>
#include<string>


using namespace std;
int main(){
	string n;
	cout << "Enter a number: ";
	cin >> n;
	int num = stoi(n);
	if(num % 2 == 0){
		cout << "The number is even" << endl;
	} else {
		cout << "The number is odd" << endl;
	}
	return 0;
}