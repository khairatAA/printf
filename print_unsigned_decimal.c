#include "main.h"

/**
 * print_unsigned_decimal - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */
int print_unsigned_decimal(va_list spec)
{
	int u = va_arg(spec, int);
	int count, i;
	char dec_arr[12];

	count = 0;
	if (u)
	{
		if (u < 0)
		{
			u = -1 * (u);
			write(1, &u, 1);
			count++;
		}
		if (u == 0)
		{
			write(1, "0", 1);
			count++;
		}
		else
		{
			i = 0;
			while (u > 0)
			{
				dec_arr[i++] = u % 10 + '0';
				u = u / 10;
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
