#include "main.h"

/**
 * print_address - prints an address argument to the standard output
 * @spec: it a variadic argument for specifiers
 * Return: return count if p, or else return 0
 */
int print_address(va_list spec)
{
	void *a = va_arg(spec, void *);
	char buffer[1024];
	int buffer_i = sizeof(buffer), i = buffer_i - 2, count = 2;
	unsigned long num_address;
	char hex[] = "0123456789abcdef";

	if (a == NULL)
		return (write(1, "(nil)", 5));
	buffer[buffer_i - 1] = '\0';
	num_address = (unsigned long)a;
	while(num_address > 0)
	{
		buffer[i--] = hex[num_address % 16];
		num_address = num_address / 16;
		count++;
	}
	i++;

	return (write(1, &buffer[i], buffer_i - i - 1));
}
