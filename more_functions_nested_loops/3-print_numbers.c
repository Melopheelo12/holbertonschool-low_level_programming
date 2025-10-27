#include "main.h"
/**
 *print_numbers -ecrit les nombres de 1 a 9 en sautant une ligne
 *
 *Return: 0
 */
void print_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
return (0);
}
