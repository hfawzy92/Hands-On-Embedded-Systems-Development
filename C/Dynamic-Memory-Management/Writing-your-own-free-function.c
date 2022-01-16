/*
The free function does not check the pointer passed to see whether it is NULL and does not set the pointer to NULL before it returns. Setting a pointer to NULL after freeing is a good practice.
*/

#include <stdio.h>
#include <stdlib.h>

void safeFree (void **pAllocatedMem);

#define	SafeFree(pp)	safeFree((void **)&(pp))
#define	UnSafeFree(pp)	free((void *)(pp))

void safeFree (void **pAllocatedMem) {
	if( pAllocatedMem != NULL && *pAllocatedMem != NULL ) {
		free(*pAllocatedMem);
		*pAllocatedMem = NULL;
	}
}

int SafeUseCase() {
	printf("SafeUseCase executing..\n");
	int *pInt = (int *) malloc( sizeof(int) );
	*pInt = 5;
	printf("Before %p\n" , pInt);
	SafeFree(pInt);
	printf("After %p\n" , pInt);
	SafeFree(pInt);
	return (EXIT_SUCCESS);
}

int UnSafeUseCase() {
	printf("UnSafeUseCase executing..\n");
	int *pInt = (int *) malloc( sizeof(int) );
	*pInt = 5;
	printf("Before %p\n" , pInt);
	UnSafeFree(pInt);
	printf("After %p\n" , pInt);
	UnSafeFree(pInt);
	return (EXIT_SUCCESS);
}

int main () {
	SafeUseCase();
	UnSafeUseCase();
	return 0;
}