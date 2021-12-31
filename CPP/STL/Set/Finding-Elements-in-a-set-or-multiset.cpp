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
    cout << endl;

    // find element with key -1 in setOfInts
    auto foundElement = setOfInts.find(-1); // returns Iterator pointing to sought-after element, or end() if not found.
    if ( foundElement != setOfInts.end() ) // foundElement iterator did not reach the end of set (i.e. element found)
        cout << "Element -1 is found at location " << distance( setOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element -1 not found !" << endl;
    // find element with key 1 in setOfInts
    foundElement = setOfInts.find(1);
    if ( foundElement != setOfInts.end() )
        cout << "Element 1 is found at location " << distance( setOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element 1 not found !" << endl;
    // find element with key 2 in setOfInts
    foundElement = setOfInts.find(2);
    if ( foundElement != setOfInts.end() )
        cout << "Element 2 is found at location " << distance( setOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element 2 not found !" << endl;
    // find element with key 5 in setOfInts
    foundElement = setOfInts.find(5);
    if ( foundElement != setOfInts.end() )
        cout << "Element 5 is found at location " << distance( setOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element 5 not found !" << endl;
    cout << endl;

    // find element with key -1 in multisetOfInts
    foundElement = multisetOfInts.find(-1); // returns Iterator pointing to sought-after element, or end() if not found.
     /* NOTE: In case of a multiset that allows multiple elements with the same value, this function finds the first value 
     that matches the supplied key. */
    if ( foundElement != multisetOfInts.end() ) // foundElement iterator did not reach the end of set (i.e. element found)
        cout << "Element -1 is found at location " << distance( multisetOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element -1 not found !" << endl;
    // find element with key 1 in multisetOfInts
    foundElement = multisetOfInts.find(1);
    if ( foundElement != multisetOfInts.end() )
        cout << "Element 1 is found at location " << distance( multisetOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element 1 not found !" << endl;
    // find element with key 2 in multisetOfInts
    foundElement = multisetOfInts.find(2);
    if ( foundElement != multisetOfInts.end() )
        cout << "Element 2 is found at location " << distance( multisetOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element 2 not found !" << endl;
    // find element with key 5 in multisetOfInts
    foundElement = multisetOfInts.find(5);
    if ( foundElement != multisetOfInts.end() )
        cout << "Element 5 is found at location " << distance( multisetOfInts.begin() , foundElement ) << endl;
    else
        cout << "Element 5 not found !" << endl;
    cout << endl;
    
    return 0;
}