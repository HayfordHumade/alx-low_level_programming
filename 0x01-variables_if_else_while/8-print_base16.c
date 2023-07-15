#include <stdio.h>
/**
 * main - always runs till it stops
 *
 * Description: output numbers base 16
 * Return: always zero (0)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
