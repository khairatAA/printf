#include "main.h"

/**
 * print_binary -  prints a nbinary equivalentn of a decimal number
 * @spec: varaidic argument
 * Return: return
 */


int print_binary(va_list spec)
{
	unsigned int b;
	int i, count;
	int a[33];

	count = 0;
	b = va_arg(spec, unsigned int);
	if (b)
	{
		if (b == 0)
		{
			write(1, "0", 1);
			count++;
		}
		else
		{
			i = 0;
			while (b > 0)
			{
				a[i++] = b % 2 + '0';
				b = b / 2;
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
