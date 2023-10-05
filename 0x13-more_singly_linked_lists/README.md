<h1>0x13. C - More singly linked lists</h1>

This directory contains more task files on singly linked lists.
<br>

0. 0-print_listint.c: &nbsp;prints all the elements of a listint_t list
   - Prototype: &nbsp;`size_t print_listint(const listint_t *h);`

1. 1-listint_len.c: &nbsp;returns the number of elements in a linked listint_t list.
   - Prototype: &nbsp;`size_t listint_len(const listint_t *h);`

2. 2-add_nodeint.c: adds a new node at the beginning of a listint_t list.
   - Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`

3. 3-add_nodeint_end.c: &nbsp; adds a new node at the end of a listint_t list
   - Prototype: &nbsp; `listint_t *add_nodeint_end(listint_t **head, const int n);`

4. 4-free_listint.c:  frees a listint_t list
   - Prototype: &nbsp; `void free_listint(listint_t *head);`

5. 5-free_listint2.c: &nbsp; frees a listint_t list.
   - Prototype: &nbsp; `void free_listint2(listint_t **head);`

6. 6-pop_listint.c: &nbsp; deletes the head node of a listint_t linked list
   - Prototype: &nbsp; `int pop_listint(listint_t **head);`

7. 7-get_nodeint.c: &nbsp; returns the nth node of a listint_t linked list
   - Prototype: &nbsp; `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
