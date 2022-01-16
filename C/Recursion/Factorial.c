#include <stdio.h>

int factorial(int n) {
    while(n) {
        return n * factorial(n-1);
    }
    return 1;
}

int main() {
    int num , results;
    printf("Please Enter A Number");
    num = getchar();
    printf("Factorial(%d) = %d\n", num , factorial(num));
}