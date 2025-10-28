#include "main.h"
/**
 *rev_string -affiche l'inverse
 *
 *@s: le pointeur
 *
 *
 *
 */

void rev_string(char *s)
{
int len, i;
char temp;

for (len = 0; s[len] != '\0'; len++)
;
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
