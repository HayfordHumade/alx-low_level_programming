#include <stdio.h>
#include <time.h>
/**
 * main - A function to return state of random tpe
 *
 * @n: Random number
 * Description: Generate a random number n and find out 
 * if it is signed or unsigned.
 * return: signed or unsigned
 * /
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
