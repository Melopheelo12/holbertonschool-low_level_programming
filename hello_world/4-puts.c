#!/bin/bash
echo '#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    puts("\"Programming is like building a multilingual puzzle");
    return (0);
}' > 4-puts.c

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o 4-puts
./4-puts
