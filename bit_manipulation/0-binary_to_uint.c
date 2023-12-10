#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
int result = 0;

if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
result = result << 1;
if (b[i] == '1')
result = result ^ 1;
i++;
}
return (result);
}
