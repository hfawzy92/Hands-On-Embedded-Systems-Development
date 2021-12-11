/*
When a pointer is passed to a function, it is always good practice to verify it is not null before using it.
*/
#include <stdio.h>
#include <stdlib.h>

int* initializeArray( int *arr , int size , int initialValue) {
	if( arr != NULL ){
		for( int i = 0 ; i < size ; i++ ) {
		arr[i] = initialValue;
		}
	}
	return arr;
}

int main() {
	int size = 15 , initialValue = 7;
	int *vector = (int*) malloc(size * sizeof(int));
	initializeArray(vector, size , initialValue);
	for( int i = 0 ; i < size ; i++ ) {
		printf("vector[%d] = %d \n" , i , vector[i]);
	}
	return 0;
}

/*

*/