#include <stdio.h>

/**
*main - prints the program name, followed by a new line
*@argc: number of command line arguments (unused)
*@argv: array containing the program command line arguments*
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
