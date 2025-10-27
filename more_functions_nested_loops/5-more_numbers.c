#include "main.h"
/**
 *more_numbers -affiche les chiffre de 1 a 14 10 fois
 */

void more_numbers(void)
{
int i, c;

for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
