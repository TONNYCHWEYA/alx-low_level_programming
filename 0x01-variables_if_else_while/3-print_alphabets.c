#include <stdio.h>
/**
 * main -progaram for lower then upper
 * only use putchar thrice
 * Return: Always 0 (Succes)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
