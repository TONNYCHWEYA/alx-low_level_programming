#include <stdio.h>
#include <stdlib.hiiiiiii:>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: points to array of strings
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int i;
int x;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]);
x = i * atoi(argv[2]);
printf("%d\n", x);
(void) argc;
return (0);
}
}
