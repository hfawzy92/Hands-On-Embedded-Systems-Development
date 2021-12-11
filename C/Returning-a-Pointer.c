/*
To return an object from a function , you can use the following techniques:
1. Allocate memory within the function using malloc and return its address.
2. Pass an object to the function where it is modified. This makes the allocation and deallocation of the object’s memory the caller’s responsibility.
*/
#include <stdio.h>
#include <stdlib.h>

int* allocateArray( int size , int initialValue) {
	int *arr = (int *) malloc( size * sizeof(int) );
	for( int i = 0 ; i < size ; i++ ) {
		arr[i] = initialValue;
	}
	return arr;
}

int main() {
	int size = 10 , initialValue = 7;
	int *vector = allocateArray(size , initialValue);
	for( int i = 0 ; i < size ; i++ ) {
		printf("vector[%d] = %d \n" , i , vector[i]);
	}
	return 0;
}

/*
Although this programs works fine , but some problems could happen when we return a pointer from a function , in cases such as :
1. unitialized pointer
2. pointer to invalid address
3. pointer to local address
4. inability to free the pointer
*/