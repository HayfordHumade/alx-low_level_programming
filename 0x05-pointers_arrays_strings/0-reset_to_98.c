#include <stdio.h>
/**
 * reset_to_98 - takes pointer to an int
 * @n: this is an integer pointer variable
 *
 * Description: takes pointer to 98
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Run it all
 *
 * Description: Something happens in here
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
