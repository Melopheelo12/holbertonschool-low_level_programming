#include "main.h"
#include <stdio.h>
/**
 *print_array -affiche un nombre d'element d'un tableau
 *
 *@a: pointeur du tableau
 *@n: nombre d'element a affiche
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
