#include "main.h"

/**
 * error - prints error messages to stdout
 * @text: error message to print
 * @arg: corresponding of argument to print
 * Return: void
 */
void error(char *text, char *arg)
{
	dprintf(STDERR_FILENO, text, arg);
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument array
 * Return: exit success when successful,
 * otherwise if not successful
 */

int main(int argc, char *argv[])
{
	int filefrom, fileto, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error("Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		error("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY);
	fchmod(fileto, 0664);
	if (fileto == -1)
	{
		error("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(filefrom, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fileto, buffer, rd);
		if (wr != rd)
		{
			error("Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd == -1)
	{
		error("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(filefrom) == -1)
	{
		int *filefr = &filefrom;
		char *filef = (char *)filefr;

		error("Error: Can't close fd %s\n", filef);
		exit(100);
	}
	if (close(fileto) == -1)
	{
		int *filett = &fileto;
		char *filet = (char *)filett;

		error("Error: Can't close fd %s\n", filet);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
