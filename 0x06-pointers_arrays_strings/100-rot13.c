#include "main.h"
/**
 * *rot13 -  encodes a string using rot13.
 * @s: points to the integer to be changed
 * Return: char
 */
char *rot13(char *s)
{
char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0;
int x = 0;
while (s[i] != '\0')
{
while (arr[x] != '\0')
{
if (arr[x] == s[i])
{
s[i] = rot[x];
break;
}
x++;
}
i++;
x = 0;
}
return (s);
}
