#include "main.h"
/**
 * void swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
