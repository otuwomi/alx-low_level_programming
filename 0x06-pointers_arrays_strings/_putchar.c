#include <unistd.h>

/**
 * _putchar - writes c character in the stdout
 * @c: it's the character to be printed
 * Return: On success 1
 * On error, return -1 and set error appropriately
 */
int _ptutchar(char c)
{
	return (write(1, &c, 1));
}
