#include "main.h"

/**
 * *_strcat - Appendsa string to another string
 *@dest: the destinated string to be appended to.
 *@src: the string to be appended
 *Return: Returns a pointer pointing to the resulting string destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char s1[100];
	char s2[100];
	char s3[100];
	dest = &s1;
	src = &s2;
	char *ptr = &s3;

	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}

	i= 0 ;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
