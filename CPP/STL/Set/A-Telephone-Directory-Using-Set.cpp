#include <iostream>
#include <string>
#include <set>
using namespace std;

template <typename T>
void DisplayContent(const T &container) { // takes ref. to constant container of type T
    // Loop over the container's elements using constant iterator
    for ( auto element = container.cbegin(); // auto deduct element type
          element != container.cend();
          ++element) {
              std::cout << *element << endl;
    }
    cout << endl;
}

int main () {

    
    return 0;
}