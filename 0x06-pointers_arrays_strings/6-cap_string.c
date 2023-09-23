#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @s: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	int conversion;
	int i;
	int j;

	char chars[14] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{',
			 '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] =  s[i] - conversion;
		}

		conversion = 0;

		for (j = 0; chars[j]; j++)
		{
			if (chars[j] == s[i])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (s);
}
