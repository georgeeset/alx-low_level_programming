#include <stdio.h>
/**
 * first_function - prints a string before main function is executed
 * Return: void
 */
void first_function(void) __attribute__((constructor));
void first_function(void)
{
	printf("You're breat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
