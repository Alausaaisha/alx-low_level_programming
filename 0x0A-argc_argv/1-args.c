#include <stdio.h>
#include <stdlib.h>
/**
 * main - function print a number
 * @argc: the size of the argv array
 * @argv: an array of size argc
 * Retrun: 0
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
