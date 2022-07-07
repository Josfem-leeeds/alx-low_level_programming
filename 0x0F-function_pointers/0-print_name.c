#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: first parameter
 * @f: function pointer
 * 
 * Return: this returns 0 success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
