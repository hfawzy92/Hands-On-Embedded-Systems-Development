#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> integers;
	
	integers.push_back(16);
	integers.push_back(10);
	integers.push_back(1992);
	
	std::cout << "integers vector size = ";
	std::cout << integers.size() << std::endl;
	
	return 0;
}