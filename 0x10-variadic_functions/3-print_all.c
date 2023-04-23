#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  prints anything
 * @format:  list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list va;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char format_t[] = "cifs";

	va_start(va, format);

	while (format && format[i])
	{
		j = 0;
		while (format_t[j])
		{
			if (format[i] == format_t[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(va, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(va, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(va, double)), c = 1;
				break;
			case 's':
				str = va_arg(va, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	} va_end(va), printf("\n");
}
