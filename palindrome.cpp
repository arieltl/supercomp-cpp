#include<iostream>
#include<string>


#define n 5

int main(){
	std::string str;
	std::cout << "Enter a string: ";
	getline(std::cin, str);
	int len = str.length();
	for(int i = 0; i < len / 2; i++){
		if(str[i] != str[len - i - 1]){
			std::cout << "The string is not a palindrome" << std::endl;

			return 0;
		}
	}
	std::cout << "The string is a palindrome" << std::endl;
	
	return 0;
}