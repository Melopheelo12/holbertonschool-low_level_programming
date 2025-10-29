#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */
#include <limits.h>

int _atoi(char *s)
{
int i = 0;
int sign = 1;
long long result = 0;
int found_digit = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
result = result * 10 + (s[i] - '0');
         
if (sign == 1 && result > INT_MAX)
return INT_MAX;
if (sign == -1 && -result < INT_MIN)
return INT_MIN;
else if (found_digit)
break;
i++;
}
return (int)(sign * result);
}
