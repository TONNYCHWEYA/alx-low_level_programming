#include <stdio.h>
/**
 * main -prints the alphabet in lowercase except q and e
 * put char twice
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c == 'q' || c == 'e')
{
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
