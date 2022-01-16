#include <stdio.h>
#include <stdlib.h>

typedef struct _person {
	char * firstName;
	char * lastName;
	char * title;
	unsigned int age;

    struct _birthday {
    unsigned int day;
    unsigned int month;
    unsigned int year;
    } birthday; // NOTE: Don't forget to create variable of struct _birthday !

} Person;

void PrintPerson (Person *personToPrint) {
	printf("firstName = %s\n" , personToPrint->firstName);
	printf("lastName  = %s\n" , personToPrint->lastName);
	printf("title     = %s\n" , personToPrint->title);
	printf("birthday  = %d %d %d\n" , 
    personToPrint->birthday.day ,
    personToPrint->birthday.month ,
    personToPrint->birthday.year);
	printf("age       = %d\n" , personToPrint->age);
	printf("\n" , personToPrint->age);
}

int main() {
	Person person; // object of type Person
	
	person.firstName = "Haytham";
	person.lastName = "Fawzy";
	person.title = "Embedded Software Engineer";
    person.birthday.day = 16;
    person.birthday.month = 10;
    person.birthday.year = 1992;
	person.age = 29;
	
	PrintPerson(&person);

	return 0;
}