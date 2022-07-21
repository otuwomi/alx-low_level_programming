#include "main.h"

/**
 * factorial - factorial function to find n
 * @n: an integer
 * Return: recursion function
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
