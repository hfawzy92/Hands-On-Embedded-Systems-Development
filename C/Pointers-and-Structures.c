/*
A structure in C can be declared in a number of ways.
1. to declare a structure using the struct keyword. 
2. to use a type definition

In this example , I will use type definition (2nd way)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _person {
	char * firstName;
	char * lastName;
	char * title;
	unsigned int age;
} Person;

void PrintPerson (Person *personToPrint) {
	printf("firstName = %s\n" , personToPrint->firstName);
	printf("lastName  = %s\n" , personToPrint->lastName);
	printf("title     = %s\n" , personToPrint->title);
	printf("age       = %d\n" , personToPrint->age);
	printf("\n" , personToPrint->age);
}

int main() {
	Person person; // object of type Person
	Person *personPtr;
	
	person.firstName = "Haytham";
	person.lastName = "Fawzy";
	person.title = "Embedded Software Engineer";
	person.age = 29;
	
	personPtr = ( Person* ) malloc( sizeof(Person) );
	personPtr->firstName = "Ahmed";
	personPtr->lastName = "Fawzy";
	personPtr->title = "Web developer";
	personPtr->age = 23;
	
	PrintPerson(&person);
	PrintPerson(personPtr);
	
	return 0;
}