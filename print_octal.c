#include "main.h"

/**
 * print_octal -  prints a octal equivalent of a decimal number
 * @spec: varaidic argument
 * Return: return
 */

int print_octal(va_list spec)
{
	unsigned int o;
	int i, count;
	int a[33];

	count = 0;
	o = va_arg(spec, unsigned int);
	if (o)
	{
		if (o == 0)
		{
			write(1, "0", 1);
			count++;
		}
		else
		{
			i = 0;
			while (o > 0)
			{
				a[i++] = o % 8 + '0';
				o = o / 8;
			}
			while (i > 0)
			{
				write(1, &a[--i], 1);
				count++;
			}
		}
		return (count);
	}
	else
	{
		return (0);
	}
}
