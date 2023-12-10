#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: number to flip
 * @m: number to flip
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_n = n ^ m;
int i = 0, result = 0;

for (; i < 64; i++)
{
if ((xor_n >> i) & 1)
{
result++;
}
}
return (result);
}
