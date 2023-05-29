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
	int a[16];

	count = 0;
	b = va_arg(spec, int);
	if (b)
	{
		for (i = 0; b > 0; i++)
		{
			a[i] = b % 2;
			b = b / 2;
		}

		while (i > 0)
		{
			write(1, &a[--i], 1);
			count++;
		}
		return (count);
	}
	else
		return (0);
}

