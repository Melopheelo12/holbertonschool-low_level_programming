#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* reverse_array - Reverse the content of an array
* @a: Array to reverse
* @n: Number of elements to swap
* Return: void
*/
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int tmp;
while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;

i++;
j--;
}
}
