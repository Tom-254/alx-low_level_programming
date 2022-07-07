#include "variadic_functions.h"

/**
 * check_char - prints the char character
 * @ap: va_list type
 * Return: nothing
 */
void check_char(va_ap ap)
{
	printf("%c", va_arg(ap, char));
}
/**
 * check_int - prints the int
 * @ap: va_list type
 * Return: nothing
 */
void check_int(va_ap ap)
{
	printf("%i", va_arg(ap, int));
}
/**
 * check_float - prints the float
 * @ap: va_list type
 * Return: nothing
 */
void check_float(va_ap ap)
{
	printf("%f", va_arg(ap, float));
}
/**
 * check_string - prints the string
 * @ap: va_list type
 * Return: nothing
 */
void check_string(va_ap ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: ap of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	check_types types[] = {
		{"c", check_char},
		{"i", check_int},
		{"f", check_float},
		{"s", check_string},
		{NULL, NULL}
	};

	int pos = 0, loop_pos = 0;
	va_list ap;
	char *sep = "";

	va_start(ap, format);

	while (format && format[pos])
	{
		while (types[loop_pos].check)
		{
			if (format[pos] == *types[loop_pos].check)
			{
				printf("%s", sep);
				types[loop_pos].f(ap);
				sep = ", ";
			}
			loop_pos++;
		}
		loop_pos = 0;
		pos++;
	}
	printf("\n");
	va_end(ap);

