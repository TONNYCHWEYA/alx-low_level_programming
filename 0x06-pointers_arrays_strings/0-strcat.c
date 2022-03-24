#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: points to the char that will be changed
 * @src: points to the char that will be updated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int u, m;
u = 0;
while (dest[u] != '\0')
{
u++;
}
m = 0;
while (src[m] != '\0')
{
dest[u] = src[m];
m++;
u++;
}
dest[u] = '\0';
return (dest);
}
