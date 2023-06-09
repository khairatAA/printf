#ifndef MAIN_H
#define MAIN_H

/* Including of header files */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
int _printf(const char *format, ...);
int (*get_spec_func(const char *format))(va_list);
int print_char(va_list spec);
int print_str(va_list spec);
int print_percent(va_list spec);
int print_binary(va_list spec);
int print_signed_decimal(va_list spec);
int print_integer(va_list spec);
int print_octal(va_list spec);
int print_unsigned_decimal(va_list spec);
int print_xhexadecimal(va_list spec);
int print_Xhexadecimal(va_list spec);
int print_special_str(va_list spec);
int print_address(va_list spec);

/* Structure defination */
/**
 * struct spec - sturcture that contains the various specifier
 *
 * @spec: the specifier
 * @f: the function associated
 */
typedef struct spec
{
	char *spec;
	int (*f)(va_list);
} spec;

/* function to write into the buffer */

int write_buffer(char *buffer, int len);

#endif /* MAIN_H */
