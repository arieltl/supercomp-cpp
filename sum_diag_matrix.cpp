#include<iostream>
#include<vector>


#define n 3

int main(){
	std::vector<std::vector<int>> v;
	for(int i = 0; i < n; i++){
		std::vector<int> temp;
		for(int j = 0; j < n; j++){
			int x;
			std::cout << "Enter element " << i + 1 << ", " << j + 1 << ": ";
			std::cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += v[i][i];
	}
	std::cout << "The sum of the diagonal elements is " << sum << std::endl;
	return 0;

}