#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates arguments of the program into a string
 * and separates them with a new line
 * @ac: The number of arguments passed to the program
 * @av:an array of pointers to the arguments.
 *
 * Return: if ac == 0, av == NULL, or the funcion fails - NULL
 * otherwise return a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retp);
}
