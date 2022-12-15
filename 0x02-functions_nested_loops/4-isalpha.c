#include "main.h"

/**
 * _isalpha - the function checks for alphabet either lowercase or uppercase
 * @c: the variable holding the alphabet to be checked
 * Return: this returns 1 for true and 0 for false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
