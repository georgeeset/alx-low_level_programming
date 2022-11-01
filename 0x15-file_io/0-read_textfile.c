#include "main.h"

/**
 * Reads a text and prints it to posix standart output
 * @filename: name of file to read
 * @size: length of string to pa
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl = 0;
	char *str;
	ssize_t length;

	if (!filename || !letters)
		return (0);

	str = malloc(letters * sizeof(char));
	if(str == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);

	length = read(fl, str, letters);
	if (length == -1)
	{
		free(str);
		close(fl);
		return (0);
	}

	printf("%s\n", str);
	close(fl);
	free(str);
	return (length);
}
