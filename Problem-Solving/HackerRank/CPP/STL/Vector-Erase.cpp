// https://www.hackerrank.com/challenges/vector-erase/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int vectSize;
    cin >> vectSize;

    vector<int> integers(vectSize);

    for(int i = 0 ; i < vectSize ; i++) {
        cin >> integers[i];
    }

    int lower , upper;
    cin >> lower;
    integers.erase(integers.cbegin()+lower-1);
    cin >> lower >> upper;
    integers.erase(integers.cbegin()+lower-1 , integers.cbegin()+upper-1);

    cout << integers.size() << endl;
    for(int i = 0 ; i < integers.size() ; i++) {
        cout << integers[i] << " ";
    }
    return 0;
}