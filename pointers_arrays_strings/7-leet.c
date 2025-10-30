#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* leet - Leetify strings
* @str: String to leetify
* Return: Leetified string
*/
char *leet(char *str)
{
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}
}
return (str);
}
