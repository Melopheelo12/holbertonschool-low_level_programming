#include "main.h"
/**
 *_puts -Affiche une chaine 
 *@str: pointeur vers la chaine
 *
 *
 */
void _puts(char *str)
{
int i;
for (i =0 ;str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
