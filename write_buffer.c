#include "main.h"

/* function to write into the buffer */
/**
 * write_buffer - it is a function used to write into the buffer
 * @buffer: points to the buffer
 * @len: the length of the buffer to be stored
 * Return: write to the standard output
 */
int write_buffer(char *buffer, int len)
{
	return (write(1, buffer, len));
}
