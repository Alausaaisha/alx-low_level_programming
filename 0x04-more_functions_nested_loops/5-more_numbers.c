#include "main.h"
/**
 * more_numbers - print 1 to 10 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
