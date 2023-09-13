0x0F. C - Function pointers

Learning about function pointers. Below are files contained in this directory
and thier prototypes as well as descriptions.

0-print_name.c		prints a name
	Prototype:	void print_name(char *name, void (*f)(char *));

1-array_iterator.c	executes a function given as a paramter on each element of array
	Prototype:	void array_iterator(int *array, size_t size, void (*action)(int));
