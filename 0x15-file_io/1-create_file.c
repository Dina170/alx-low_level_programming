#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file
 * @text_content: a ponter to the string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, w, j = 0;

	if (!filename)
		return (-1);

	while (text_content[j])
	{
		j++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fp, text_content, j);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}

