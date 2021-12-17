// https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int vectSize , element;
    cin >> vectSize;
    vector<int> integers(vectSize);

    for(int i = 0 ; i < vectSize ; i++) {
        cin >> integers[i];
    }

    sort(integers.begin(),integers.end());

    for(int i = 0 ; i < vectSize ; i++) {
        cout << integers[i] << " ";
    }

    return 0;
}
