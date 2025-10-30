#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* string_toupper - Transform lower in upper
* @str: String to tranform
* Return: String
*/
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
i++;
}
return (str);
}
