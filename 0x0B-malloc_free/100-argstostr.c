#include "main.h"

/**
 * length - returns length of string
 * @str: string counted
 * Return: the length
 */
int length(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}

	return (length);
}

/**
 * argstostr - a function that concatenates all the arguments of a program
 * @ac: argument count passed to the function
 * @av: array list of arguments
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--){
		sum += (length(av[ac]) + 1);
	}
	new_string = (char *) malloc(sum + 1);
	if (new_string != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_string[j + temp] = av[k][j];
			new_string[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}
