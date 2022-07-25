#include <stdio.h>

/**
 * main - prints all arg
 * @argc: arg count
 * @argv: arg array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

		return (0);
	}
}
