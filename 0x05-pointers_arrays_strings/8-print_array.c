#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: pointer that points to the integer to be saved
 * @n: number of element to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
}
