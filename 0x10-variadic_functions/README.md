0x10. C - Variadic functions

Learning about stdarg.h in the C Library and macros such as va_start, va_arg, etc

Variadic functions are functions which may take a variable number of
arguments and are declared with an ellipsis in place of the last parameter.

0-sum_them_all.c		returns sum of all it's parameters
	Prototype		int sum_them_all(const unsigned int n, ...);

1-print_numbers.c		prints numbers followed by a new line
	Prototype		void print_numbers(const char *separator, const unsigned int n, ...);

2-print_strings.c		prints strings followed by a new line
	Prototype		void print_strings(const char *separator, const unsigned int n, ...);

3-print_all.c			prints anything
	Prototype		void print_all(const char * const format, ...);
