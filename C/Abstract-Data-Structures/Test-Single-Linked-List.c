#include "Single-Linked-List.h"

void displayListOfIntegers ( void *data ) {
    if(data != NULL) {
        int *intToDisplay = (int *) data;
        printf( "%d\n" , *intToDisplay );
    }
}

int main() {

    LinkedList listOfIntegers;
    LinkedList listOfIntegers_2;

    int *int_1 = (int *) malloc( sizeof(int) );
    int *int_2 = (int *) malloc( sizeof(int) );
    int *int_3 = (int *) malloc( sizeof(int) );
 
    *int_1 = 1;
    *int_2 = 2;
    *int_3 = 3;

    initialize( &listOfIntegers , "listOfIntegers" );
    addHead( &listOfIntegers , int_1 );
    addHead( &listOfIntegers , int_2 );
    addHead( &listOfIntegers , int_3 );
    displayList( &listOfIntegers , displayListOfIntegers );

    initialize( &listOfIntegers_2 , "listOfIntegers_2" );
    addTail( &listOfIntegers_2 , int_1 );
    addTail( &listOfIntegers_2 , int_2 );
    addTail( &listOfIntegers_2 , int_3 );
    displayList( &listOfIntegers_2 , displayListOfIntegers );
}