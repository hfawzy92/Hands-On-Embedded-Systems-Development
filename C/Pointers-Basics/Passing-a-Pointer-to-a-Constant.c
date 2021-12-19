#include <stdio.h>

void passingAddressOfConstants(int * num1 , int * num2) {
	*num1 = *num2;
}

int main() {
	const int limit = 100;
	int result = 5;
	passingAddressOfConstants(&limit, &result);
	return 0;
}

/*
Compilation error:
Passing-a-Pointer-to-a-Constant.c: In function 'main':
Passing-a-Pointer-to-a-Constant.c:10:28: warning: passing argument 1 of 'passingAddressOfConstants' discards 'const' qualifier from pointer target type [-Wdiscarded-qualifiers]
   10 |  passingAddressOfConstants(&limit, &result);
      |                            ^~~~~~
Passing-a-Pointer-to-a-Constant.c:3:38: note: expected 'int *' but argument is of type 'const int *'
    3 | void passingAddressOfConstants(int * num1 , int * num2) {
      |                                ~~~~~~^~~~
*/