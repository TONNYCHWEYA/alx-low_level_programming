#include "main.h"
/**
 * *_strncat - concatenates  until n bytes
 * @dest: points to the string to be concatenated
 * @src: points to the string that is added to dest
 * @n: specifies to the number bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int u, m;
u = 0;
while (dest[u] != '\0')
{
u++;
}
m = 0;
while (m < n && src[m] != '\0')
{
dest[u] = src[m];
m++;
u++;
}
dest[u] = '\0';
return (dest);
}
