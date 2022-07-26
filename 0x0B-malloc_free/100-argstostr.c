#include "main.h"

/**
 * length - returns length of string
 * @str: string counted
 * Return: the length
 */
int length(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}

	return (length);
}
