#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main()
{
    printf("Hello world!\n");
    /**< Crearea primului nod din lista */
    node_t *head = NULL;
    head = malloc(sizeof(node_t));
    if(head==NULL){
        return 1;
    }
    head->val =1;
    head->next = NULL;

    pushAtEnd(head, 2);
    pushAtEnd(head, 3);
    pushAtEnd(head, 4);

    pushAtBeg(&head, 5);
    pushAtBeg(&head, 6);
    pushAtBeg(&head, 7);

    print_lista(head);

    popFirst(&head);
    remove_last(head);
    remove_by_index(&head, 3);

    printf("NOUA LISTA DUPA STERGERE:\n");
    print_lista(head);
    return 0;
}
