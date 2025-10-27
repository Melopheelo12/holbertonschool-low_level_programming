#include "main.h"
/**
 *_strlen -donne la longueur d'unce chaine de caractere
 *@s: pointeur vers la chaine de caractere
 *
 *Return: la taille de la chaine
 */
int _strlen(char *s)
{
int len;
if (!s)
return (0);
for (len = 0; s[len] != '\0'; len++)
;
return (len);
}
