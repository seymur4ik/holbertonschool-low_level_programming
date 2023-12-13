#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: If filename is NULL return -1
 *	If text_content is NULL, do not add anything to the file.
 *	Return 1 if the file exists and
 *	-1 if the file does not exist or if you do not have the required permissions
 *	to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int v_open, v_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
		while (text_content[len])
			len++;

	v_open = open(filename, O_CREAT | O_RDWR | O_APPEND);
	v_write = write(v_open, text_content, len);

	if (v_open == -1 || v_write == -1)
		return (-1);

	close(v_open);
	return (1);
}
