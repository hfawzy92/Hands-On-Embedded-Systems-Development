/*
To return an object from a function , you can use the following techniques:
1. Allocate memory within the function using malloc and return its address.
2. Pass an object to the function where it is modified. This makes the allocation and deallocation of the object’s memory the caller’s responsibility.
*/
#include <stdio.h>
#include <stdlib.h>

int* allocateArray( int size , int initialValue) {
	// int *arr = (int *) malloc( size * sizeof(int) ); -> correct
	int arr[size]; // -> incorrect
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
the address of the array returned is no longer valid once the function returns because the function’s stack frame is popped off the stack.

If you compile above program , the compile will gives you below warning (see also snip-1):
Pointers-to-Local-Data.c: In function 'allocateArray':
Pointers-to-Local-Data.c:15:9: warning: function returns address of local variable [-Wreturn-local-addr]
   15 |  return arr;
      |         ^~~
*/