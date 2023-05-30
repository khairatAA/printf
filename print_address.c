#include "main.h"

/**
 * print_address - prints an address argument to the standard output
 * @spec: it a variadic argument for specifiers
 * Return: return count if p, or else return 0
 */
int print_address(va_list spec)
{
	int count = va_arg(spec, signed int);

	return (count);
}
