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

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			if (x == y)
			{
				continue;
			}
			putchar(48 + x);
			putchar(48 + y);
			if (x == 8)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
