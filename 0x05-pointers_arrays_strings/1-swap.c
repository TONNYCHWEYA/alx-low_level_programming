#include "main.h"
/**
 * swap_int - swap two integers
 * @a: a pointer to an int that will be swaped
 * @b; a pointer to an int that will be swaped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
