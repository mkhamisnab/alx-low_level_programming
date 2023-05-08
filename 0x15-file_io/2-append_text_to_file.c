#include "main.h"

/**
 * append_text_to_file - text is appended to the end of a file.
 * @filename: points to  the name of the file.
 * @text_content: added to the end of the file.
 *
 * Return: when the function fails or filename is NULL - -1.
 *         when the file does not exist the user lacks write permissions - -1.
 *         Or else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
