#include "main.h"
/**
 *print_rev -Affiche le sens inverse
 *
 *@s: le pointeur
 *
 *
 */
void print_rev(char *s)
{
int len = 0;
for (; s[len] != '\0'; len++)
{
for (int z = len - 1; z >= 0; z--)
_putchar(s[z]);
_putchar('\n');
}
}
