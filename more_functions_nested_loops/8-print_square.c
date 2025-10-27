#include "main.h"
/**
 *print_square -fais un carre
 *@size: taille
 *
 *Return: osef
 */
Void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
