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
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(v[j] > v[j + 1]){
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
	std::cout << "The sorted elements are: ";
	for(int i = 0; i < n; i++){
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}