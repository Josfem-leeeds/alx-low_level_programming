#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguument that are passed to it
 * @ac: argument counter
 * @av: argument vector or array of pointer to the arguments
 * Return: if counter is 0 or vector is NULL Returns NULL
 * OR returns a pointer
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, size_new, len1;

	len1 = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len1++;
	}

	p = malloc(sizeof(char) * len1 + 1);

	if (p == NULL)
		return (NULL);
	size_new = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			p[size_new++] = av[i][j];
		p[size_new++] = '\n';
	}
	p[len1] = '\0';
	return (p);
}
