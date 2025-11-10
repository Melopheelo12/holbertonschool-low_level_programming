#include "main.h"
#include <stdlib.h>
/**
*
*
*
*
*
*/
char *str_concat(char *s1, char *s2)
{
	char *nouv_str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (;s1[len1] != '\0'; len1++)
		;
	for (;s2[len2] != '\0'; len2++)
		;
	nouv_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (nouv_str == NULL)
		return (0);
	for (i = 0; i < len1; i++)
		nouv_str[i] = s1[i];
	for (j = 0; j < len2; j++)
		nouv_str[i + j] = s2[j];

	return (nouv_str);			
}