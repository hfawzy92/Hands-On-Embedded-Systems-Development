/*

*/

#include <iostream>
#include <vector>
using namespace std;

void DisplayVector(const vector<int> &inVec) {
	
	for (auto element = inVec.cbegin() ;
	     element != inVec.cend() ;
		 ++element) {
		
		cout << *element << ' ';
	}
	cout << endl;
}

int main() {
	
	vector<int> integers(4, 90);
	cout << "Initial contents : ";
	DisplayVector(integers);
	integers.insert( integers.begin() , 25 );
	DisplayVector(integers);
	integers.insert (integers.end(), 2, 45);
	DisplayVector(integers);
	std::vector <int> another (2, 30);
	integers.insert (integers.begin() + 1, 
	another.begin(), another.end());
	DisplayVector(integers);
	
	return 0;
}