#include<stdio.h>

int initilizedGlobal =7;
int uninitilizedGlobal;
static int staticinitilizedGlobal = 5;
static int staticUninitilizedGlobal;

int main() {
    int num1 = 1 , num2 = 2;
    static int mySum;
    mySum = sum(num1 , num2);
    printf("%d + %d = %d", num1 , num2 , mySum);
    return 0;
}