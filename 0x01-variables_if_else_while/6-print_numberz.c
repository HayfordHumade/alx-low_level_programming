#include <stdio.h>
/**
 * main - runs over
 *
 * Description: putchar 0 to 9
 * Return: always return 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(48 + x);
	}
	putchar('\n');
	return (0);
}
