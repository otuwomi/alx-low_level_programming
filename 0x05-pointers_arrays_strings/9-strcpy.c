#include "main.h"

/**
 * *_strcpy - copies string pointed by src
 * @dest: char type string
 * @src: cahr type string
 * Description: copy string pointed by src
 * butter pointed to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, chr *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
