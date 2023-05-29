#include "main.h"

/**
 * get_spec_func - selects the correct specifier to use
 * and performs the function.
 *
 * @format: this is the (char *) which is the specifier to check for
 * Return: a function pointer
 */
int (*get_spec_func(const char *format))(va_list)
{
	spec spec_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"b", print_binary},
		{"d", print_signed_decimal},
		{"i", print_integer},
		{"o", print_octal},
		{"u", print_unsigned_decimal},
		{"x", print_xhexadecimal},
		{"X", print_Xhexadecimal},
		{"S", print_special_str},
		{"p", printf_address},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (spec_arr[i].spec != NULL)
	{
		if (*(spec_arr[i].spec) == *format)
		{
			return (spec_arr[i].f);
		}
		i++;
	}

	return (NULL);
}
