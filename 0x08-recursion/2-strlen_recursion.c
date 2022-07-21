#include "main.h"

/**
 * _strlen_recursion - size of string
 * @s: pointer to string parameter
 * Return: recursion function
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
