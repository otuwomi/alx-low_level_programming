#include <stdio.h>

/**
 * main - will be printing its name, followed by a new line
 * @argc: argument count
 * @argv: argument listing
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	
		return (0);
	}
}
