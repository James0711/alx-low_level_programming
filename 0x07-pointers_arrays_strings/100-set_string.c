#include "main.h"
/**
 * set_string - sets the value of a pointer to a character
 * @s: value of a pointer to pointer
 * @to: character to which the value will be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
