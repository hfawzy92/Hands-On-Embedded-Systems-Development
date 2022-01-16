#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    void *data;
    struct _node *next;
} Node;

typedef struct _linkedList {
    Node *head;
    Node *tail;
    Node *current;
    char *name;
} LinkedList;

typedef void (*Display) ( void *data );

void initialize( LinkedList *list , char *name );
void addHead ( LinkedList *list , void *data );
void addTail ( LinkedList *list , void *data );
void displayList ( LinkedList *list , Display display);