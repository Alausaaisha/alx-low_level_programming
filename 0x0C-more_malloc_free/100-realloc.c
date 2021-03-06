#include "main.h"
#include <stdlib.h>
/**
 * _realloc - resizes a memory so that it can be re-allocated
 * @ptr: pointer to previouly allocated memory
 * @old_size: size of previous memory(bytes)
 * @new_size: size of new memory in bytes
 * Return: if reallocation is successful(NEW POINTER) ELSE NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrn;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptrn = malloc(new_size);
		if (ptrn == NULL)
			return (NULL);
		return (ptrn);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptrn = malloc(new_size);
		if (ptrn == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)ptrn + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (ptrn);
}
