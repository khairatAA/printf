#include "main.h"

/**
 * print_signed_decimal - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */
int print_signed_decimal(va_list spec)
{
	int d = va_arg(spec, int);
	int count = 0, i = 0, buffer_i = 0;
	char dec_arr[12];
	char buffer[1024];

	if (d)
	{
		if (d < 0)
		{
			buffer[buffer_i++] = '-';
			count++;
			d = -(d);
		}
		if (d == 0)
		{
			buffer[buffer_i++] = '0';
			return (1);
		}
		while (d > 0)
		{
			dec_arr[i++] = d % 10 + '0';
			d = d / 10;
		}
		while (i > 0)
		{
			buffer[buffer_i++] = dec_arr[--i];
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
