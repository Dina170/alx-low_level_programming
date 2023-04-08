#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, actualNum;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	actualNum = read(fp, buff, letters);

	write(STDOUT_FILENO, buff, actualNum);

	free(buff);
	close(fp);

	return (actualNum);
}
