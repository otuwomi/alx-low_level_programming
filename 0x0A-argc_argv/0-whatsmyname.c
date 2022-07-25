#include <stdio.h>

/**
 * main - The main function
 * @argc: argument Count of command-lines
 * @argv: argument Vector listing the command lines
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
