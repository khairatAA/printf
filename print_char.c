#include "main.h"

/**
 * print_char - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */
int print_char(va_list spec)
{
	char c = va_arg(spec, int);
	int count;

	count = 0;
	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	else
		return (0);
}
