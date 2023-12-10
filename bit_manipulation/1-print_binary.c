#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * Return: void
*/
void print_binary(unsigned long int n)
{
int i;
int check = 0;

if (n == 0)
{
_putchar('0');
return;
}

for (i = 63; i >= 0; i--)
{
if (check)
{
if (n >> i & 1)
{
_putchar('1');
}
else
_putchar('0');
}
else if (n >> i & 1)
{
_putchar('1');
check = 1;
}
}
}
