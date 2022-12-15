#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - this reads a text file and prints it to a standard POSIX
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: This returns the actula nmber of lettters it was able to read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t len_read, len_write;
	char *buf;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_d);
		return (0);
	}
	len_read = read(file_d, buf, letters);
	close(file_d);
	if (len_read == -1)
	{
		free(buf);
		return (0);
	}
	len_write = write(STDOUT_FILENO, buf, len_read);
	free(buf);
	if (len_read != len_write)
		return (0);
	return (len_write);
}
