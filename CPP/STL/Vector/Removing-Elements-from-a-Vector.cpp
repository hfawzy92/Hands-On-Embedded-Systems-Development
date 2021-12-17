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

int main() {

    vector<int> integers {-3 , -2, -1 , 0 , 1 , 2 , 3};
    SubsriptVectAccess(integers);
    integers.pop_back(); // 3 removed
    integers.pop_back(); // 2 removed
    integers.pop_back(); // 1 removed
    integers.push_back(16);
    SubsriptVectAccess(integers);
    return 0;
    
}