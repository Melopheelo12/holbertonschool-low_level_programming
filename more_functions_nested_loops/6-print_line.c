#include "main.h"
/**
 *print_line -dessine une ligne
 *
 *@n: le nombre de '_'
 *
 */
void print_line(int n)
{
int z;

if (n <= 0)
{
_putchar('\n');
return;
}
for (z = 0; z < n; i++)
_putchar('_');
_putchar('\n');
}
