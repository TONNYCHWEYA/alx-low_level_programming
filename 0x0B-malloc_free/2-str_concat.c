#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: - points to a string
 * @s2: - points to the secong string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int l1 = 0;
int l2 = 0;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
while (s1[l1] != '\0')
{
l1++;
}
while (s2[l2] != '\0')
{
l2++;
}
int size = l1 + l2 + 1;
s3 =malloc(sizeof(char) * size);
if (s3 == 0)
return 0;
int u = 0;
while (s1[u] != '\0')
{
s3[u] = s1[u];
u++;
}
int m = 0;
while ( s2[m] != '\0')
{
s3[u] = s2[m];
u++;
m++;
}
s3[u] = '\0';
return (s3);
}
