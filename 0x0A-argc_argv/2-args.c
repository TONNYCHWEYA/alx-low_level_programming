#include <stdio.h>
/**
 * main - prints all argument it receives
 * @argc: number of argument
 * @argv: array of strings
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
