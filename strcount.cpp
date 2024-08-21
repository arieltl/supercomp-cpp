#include<iostream>

int main(){
	std::string str;
	std::cout << "Enter a string: ";
	getline(std::cin, str);
	std::cout << "The string has " << str.length() << " characters" << std::endl;
	return 0;
}