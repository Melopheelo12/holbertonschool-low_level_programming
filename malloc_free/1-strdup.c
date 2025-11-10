#include "main.h"
#include <stdlib.h>
/**
*
*
*
*
*
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == 0)
	return(NULL);

	for (; str[len] != '\0'; len++)
	dup = malloc((len + 1) * sizeof(char));
	if (dup == 0)
	return(NULL);
	for (i = 0; i < len; i++)
	dup[i] = str[i];
	dup[len] = '\0';
	return(dup);

}