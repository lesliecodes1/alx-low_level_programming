#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to append to file
 * Return: 1 if successful,
 * -1 if unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes = open(filename, O_WRONLY | O_APPEND);
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
