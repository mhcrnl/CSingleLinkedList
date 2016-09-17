#include "linkedlist.h"

void print_lista(node_t *head){

    node_t *current = head;

    while(current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}

void pushAtEnd(node_t *head, int val){

    node_t *current = head;

    while(current->next != NULL){
        current = current->next;
    }
    //adqaugarea unui nou nod
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void pushAtBeg(node_t **head, int val){

    node_t *new_node;
    new_node = malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

int popFirst(node_t **head){

    int retval = -1;
    node_t *next_node = NULL;

    if(*head == NULL){
        return -1;
    }
    next_node = (*head)->next;
    retval =(*head)->val;
    free(*head);
    *head = next_node;
    return retval;
}

int remove_last(node_t *head){
    int retval = 0;
    //daca este un singur element in lista sterge-l
    if (head->next == NULL){
        head->val ; //?
        free(head);
        head = NULL;
        return retval;
    }
    node_t *current = head;
    while(current->next->next != NULL){
        current = current->next;
    }
    return retval;
}

int remove_by_index(node_t **head, int n){
    int i = 0;
    int retval = -1;
    node_t *current = *head;
    node_t *temp_node = NULL;

    if(n == 0) {
        return popFirst(head);
    }

    for(int i=0; i<n-1; i++){
        if(current->next == NULL){
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);
    return retval;
}
