#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Write a function that prints anything.
 * @format: a list of types of arguments
 * @...: Other
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list p;
	char *star;
	int i = 0;
	va_start(p, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(p, int));
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(p, double));
				break;
			case 's':
				star = va_arg(p, char*);
				if (star != NULL)
				{
					printf("%s", star);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(p);
	printf("\n");
}
