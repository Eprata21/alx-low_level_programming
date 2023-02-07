#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: new file
 * Return: 1 if it success -1 if it fail
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, len, wr_state;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
		if (new_file == -1)
			return (-1);
	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	wr_state = write(new_file, text_content, len);
	if (close(new_file) == -1)
		return (-1);
	return (wr_state == -1 ? -1 : 1);
}
