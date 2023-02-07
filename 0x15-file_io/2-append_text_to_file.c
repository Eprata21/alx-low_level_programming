#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: terminating string
 * Return: 1 on sucess -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int new_file, len, ap;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_RDWR | O_APPEND);
	if (new_file == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		if (text_content == NULL)
		{
			close(new_file);
			return (1);
		}
		else
		{
			ap = write(new_file, text_content, len);
		}
	if (ap == -1)
		return (-1);
	close(new_file);
	return (1);
}
