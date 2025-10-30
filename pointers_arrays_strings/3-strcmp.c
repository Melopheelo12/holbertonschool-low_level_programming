#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strcmp - Compare 2 strings
* @s1: 1st string
* @s2: 2nd string
* Return: String comparision
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}

return (s1[i] - s2[i]);
}
