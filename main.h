#ifndef MAIN_H
#define MAIN_H

/* Including of header files */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* Function prototypes */
int _printf(const char *format, ...);
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

#endif /* MAIN_H */
