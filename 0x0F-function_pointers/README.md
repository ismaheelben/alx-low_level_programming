Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));
Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
Write a program that performs simple operations.

You are allowed to use the standard library
3-get_op_func.c

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

Prototype: int (*get_op_func(char *s))(int, int);
3-main.c

This file should contain your main function only.
with one advance
