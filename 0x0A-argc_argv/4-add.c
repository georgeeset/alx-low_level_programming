#include <stdio.h>
#include <stdlib.h>

int isDigit(char n);
/**
 * main - add two number and dprint
 * @argv: array of string arguments
 * @argc: lenth of argv
 * Return: 0 if success of 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isDigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

/**
 * isDigit - checks if a given character is a number
 * @n: given character
 * Return: 0 if not a number and 1 if is a number
 */

int isDigit(char n)
{
	if (n >= 48 && n <= 57)
		return (1);
	/*if (n == '-')*/
	/*return (1);*/
	return (0);
}
