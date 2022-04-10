#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int i;
	double d;
	char c;
	float k;
	long int j;

	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
