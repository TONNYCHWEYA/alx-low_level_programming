#include <stdio.h>
/**
 * main -Entry point
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for(i = 97; i <= 102; i++)
{
putchar (i);
}
putchar('\n');
return (0);
}
