#include <stdio.h>
/**
 * main - Prints lower, uppper and next line
 *
 * Description: Does just that
 * Return: returns simply zero (0)
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
