#include "main.h"

/**
 * print_alphabet_x10 - Affiche 10 fois l'alphabet en minuscules
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
