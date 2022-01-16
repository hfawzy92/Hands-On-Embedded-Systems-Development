/* 
Structure padding is the step taken by the compiler to align the data at a memory offset.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct _person {
	char * firstName; // Size: 4 bytes
	char * lastName; // Size: 4 bytes
	char * title; // Size: 4 bytes
	unsigned int age; // Size: 4 bytes
} Person; // Size: 16 bytes


typedef struct _otherPerson {
	char * firstName; // Size: 4 bytes
	char * lastName; // Size: 4 bytes
	char * title; // Size: 4 bytes
	short age;  // Size: 2 bytes
} OtherPerson; // Size: 14 bytes

int main() {
	Person person; // object of type Person
	OtherPerson otherPerson;

    printf("Size of person %d\n", sizeof(person)); // Output: 16
    printf("Size of person %d\n", sizeof(otherPerson)); // Output: 16
	//NOTE: Size of OtherPerson should be 14 bytes , unlike Person of 16 bytes.
    //So, two bytes are padded at the end of the structure
	



	return 0;
}