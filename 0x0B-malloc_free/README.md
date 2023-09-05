0x0B. C - malloc, free

Directory: 0x0B-malloc_free

Files:
0-create_array.c - creates an array of chars and initializes it with a specific char.
		Prototype: char *create_array(unsigned int size, char c);

1-strdup.c - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
		Prototype: char *_strdup(char *str);

2-str_concat.c - concatenates two strings.
		Prototype: char *str_concat(char *s1, char *s2);

3-alloc_grid.c - returns a pointer to a 2 dimensional array of integers.
		Prototype: int **alloc_grid(int width, int height);

4-free_grid.c - frees a 2 dimensional grid previously created by alloc_grid function.
		void free_grid(int **grid, int height);
