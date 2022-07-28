#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory.
 * @b: amount of byte
 * Return: pointer to the allocated memory.
 * and return 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
