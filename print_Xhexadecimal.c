#include "main.h"
/**
 * print_Xhexadecimal -  prints a hexadecimal equivalentn of a decimal number
 * @spec: varaidic argument
 * Return: return
 */
int print_Xhexadecimal(va_list spec)
{
	unsigned int X = va_arg(spec, unsigned int);
	int i = 0, count = 0, p = 0, buffer_i = 0;
	int a[33];
	char buffer[1024];

	if (X)
	{
		if (X == 0)
		{
			buffer[buffer_i++] = '0';
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
				buffer[buffer_i++] = a[--i];
				count++;
				if (buffer_i >= (int)sizeof(buffer))
				{
					write_buffer(buffer, buffer_i);
					buffer_i = 0;
				}
			}
		}
	}
	else
		return (0);
	if (buffer_i > 0)
                write_buffer(buffer, buffer_i);
        return (count);
}
