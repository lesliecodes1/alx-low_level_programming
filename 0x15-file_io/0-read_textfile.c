#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: path of file
 * @letters: no of charsacters to print and read
 * Return: no of letters printed if successful,
 * 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes = open(filename, O_RDONLY);
	char *str = malloc(sizeof(char) * letters);
	ssize_t rd = read(filedes, str, letters);
	ssize_t wr = write(STDOUT_FILENO, str, rd);

	if (filename == NULL)
		return (0);
	if (filedes == -1)
		return (0);
	if (str == NULL)
	{
		close(filedes);
		return (0);
	}
	if (rd == -1)
	{
		close(filedes);
		free(str);
		return (0);
	}
	if (wr == -1 || wr != rd)
	{
		close(filedes);
		free(str);
		return (0);
	}
	close(filedes);
	free(str);
	return (wr);
}
