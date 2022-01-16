#include <stdio.h>
#include <stdlib.h>

typedef struct _date {
    int day;
    int month;
    int year;
} Date;

int main() {

    Date myBirthDay = { 16 , 10 , 1992 };
    printf("My birthday is %d %d %d\n",
    myBirthDay.day,
    myBirthDay.month,
    myBirthDay.year);
    
    return 0;
}