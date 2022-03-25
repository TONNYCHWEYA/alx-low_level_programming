#include "main.h"
/**
 * *_strncpy - copies a string to another
 * @dest: points to a string to be changed
 * @src: points to a string to be changed
 * @n: the number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int i = 0;
while (n < i && src[i] = '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
