#include "main.h"

/**
 * print_integer - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */
int print_integer(va_list spec)
{
	int i = va_arg(spec, int);
	int count, j;
	char int_arr[12];

	count = 0;
	if (i)
	{
		if (i < 0)
		{
			write(1, "-", 1);
			count++;
			i = -(i);
		}
		if (i == 0)
		{
			write(1, "0", 1);
			return (1);
		}
		j = 0;
		while (i > 0)
		{
			int_arr[j++] = i % 10 + '0';
			i = i / 10;
		}
		while (j > 0)
		{
			write(1, &int_arr[--j], 1);
			count++;
		}
		return (count);
	}
	else
		return (0);
}

