#include "main.h"

/**
 * print_str - prints a character argument to the standard output
 *
 * @spec: it a variadic argument for specifiers
 * Return: return count if c, or else return 0
 */

int print_str(va_list spec)
{
	const char *s = va_arg(spec, char *);
	int count;
	int str_len;

	count = 0;
	if (s)
	{
		str_len = 0;
		while (s[str_len] != '\0')
		{
			str_len++;
		}
		count = write(1, s, str_len);
		return (count);
	}
	else
		return (0);
}
