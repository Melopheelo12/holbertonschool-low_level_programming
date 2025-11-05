#include <stdio.h>
/**
*main - prints all arguments it receives.
*@argc: Count
*@argv: tableau contenant les arguments sous forme de chaînes de caractères
*Return: Succes
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
