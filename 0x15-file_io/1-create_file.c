#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of created file
 * @text_content: content to write to file
 * Return: 1 if successful,
 * -1 if unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
	int filedes = open(filename, O_CREAT | O_TRUNC | O_WRONLY);
	fchmod(filename, 0600);
	ssize_t wr = write(filedes, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);
	if (filedes == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (wr == -1)
		{
			close(filedes);
			return (-1);
		}
	}
	close(filedes);
	return (1);
}
