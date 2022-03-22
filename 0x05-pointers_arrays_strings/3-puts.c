#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer that point to aint to be printed
 * Return: nothing
 */
void _puts(char *str)
{
char *c;
int m;
c =str;
for(m = 0; c[m];m++)
{
_putchar (c[m]);
}
_putchar(c[m]);
}
