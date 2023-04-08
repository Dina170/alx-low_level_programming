#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copies the content of a file to another file
  * @src: a pointer to the file to be copied
  * @dest: a pointer to the file to copy to
  *
  * Return: nothing
  */
void copy_file(const char *src, const char *dest)
{
	int from, to, w, actualNum;
	char buff[1024];

	from = open(src, O_RDONLY);
	if (!src || from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	actualNum = read(from, buff, 1024);
	w = write(to, buff, actualNum);
	while (actualNum > 0)
	{
		if (w == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (actualNum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}
