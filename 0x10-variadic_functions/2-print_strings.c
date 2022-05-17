#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to printed btw strings
 * @n: number of strings passed to the function
 * @...: other parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *string

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(lst, char*);
		if (string == NULL)
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		else
			printf("%s", string);
	}
	printf("\n");
	va_end(lst);
}
