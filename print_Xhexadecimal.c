#include "main.h"

/**
 * print_Xhexadecimal -  prints a hexadecimal equivalentn of a decimal number
 * @spec: varaidic argument
 * Return: return
 */


int print_Xhexadecimal(va_list spec)
{
	unsigned int X;
	int i, count, p;
	int a[33];

	count = 0;
	X = va_arg(spec, unsigned int);
	if (X)
	{
		if (X == 0)
		{
			write(1, "0", 1);
			count++;
		}
		else
		{
			i = 0;
			while (X > 0)
			{
				p = X % 16;
				if (p < 10)
					a[i++] = p + '0';
				else
					a[i++] = p + 55;
				X = X / 16;
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
