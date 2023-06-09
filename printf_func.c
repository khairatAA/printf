#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: is a character string. The format string is
 * composed of zero or more directives.
 * @...: vardadic function
 * Return: the number of characters printed (excluding
 * the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list spec;
	int i, count_tmp, count;

	va_start(spec, format);
	i = 0, count_tmp = 0, count = 0;
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%') /* not % and not end of string*/
		{
			count_tmp = write(1, &format[i], 1);
			count += count_tmp;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			int (*f)(va_list) = get_spec_func(&format[i + 1]);

			if (f != NULL)
			{
				count_tmp = f(spec);
				count += count_tmp;
				i += 2;
				continue;
			}
			if (format[i + 1] != '\0')
			{
				count_tmp = write(1, &format[i], 1);
				count += count_tmp;
				i++;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
		}
	}
	va_end(spec);
	return (count);
}
