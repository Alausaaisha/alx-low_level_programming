#include <stdio.h>
#include <stdlib.h>
/**
 * main - function print a number
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	/**
	 * enabling compiler to compile despite
	 * unused variable
	 */
	(void)argv;
	printf("%d\n", argc - 1);
	
	return (0);
}
