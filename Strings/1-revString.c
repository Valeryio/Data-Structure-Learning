#include "main.h"

/**
 * revStr - reverse a string
 * @s: string
 *
 * Description: This function takes a string as
 * param and revese it.
 * Return: A pointer to the string
 */

char *revStr(char *s)
{
	int i = 0, j = 0, length = 0;
	char tmp;

	while(s[i])
		i++;

	length = i;
	i--;

	for (;j < length / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
	return (s);
}
