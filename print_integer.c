#include "main.h"

/**
 * print_integer - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */
int print_integer(va_list spec)
{
	signed int i = va_arg(spec, signed int);
	int count = 0, j = 0, buffer_i = 0;
	char int_arr[12], buffer[1024];

	if (i)
	{
		if (i < 0)
		{
			buffer[buffer_i++] = '-';
			count++;
			i = -(i);
		}
		if (i == 0)
		{
			buffer[buffer_i++] = '0';
			return (1);
		}
		while (i > 0)
		{
			int_arr[j++] = i % 10 + '0';
			i = i / 10;
		}
		while (j > 0)
		{
			buffer[buffer_i++] = int_arr[--j];
			count++;
			if (buffer_i >= (int)sizeof(buffer))
			{
				write_buffer(buffer, buffer_i);
				buffer_i = 0;
			}
		}
	}
	else
		return (0);
	if (buffer_i > 0)
		write_buffer(buffer, buffer_i);
	return (count);
}
