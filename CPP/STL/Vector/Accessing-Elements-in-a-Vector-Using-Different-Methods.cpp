/*
We can access elements of a vector using 3 methods:
1. array semantics using subscript operator []
2. vector class member function -> at()
3. iterators 
*/

#include <iostream>
#include <vector>
using namespace std;

void SubsriptVectAccess(const vector<int> &vect) {
    cout << "SubsriptVectAccess \n";
    for (int i=0 ; i < vect.size() ; i++) {
        cout << "integers[" << i << "] =" << vect[i];
        cout << endl;
    }
}

void AtVectAccess(const vector<int> &vect) {
    cout << "AtVectAccess \n";
    for (int i=0 ; i < vect.size() ; i++) {
        cout << "integers[" << i << "] =" << vect.at(i);
        cout << endl;
    }
}

void IteratorVectAccess(const vector<int> &vect) {
	
	for (auto element = vect.cbegin() ;
	     element != vect.cend() ;
		 ++element) {
		cout << "integers[" << distance(vect.cbegin() , element) << "] =" << *element;
        cout << endl;
	}
}

int main() {
	
	vector<int> integers(10, 0); // 10 elements , all zeors
	SubsriptVectAccess(integers);
    cout << endl;
	AtVectAccess(integers);
    cout << endl;
    IteratorVectAccess(integers);
	return 0;
}