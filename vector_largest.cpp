#include<iostream>
#include<vector>


#define n 3

int main(){
	std::vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		std::cout << "Enter element " << i + 1 << ": ";
		std::cin >> x;
		v.push_back(x);
	}
	int largest = v[0];
	for(int i = 1; i < n; i++){
		if (v[i] > largest){
			largest = v[i];
		}
	}
	std::cout << "The largest element is " << largest << std::endl;
	return 0;
}