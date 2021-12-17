#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> integers {2, 4, 9, 3};
	
	// insert an element at the beginning
	integers.insert( integers.begin() , 25 );
	
	// Insert 2 elements of value 45 at the end
	integers.insert (integers.end(), 2, 45);
	
	// Another vector containing 2 elements of value 30
	std::vector <int> another (2, 30);
	
	// Insert two elements from another container in position [1]
	integers.insert (integers.begin() + 1, 
	another.begin(), another.end());
	
	return 0;
}