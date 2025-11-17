#include "main.h"
#include <stdlib.h>
/**
* print_name - imprime un nom en utilisant une fonction fournie
*@name: le nom à imprimer
*
*Return: rien
*@f: pointeur vers une fonction qui prend un char* et ne retourne rien
 *
*/
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
    return;

    f(name);
}