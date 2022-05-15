#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - function frees struct dog
 * @d: pointer to a dog
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
