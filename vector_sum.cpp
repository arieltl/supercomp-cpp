#include<iostream>
#include<vector>


#define n 5

int main(){
	std::vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		std::cout << "Enter element " << i + 1 << ": ";
		std::cin >> x;
		v.push_back(x);
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += v[i];
	}
	std::cout << "The sum of the elements is " << sum << std::endl;
	return 0;
}