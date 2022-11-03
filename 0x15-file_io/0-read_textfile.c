#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads textfileand prints it to POSIX stdout.
 * @filename: A ponter to the name of the file.
 * @letters: the number of letters the function is supposed to read and print
 *
 * Return: The number of bytes the function can read and print or
 * 0 if the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffe, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
