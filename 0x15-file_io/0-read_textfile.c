#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads textfileand prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: the number of letters the function is supposed to read and print
 *
 * Return: The number of bytes the function can read and print or
 * 0 if the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _file;
	ssize_t _read, _write;
	char *buffer = malloc(letter);

	if (!finename || !buffer)
		return (0);

	_file = open(filename, O_RDONLY);
	if (_file == -1)
		return (0);

	_read = read(_file, buffer, letter);
	if (_read == -1)
		return (0);
	{
		close(_file);
		free(buffer);
		return (0);
	}

	buffer[letters] = '\0';

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		close(_file);
		free(buffer);
		return (0);
	}

	close(_file);
	free(buffer);
	return (_write);
}
