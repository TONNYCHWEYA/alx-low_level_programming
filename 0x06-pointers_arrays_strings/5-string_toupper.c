#include "main.h"
/**
 * *string_toupper - change string to uppercase
 * @str: points to string
 * Return: nothing
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] >= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
