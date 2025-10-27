#include "main.h"
/**
 *print_most_numbers -ecrit les nimbre de 1 a 9 sauf 2 et 4
 *
 *Return: 0 succes
 *
 */

Void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
_putchar(c);
}
_putchar('\n');
return (0);
}
