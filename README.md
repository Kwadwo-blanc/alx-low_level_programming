Write a function that prints all the elements of a list-t list.

Prototype: size-t print-list(const list-t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

Write a function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

Write a function that adds a new node at the beginning of a list-t list.

Prototype: list-t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

Write a function that adds a new node at the end of a list-t list.

Prototype: list-t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
Write a function that frees a list-t list.

Prototype: void free-list(list-t *head);
