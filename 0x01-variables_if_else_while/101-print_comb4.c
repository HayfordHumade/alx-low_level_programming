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
	int z;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 8; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				if (x == y || y == z || x == z)
				{
					continue;
				}
				putchar(48 + x);
				putchar(48 + y);
				putchar(48 + z);
				if (x == 7)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
