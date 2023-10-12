#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character with a separator.
 * @args: The arguments list.
 * @separator: The separator to print.
 */
void print_char(va_list args, const char *separator)
{
printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - Prints an integer with a separator.
 * @args: The arguments list.
 * @separator: The separator to print.
 */
void print_int(va_list args, const char *separator)
{
printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - Prints a floating-point number with a separator.
 * @args: The arguments list.
 * @separator: The separator to print.
 */
void print_float(va_list args, const char *separator)
{
printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - Prints a string with a separator (or "(nil)" for NULL).
 * @args: The arguments list.
 * @separator: The separator to print.
 */
void print_string(va_list args, const char *separator)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}

/**
 * print_all - Prints values based on a format string.
 * @format: The format string containing format specifiers.
 * @...: The arguments to be printed based on the format.
 */
void print_all(const char *const format, ...)
{
va_list args;
unsigned int i = 0;
char current_format;
const char *separator = "";

va_start(args, format);

while (format && format[i])
{
current_format = format[i];

switch (current_format)
{
case 'c':
print_char(args, separator);
break;

case 'i':
print_int(args, separator);
break;

case 'f':
print_float(args, separator);
break;

case 's':
print_string(args, separator);
break;

default:
i++;
continue;
}

separator = ", ";
i++;
}

va_end(args);

printf("\n");
}
