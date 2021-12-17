#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> initVect_1 = {0 ,1 , 2};
	std::vector<int> initVect_2   {3 ,4 , 5};

	std::cout << "initVect_1 size = ";
	std::cout << initVect_1.size() << std::endl;
	
	std::cout << "initVect_2 size = ";
	std::cout << initVect_2.size() << std::endl;
	
	return 0;
}