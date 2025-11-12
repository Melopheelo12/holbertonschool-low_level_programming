#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - Alloue de la memoir avec malloc
*@b: taille en octets de la mémoire à allouer
*
*
* Return: un pointeur vers la mémoire allouée si le succès,
*
*/
void *malloc_checked(unsigned int b)
{
	void *sieve = malloc(b);

	if (sieve == NULL)
	exit(98);

	return (sieve);

}
