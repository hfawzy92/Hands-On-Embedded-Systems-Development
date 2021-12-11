#include <stdio.h>

int (*fptr1)(int); // declaring fptr1 as a pointer to a function that takes int argument , and returns int variable

int square(int num) {
	return num * num;
}

int main() {
	int n = 5;
	// int (*fptr1)(int); -> declaration could be done here also.
	fptr1 = square;
	printf("%d squared is %d\n" , n, fptr1(n));
	return 0;
}