#include "stdio.h"

/**
 * main - function prints the number of arguments passed
 * into argv
 * @argc: length of arguments passed
 * @argv: list of string arguments;
 * Return: 0
 */

int main (int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
