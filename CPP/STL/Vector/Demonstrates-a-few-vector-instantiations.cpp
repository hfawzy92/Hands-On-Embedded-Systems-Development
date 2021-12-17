/*
In this example , please do the following :
1. Create vector of integers without initialization
2. Create a vector , and initialize it using C++11 list initialization
3. Create a vector , with 10 elements
4. Create a vector , with 10 elements , each initialized to 90
5. Create a vector , and initialize it to contents of another vector
6. Create a vector , and initialize 5 elements of it from another vector using iterators
*/

#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> integers;
	
	std::vector<int> initVector { -1, -2 , -3 , 0 , 1 , 2 , 3};
	
	std::vector<int> tenElements(10);
	
	std::vector<int> tenElementsInit(10 , 90);
	
	std::vector<int> copyVector(initVector);
	
	std::vector<int> partialCopy(tenElements.cbegin(), tenElements.cbegin() + 5);
	
	return 0;
}