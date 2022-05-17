#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: a string to be printed between numbers
 * @n: const parameter
 * @...: other parameters
 * Return: value of all parameters with separator btw if not null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

	va_start(list, n);
	for (; i < n; i++)
	{
		num = va_arg(list, n);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
