#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *s)
{
	int i, j;
	char c[6] = {'a', 'e', 'o', 't', 'l', '\0'};
	char C[6] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char n[6] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == C[j])
			{
				s[i] = n[j];
			}
		}
	}

	return (s);
}
