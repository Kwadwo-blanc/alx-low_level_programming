#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
int _putchar(char c);

/* Prototype for print_name function */
void print_name(char *name, void (*f)(char *));

/* Prototype for array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Prototype for int_index function */
int int_index(int *array, int size, int (*cmp)(int));

/* Prototype for get_op_func function */
int (*get_op_func(char *s))(int, int);

/* Prototypes for mathematical operation functions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* FUNCTION_POINTERS_H */
