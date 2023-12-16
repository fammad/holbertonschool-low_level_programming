#include "main.h"
/**
 *read_texfile - a function that reads a file and prints several letters
 *@filename: Pointer to the string with null terminated
 *@letters: NUmber of letters to be printed
 *Return: Lenght of the actual number of letters it could read and print
 * /
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);
	int *fn = open(filename, O_RDONLY);
	
	if (fn == -1)
		return (0);
	ssize_t total_read = 0;
	char buffer[BUFSIZ];
	ssize_t read_byte;

	while(read_byte = read(fd, buffer, MIN(BUFSIZ, letters - total_read)
	{
		total_read = total_read + read_byte;
		letters = letters - read_byte;
		if ( write(STDOUT_FILENO, buffer, read_bytes)
		{
			close(fn);
			return(0);
		}
		if (total_read >= letters || read_bytes == 0)
			brake;
	}
	close (fd);
	return (total_read);
}
