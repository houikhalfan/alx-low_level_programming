#include <stdlib.h>
#include <stdio.h>

/**
 * main - main
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int by, i;
int (*address)(int, char **) = main;
unsigned char opc;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
by = atoi(argv[1]);
if (by < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < by; i++)
{
opc = *(unsigned char *)address;
printf("%.2x", opc);
if (i == by - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
