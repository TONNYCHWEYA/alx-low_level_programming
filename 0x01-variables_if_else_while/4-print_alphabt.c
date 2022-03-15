#include <stdio.h>
/**
 * main -prints the alphabet in lowercase except q and e
 * put char twice
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c == 'q')
continue;
else if (c == 'e')
continue;
putchar(c);
}
putchar('\n');
return (0);
}
