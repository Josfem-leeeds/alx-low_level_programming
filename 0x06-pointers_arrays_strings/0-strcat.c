#include "main.h"

/**
 * *_strcat - Appendsa string to another string
 * @dest: the destinated string to be appended to.
 * @src: the string to be appended
 *Return: Returns a pointer pointing to the resulting string destination
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

        while (dest[len])
            len++;

        for (i = 0; src[i] != '\0'; i++)
        {
            dest[len] = src[i];
            len += 1;
        }
        dest[len] = '\0';
        return (dest);
}
