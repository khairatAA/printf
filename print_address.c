#include "main.h"

/**
 * print_address - prints an address argument to the standard output
 * @spec: it a variadic argument for specifiers
 * Return: return count if p, or else return 0
 */
int print_address(va_list spec)
{
	void *a = va_arg(spec, void *);
	char buffer[1024], hex_digit;
	int buffer_i = sizeof(buffer), num_digits = 0, len, i;
	unsigned long num_address;

	if (a == NULL)
		return (write(1, "(nil)", 5));
	num_address = (unsigned long)a;
	while (num_address > 0)
	{
		num_address /= 16;
		num_digits++;
	}
	num_digits = (num_digits == 0) ? 1 : num_digits;
	len = snprintf(buffer, buffer_i, "0x");
	for (i = (num_digits - 1) * 4; i >= 0; i -= 4)
	{
		hex_digit = (unsigned long)((unsigned long)a >> i) & 0xF;
		buffer[len++] = (hex_digit < 10) ? ('0' + hex_digit) :
			('a' + hex_digit - 10);
	}

	return (write(1, buffer, len));
}
