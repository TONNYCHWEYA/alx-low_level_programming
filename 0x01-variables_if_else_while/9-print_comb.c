#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 46; number <= 57; number++)
{
putchar(number);
if (number == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
