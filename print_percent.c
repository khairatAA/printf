#include "main.h"

/**
 * print_percent - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */
int print_percent(va_list spec)
{
	char percent = va_arg(spec, int);
	int count;

	count = 0;
	if (percent)
	{
		count = write(1, "%", 1);
		return (count);
	}
	else
		return (0);
}
