#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of a text
 * Return: if the file already exists, truncate it
 *	if filename is NULL return -1
 *	if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, v_open, v_write;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len] != '\0')
			len++;

	v_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	v_write = write(v_open, text_content, len);


	if (v_open == -1 || v_write == -1)
	{
		return (-1);
	}

	close(v_open);
	return (1);

}
