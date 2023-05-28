#include "main.h"

/**
 * print_signed_decimal - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return - return count if c, or else return 0
 */
int print_signed_decimal(va_list spec)
{
	int d = va_arg(spec, int);
	int count, i;
	char dec_arr[12];

	count = 0;
	if (d)
	{
		if (d < 0)
		{
			write(1, "-", 1);
			d = -(d);
			count++;
		}
		if (d == 0)
		{
			write(1, "0", 1);
			count++;
		}
		else
		{
			i = 0;
			while (d > 0)
			{
				dec_arr[i++] = d % 10 + '0';
				d = d / 10;
			}
		}
		while (i > 0)
		{
			write(1, &dec_arr[--i], 1);
			count++;
		}
		return (count);
	}
	else
		return (0);
}
