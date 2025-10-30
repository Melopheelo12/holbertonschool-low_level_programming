#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strncat - Concatenates two strings
* @dest: String
* @src: String to add to dest
* @n: Bytes used
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
