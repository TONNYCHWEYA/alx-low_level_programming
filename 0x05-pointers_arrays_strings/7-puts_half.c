#include "main.h"
/**
 * puts_half - Prints the last half of a string
 * @str: A pointer to an int that will be updated
 * Return: void
 */
void puts_half(char *str)
{
int i, last;
i = 0;
while (str[i] != '/0')
{
i++;
}
last = (i + 1) / 2;
for (i = last; str1[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
