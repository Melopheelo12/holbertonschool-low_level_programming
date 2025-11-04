#include "main.h"
/**
*_puts_recursion - prints a string followed by a new line
*@s: pointer to the string
*Return: nothing
*
*/
void _puts_recursion(char *s)
{
    if (*s == '\n')
    {
        _putchar('\n');
        return;
    }    
    _putchar (*s);
    _puts_recursion (s + 1);
    
}