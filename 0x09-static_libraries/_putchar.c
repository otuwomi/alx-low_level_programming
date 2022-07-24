#include <unistd.h>

/**
 * _putchar - writes c character in the stdout
 * @c: ts the chareacter to be printed
 * Return: On success 1
 * On error, return -q1 and set error appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
