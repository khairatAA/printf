#include "main.h"

/**
 * print_binary -  prints a nbinary equivalentn of a decimal number
 * @spec: varaidic argument
 * Return: return
 */


int print_binary(va_list spec)
{
	unsigned int b;
	int i, count, count2;
	int a[32];

	count = 0;
	count2 = 0;
	b = va_arg(spec, int);
	if (b)
	{
		for (i = 0; b > 0; i++)
		{
			a[i] = b % 2;
			b = b / 2;
			count2 += 1;
		}

		for (i = count2 - 1; i >= 0; i--)
		{
			count = write(1, &a[i], 1);
		}
		return (count);
	}
	else
		return (0);
}

