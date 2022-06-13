#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 * Return: Always 0
 */
void puts2(char *str)
{
	int lett;

	for (lett = 0; str[lett] != '\0'; lett++)
	{
		if (lett % 2 == 0)
			_putchar(str[lett]);
	}
	_putchar('\n');
}
