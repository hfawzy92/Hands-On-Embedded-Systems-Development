/*

*/
#include <stdio.h>
#include <stdlib.h>

void correctAllocateArray(int **arr, int size , int initialValue) {
	*arr = (int *) malloc( size * sizeof(int) );
	if(*arr != NULL) {
		for( int i = 0 ; i < size ; i++ ) {
			*(*arr+i) = initialValue;
		}	
	}
}

void incorrectAllocateArray(int *arr, int size , int initialValue) {
	arr = (int *) malloc( size * sizeof(int) );
	if(arr != NULL) {
		for( int i = 0 ; i < size ; i++ ) {
			arr[i] = initialValue;
		}	
	}
}

int main() {
	int size = 10 , initialValue = 4;
	int *vector , *vector2 = NULL;
	correctAllocateArray(&vector, size , initialValue);
	incorrectAllocateArray(vector2, size , initialValue);
	printf("vector = %p \n" , vector);
	printf("vector2 = %p \n" , vector2);
	for( int i = 0 ; i < size ; i++ ) {
		printf("vector[%d] = %d \n" , i , vector[i]);
	}
	return 0;
}

/*

*/