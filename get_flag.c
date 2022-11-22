#include "main.h"

/**
 * get_flag - turns on if _printf finds
 *
 * a modifier in the format string
 *
 * @s: character that holds the flag specifier
 *
 * @f: pointer to the struct in which we turn the flagging on
 *
 * Return: 1 if turned on, 0 otherwise
 *
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
