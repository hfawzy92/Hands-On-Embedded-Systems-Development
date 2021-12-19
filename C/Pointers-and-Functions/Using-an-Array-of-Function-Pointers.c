#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}
int subtract(int num1, int num2) {
	return num1 - num2;
}

typedef int (*fptrOperation) (int , int);

fptrOperation operations[128] = {NULL};

/*
We can use character indexes because a character literal is an integer.
*/
void initializeOperations() {
	operations['+'] = add;
	operations['-'] = subtract;
}

int evaluate (char opcode , int num1 , int num2) {
	fptrOperation operation = operations[opcode];
	return operation(num1 , num2);
}

int main() {
	initializeOperations();
	printf("5 + 6 = %d\n" , evaluate('+' , 5 , 6));
	printf("5 - 6 = %d\n" , evaluate('-' , 5 , 6));
	return 0;
}