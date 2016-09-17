#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node_t;

/**< Afisarea elementelor din lista  */
void print_lista(node_t *head);
/**< Adaugarea unui element la sfarsitul listei */
void pushAtEnd(node_t *head, int val);
/**< Adaugarea unui element la inceputul listei */
void pushAtBeg(node_t **head, int val);
/**< Stergerea primului element din lista */
int popFirst(node_t **head);
/**< Stergerea ultimului element din lista NU FUNCTIONEAZA */
int remove_last(node_t *head);
/**< Stergerea elementului de la indexul n */
int remove_by_index(node_t **head, int n);

#endif // LINKEDLIST_H_INCLUDED
