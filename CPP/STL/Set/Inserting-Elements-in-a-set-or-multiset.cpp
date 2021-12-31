#include <iostream>
#include <set>
using namespace std;

template <typename T>
void DisplayContent(const T &container) { // takes ref. to constant container of type T
    // Loop over the container's elements using constant iterator
    for ( auto element = container.cbegin(); // auto deduct element type
          element != container.cend();
          ++element) {
              std::cout << *element << " ";
    }
    std::cout << std::endl;
}

int main () {

    std::set<int> setOfInts {-1 , 0 , 1};
    DisplayContent(setOfInts); // output : -1 0 1
    setOfInts.insert(2); // output : -1 0 1 2
    DisplayContent(setOfInts);
    setOfInts.insert(-1); // -1 will not be inserted in the set (duplicate)
    DisplayContent(setOfInts); // output : -1 0 1 2 (no change)
    cout << endl;
    std::multiset<int> multisetOfInts {-1 , 0 , 1};
    DisplayContent(multisetOfInts); // output : -1 0 1
    multisetOfInts.insert(2); // output : -1 0 1 2
    DisplayContent(multisetOfInts);
    multisetOfInts.insert(-1); // -1 will  be inserted in the multiset (accepts duplicate)
    DisplayContent(multisetOfInts); // output : -1 -1 0 1 2 (not that set is re-ordered ascendingly after the last insertion)
    cout << endl;
    cout << "Number of instances of '-1' in the multiset are: ";
    cout << multisetOfInts.count(-1) << endl; //count(x) to find how many values of x in a set/multiset
    return 0;
}