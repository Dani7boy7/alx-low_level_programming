#include "main.h"

/**
 *	* append_text_to_file - appends a text
 *	* @filename: a pointer to the name
 *	* @text_content: string to add
 *	* Return: -1 when not succesful
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

	if (0 == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
