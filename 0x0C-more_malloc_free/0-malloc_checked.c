#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: - size of bytes to be allocated
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == 0)
exit(98);
return (s);
}
