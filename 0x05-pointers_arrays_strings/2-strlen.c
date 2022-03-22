#include "main.h"
/**
 * _strlen - return length of a string
 * @s: print i char s
 * Return: length of a string
 */
int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
