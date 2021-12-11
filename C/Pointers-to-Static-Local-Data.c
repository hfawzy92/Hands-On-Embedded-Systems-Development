/*
To return an object from a function , you can use the following techniques:
1. Allocate memory within the function using malloc and return its address.
2. Pass an object to the function where it is modified. This makes the allocation and deallocation of the object’s memory the caller’s responsibility.
*/
#include <stdio.h>
#include <stdlib.h>

int* allocateArray( int initialValue ) {
	// int *arr = (int *) malloc( size * sizeof(int) ); -> correct
	static int arr[10]; // -> correct
	for( int i = 0 ; i < 10 ; i++ ) {
		arr[i] = initialValue;
	}
	return arr;
}

int main() {
	int size = 10 , initialValue = 3;
	int *vector = allocateArray(initialValue);
	for( int i = 0 ; i < size ; i++ ) {
		printf("vector[%d] = %d \n" , i , vector[i]);
	}
	return 0;
}

/*
to declare "arr" variable as static will:
1. allocate "arr" outside of stack frame. And this is will solve the problem shown in Pointers-to-Local-Data.c
2. restrict the variable’s scope to the function

NOTE: the static array must be declared with a fixed size. This will limit the function’s ability to handle various array sizes.
*/