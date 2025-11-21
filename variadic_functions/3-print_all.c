#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;
	char *s;
	char sep = 0;

	va_start(args, format);

	while (format && *p)
	{
		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			if (sep)
				printf(", ");

			if (*p == 'c')
				printf("%c", va_arg(args, int));

			if (*p == 'i')
				printf("%d", va_arg(args, int));

			if (*p == 'f')
				printf("%f", (double)va_arg(args, double));

			if (*p == 's')
			{
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
			}
			sep = 1;
		}
		p++;
	}

	printf("\n");
	va_end(args);
}
