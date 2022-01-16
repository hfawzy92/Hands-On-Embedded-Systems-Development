// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> setOfInts;
    int q;
    cin >> q;
   for (int i=q ; i > 0 ; i--) {
        int y , x;
        cin >> y >> x;
        switch (y)
        {
        case 1:
            setOfInts.insert(x);
            break;
        case 2:
            setOfInts.erase(x);
            break;
        case 3:
            if (setOfInts.find(x) != setOfInts.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}