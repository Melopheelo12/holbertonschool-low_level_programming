#include "main.h"

/**
 * _isalpha - Verifie si le caractere est une lettre (maj ou min)
 *@c: le caractere a verif (code ASCII)
 *return: 1 si c'est une lettre, 0 sinon
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
