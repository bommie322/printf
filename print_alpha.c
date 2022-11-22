#include "main.h"

/**
 * print_string - loops through a string and result
 *
 * every character
 *
 * @l: va_list arguments from output
 *
 * @f: pointer to the struct flags that determines
 *
 * if a flag is passed to the function
 *
 * Return: number of char displayed
 *
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 *
 * @l: va_list arguments from display
 *
 * @f: pointer to the struct flags that determines
 *
 * if a flag is passed to the fuction
 *
 * Return: number of char to be outputted
 *
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
