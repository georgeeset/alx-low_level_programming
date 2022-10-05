#include "main.h"

/**
 * argstostr - concatinates all string arguments provided to the program
 * @ac: first argument
 * @av: list of string argument
 * Return: pointer to concatinated arguments or NULL if no data was parsed
 */

char *argstostr(int ac, char **av)
{
	char *conc;
	int c, i, j, x;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	conc = malloc((c + 1) * sizeof(char));

	if (conc == NULL)
	{
		free(conc);
		return (NULL);
	}

	for (i = j = x = 0; x < c; j++, x++)
	{
		if (av[i][j] == '\0')
		{
			conc[x] = '\n';
			i++;
			x++;
			j = 0;
		}
		if (x < c - 1)
			conc[x] = av[i][j];
	}
	conc[x] = '\0';

	return (conc);
}
