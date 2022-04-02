#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: points to array of strings
 * Return: nothing
 */
int main(int argc, char *argv[])
{
printf("%d", argc-1);
printf("\n");
(void) argv;
return (0);
}
