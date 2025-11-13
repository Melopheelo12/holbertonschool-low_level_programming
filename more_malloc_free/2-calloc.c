#include <stdlib.h>
#include "main.h"
/**
*_calloc -allocates memory for an array
*
*@nmemb: nombre d'élément du tableau
*@size: taille des élément du tableau
*
*Return: Pointeur vers la mémoire allouée initialisée à zéro, ou NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;
	unsigned char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	total = nmemb * size;
	p = ptr;
	for (i = 0; i < total; i++)
		p[i] = 0;

	return (ptr);
}
