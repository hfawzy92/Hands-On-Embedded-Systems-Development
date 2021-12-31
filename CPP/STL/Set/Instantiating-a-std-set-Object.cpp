#include <iostream>
#include <set>

int main () {

    std::set<int> setOfInts;
    std::multiset<int> multisetOfInts;
    
    // You can declare iterator that points to an element of set/multiset
    std::set<int>::const_iterator setIterator;
    std::multiset<int>::const_iterator multisetIterator;
    // NOTE: const_iterator can't modify values of invoke non-constant functions

    // You can create a set from another , or part of another container
    std::set<int> setOfInts_2( setOfInts );
    std::set<int> setOfInts_2( setOfInts.cbegin() , setOfInts.cend() );

    return 0;
}