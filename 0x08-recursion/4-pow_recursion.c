#include "main.h"

/**
 * _pow_recursion - power recursion function to  return the power of a nuber
 * @x: integer parameter as the base
 * @y: integer parameter as the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
