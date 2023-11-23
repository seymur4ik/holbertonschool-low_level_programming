#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointer of function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
