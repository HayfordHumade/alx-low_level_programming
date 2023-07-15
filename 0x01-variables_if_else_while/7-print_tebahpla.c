#include <stdio.h>
/**
 * main - runs from start to finish
 *
 * Description: This code counts numbers backwards
 * Return: always returns zero, 0
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
