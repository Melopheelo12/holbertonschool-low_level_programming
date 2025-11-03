#include "main.h"
/**
 * _strchr - Recherche la première occurrence d’un carac dans une chaîne
 * @s: pointeur vers la chaîne de caractères à parcourir
 * @c: caractère à rechercher
 *
 * Return: pointeur vers la première occurrence de c dans s,
 *ou NULL si le caractère n’est pas trouvé
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
		return (s);
	s++;
	}
	if (*s == c)
	return (s);

	return (0);
}
