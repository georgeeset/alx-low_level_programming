#include <stdio.h>

/**
 * main - prints the name of program followed by
 * new line
 * @argc: length of given parameters
 * @argv: list of string parameters includeing program name
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
