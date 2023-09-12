#include <stdio.h>
/**
 * main - Print the name of the file being compiled
 *
 * Description: Do it using preprocessing directive __FILE__
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
