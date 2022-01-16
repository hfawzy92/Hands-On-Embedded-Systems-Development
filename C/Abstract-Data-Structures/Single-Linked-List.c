#include "Single-Linked-List.h"

void initialize( LinkedList *list , char *name ) {
    list->head = NULL;
    list->tail = NULL;
    list->current = NULL;
    list->name = name;
}

// Adds data to the linked list’s head
void addHead ( LinkedList *list , void *data ) {
    Node *node = (Node *) malloc( sizeof( Node ));
    node->data = data;
    if ( list->head == NULL ) {
        list->tail = node;
        node->next = NULL;
    } else {
        node->next = list->head;
    }
     list->head = node;
}

// Adds data to the linked list’s tail
void addTail ( LinkedList *list , void *data ) {
    Node *node = (Node *) malloc( sizeof( Node ));
    node->data = data;
    node->next = NULL;
    if ( list->head == NULL ) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    list->tail = node;
}

void displayList ( LinkedList *list , Display display ) {
    printf( "%s content:\n" , list->name );
    list->current = list->head;
    while ( list->current != NULL )
    {
        display( list->current->data );
        list->current = list->current->next;
    }
    printf("\n");
}