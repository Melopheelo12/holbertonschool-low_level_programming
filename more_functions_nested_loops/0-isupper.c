#include "main.h"
#include <stdio.h>
/**
 *_isupper -Verif si c'est une maj
 *@c: va afficher des lettres en maj ou min
 *Return: 1 si c'est une maj sinon 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
