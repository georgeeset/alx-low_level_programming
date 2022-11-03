#include "main.h"

/**
 * append_text_to_file - appends test at eht end of a file
 * @filename: name of file to append
 * @text_content: text to add to file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int status;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		status = write(fd, text_content, letters);

		if (status == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
