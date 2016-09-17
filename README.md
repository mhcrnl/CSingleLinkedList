# Single Linked List

```c
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
```

[https://github.com/matthew-an/LinkedList](https://github.com/matthew-an/LinkedList)