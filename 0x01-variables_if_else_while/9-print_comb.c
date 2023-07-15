#include <stdio.h>
/**
 * main - runs to finish
 *
 * Description: Multiple combinations of single digits
 * Return: always return zero (0)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
