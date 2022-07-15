#include "main.h"

/**
 * _strncat - oncatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, i;

	for (dest_length, = 0; dest[dest_length] != '\0'; dest_length++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_length + i] = src[i];

	/*ending with a end of string char*/
	dest[dest_length + i] = '\0';

	return (dest);
}
