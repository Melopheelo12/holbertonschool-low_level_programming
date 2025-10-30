#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* cap_string - Prints every 1st letter of a word as upper
* @str: String to modify
* Return: String with upper
*/
char *cap_string(char *str)
{
int i = 0;
char spe[] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

while (str[i] != '\0')
{
size_t j;
int is_spe = 0;

if (i != 0)
{
for (j = 0; j < sizeof(spe) / sizeof(spe[0]); j++)
{
if (str[i - 1] == spe[j])
{
is_spe = 1;
break;
}
}
}

if ((i == 0 && str[i] >= 'a' && str[i] <= 'z') ||
(i != 0 && is_spe && str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= ('a' - 'A');
}
i++;
}
return (str);
}
