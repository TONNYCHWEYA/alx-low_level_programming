#include "main.h"
/**
 * *_strcpy - copies string to anather string
 * @dest - pointer
 * @src - pointer
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\n')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
