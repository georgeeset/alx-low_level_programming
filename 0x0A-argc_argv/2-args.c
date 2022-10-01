#include <stdio.h>

/**
 * main - print each passed argument in a nre line
 * @argc: length of arguments
 * @argv: list of string arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i ++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
