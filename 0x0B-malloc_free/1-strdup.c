#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdpup - copies a string to a new string
 * @str: -points to a string that is to be copied
 * Return: char
 */
char *_strdup(char *str)
{
int lenght = 0;
char *newstr;
int size, u;
if (str == 0)
return (0);
while (str[lenght] != '\0')
{
lenght++;
}
size = lenght + 1;
newstr = malloc(sizeof(char) * size);
if (newstr == 0)
return (0);
u = 0;
while (str[u] != '\0')
{
newstr[u] = str[u];
u++;
}
newstr[u] = '\0';
return (newstr);
}
