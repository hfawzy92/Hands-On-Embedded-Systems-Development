// https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int sol_1() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int vectSize;
    cin >> vectSize;

    vector<int> integers(vectSize);
    for(int i = 0 ; i < vectSize ; i++) {
        cin >> integers[i];
    }
    int queries;
    cin >> queries;
    vector<int> values(queries);
    vector<int>::iterator lowerBound;
    for(int i = 0 ; i < queries ; i++) {
        cin >> values[i];
    }

    for(int i = 0 ; i < queries ; i++) {
        lowerBound = lower_bound(integers.begin() , integers.end() , values[i]);
        if (*lowerBound == values[i]) {
            cout << "Yes " << (lowerBound - integers.begin() +1) << endl;
        }
        else {
            cout << "No " << (lowerBound - integers.begin() +1) << endl;
        }
    }
    return 0;
}

int sol_2() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int vectSize;
    cin >> vectSize;

    vector<int> integers(vectSize);
    for(int i = 0 ; i < vectSize ; i++) {
        cin >> integers[i];
    }
    int queries , value;
    cin >> queries;
    vector<int>::iterator lowerBound;
    for(int i = 0 ; i < queries ; i++) {
        cin >> value;
        lowerBound = lower_bound(integers.begin() , integers.end() , value);
        if (*lowerBound ==value) {
            cout << "Yes " << (lowerBound - integers.begin() +1) << endl;
        }
        else {
            cout << "No " << (lowerBound - integers.begin() +1) << endl;
        }
    }
    return 0;
}

int main() {

    sol_2();
    return 0;
}