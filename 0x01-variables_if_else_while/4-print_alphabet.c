#include <stdio.h>
/**
 * main - It all starts and ends here
 *
 * Description: Print small letters except q and e
 * Return: always return 0
 */
int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		if (b == 101 || b == 113)
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
