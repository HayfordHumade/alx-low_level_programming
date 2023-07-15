#include <stdio.h>
/**
 * main - This prints small letters
 *
 * Description: This takes integer x and
 * prints it corresponding character.
 * Return: always zero 0 output
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
