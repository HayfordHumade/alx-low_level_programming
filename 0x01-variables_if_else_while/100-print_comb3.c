#include <stdio.h>
/**
 * main - Runs from start to finish
 *
 * Description: Combinations of digits
 * Return: returns 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			putchar(48 + x);
			putchar(48 + y);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
