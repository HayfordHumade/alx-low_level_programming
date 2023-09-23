#include <stdio.h>
#include <stdlib.h>
void run_before_main(void) __attribute__((constructor));
/**
 * run_before_main - function executes before main
 *
 * Description: Ahead of main
 * Return: nothing
 */
void run_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
