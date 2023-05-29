#include "main.h"

/**
 * print_special_str - prints a character argument to the standard output
 * @spec: it a variadic argument for specifiers
 * Return: return count if S, or else return 0
 */
int print_special_str(va_list spec)
{
	char *S = va_arg(spec, char*);
	int count = 0, i = 0, buffer_i = 0;
	char buffer[1024];

	if (S)
	{
		for (i = 0; S[i] != '\0'; i++)
		{
			if (S[i] < 32 || S[i] >= 127)
			{
				buffer[buffer_i++] = '\\';
				buffer[buffer_i++] = 'x';
				sprintf(&buffer[buffer_i], "%02X", (unsigned char)S[i]);
				buffer_i = buffer_i + 2;
				count = count + 4;
			}
			else
			{
				buffer[buffer_i++] = S[i];
				count++;
			}

			if (buffer_i >= (int) sizeof(buffer) - 5)
			{
				write_buffer(buffer, buffer_i);
				buffer_i = 0;
			}
		}
	}
	if (buffer_i > 0)
		write_buffer(buffer, buffer_i);
	return (count);
}
