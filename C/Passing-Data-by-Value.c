#include <stdio.h>

void swapWithValues(int pnum1 , int pnum2) {
	int tmp;
	tmp = pnum1;
	pnum1 = pnum2;
	pnum2 = tmp;
}

int main() {
	int n1 = 5;
	int n2 = 10;
	swapWithValues(n1 , n2);
	printf("After swapping: n1 = %d , n2 = %d", n1 , n2);
	return 0;
}

/*
Swapping will not work because the integers were passed by value and not by pointer.

Only a copy of the arguments is stored in num1 and num2. If we modify num1, then the argument n1 is not changed. When we modify the parameters, we are not modifying the original arguments.
*/