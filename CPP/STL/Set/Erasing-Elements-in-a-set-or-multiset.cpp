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

    std::set<int> setOfInts {-1 , 0 , 1, 2, 3};
    DisplayContent(setOfInts); // output : -1 0 1 2 3
    // Erase one elemment, e.g. 0 , given a key
    setOfInts.erase(0);
    DisplayContent(setOfInts); // output : -1 1 2 3 (0 erased)
    // Erase one elemment, e.g. 0 , given an iterator points to the element
    auto element = setOfInts.find(-1);
    if (element != setOfInts.end()) // Check if element is found before erasig
        setOfInts.erase(element);
    DisplayContent(setOfInts); // output : 1 2 3 (-1 erased)
    // Erase range of elements, e.g. [0,1] (i.e. element 1 and 2). USing iterators.
    element = setOfInts.find(3);
    if (element != setOfInts.end()) // Check if element is found before erasig
        setOfInts.erase(setOfInts.begin() , element); // NOTE: elemnt will not be included in the erase range
    DisplayContent(setOfInts); // output : 3 (1 2 erased)
   cout << endl;


    std::multiset<int> multisetOfInts {-1, -1 , 0 , 1, 1, 2, 3};
    DisplayContent(multisetOfInts); // output : -1 -1 0 1 1 2 3
    // Erase one elemment, e.g. 0 , given a key
    multisetOfInts.erase(-1); // NOTE: all duplicates will be erased
    DisplayContent(multisetOfInts); // output : 0 1 1 2 3 (0 erased)
    // Erase one elemment, e.g. 0 , given an iterator points to the element
    element = multisetOfInts.find(0);
    if (element != multisetOfInts.end()) // Check if element is found before erasig
        multisetOfInts.erase(element);
    DisplayContent(multisetOfInts); // output : 1 2 3 (0 erased)
    // Erase range of elements, e.g. [0,1] (i.e. element 1 and 2). USing iterators.
    element = multisetOfInts.find(3);
    if (element != multisetOfInts.end()) // Check if element is found before erasig
        multisetOfInts.erase(multisetOfInts.begin() , element); // NOTE: elemnt will not be included in the erase range
    DisplayContent(multisetOfInts); // output : 3 (1 2 erased)
    cout << endl;
    
    return 0;
}