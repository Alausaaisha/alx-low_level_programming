#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: no of command line arguments
 * @argv: array of command line arguments
 * Return: 1 if it does not receive two arguments
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 1 && argc == 3)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
}
else
{
	printf("Error\n",);
	return (1);
}
return (0);
