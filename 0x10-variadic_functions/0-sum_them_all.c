#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: argument count parameter
 * @...: other parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list lst;

	if (n == 0)
		return (0);
	
	va_start(lst, n);
	for (i = 0; i <= n; i++)
	{
		num = va_arg(lst, int);
		sum += num;
	}
	va_end(lst);
	return (sum);
}
