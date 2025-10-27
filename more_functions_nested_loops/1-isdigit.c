#include "main.h"
#include <stdio.h>
/**
 *_isdigit -Verif si c'est ub chiffre
 *@c: le caractere a verif
 *Return: 1 si c'est un chiffre sinon 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <='9')
return (1);
else
return (0);
}
