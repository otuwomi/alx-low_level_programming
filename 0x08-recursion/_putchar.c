#include <unistd.h>

/**
 * _putchar - writes c character in the stdout
 * @c: it's the character to be printed
 * Return: On success return 1
 * and on error, return -1 and set error appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
