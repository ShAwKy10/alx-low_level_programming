#include "holberton.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; src[j] != '\0'; i++)
	{
		if (dest[i] == '\0')
		{
			dest[i] = ' ';
			i++;

			while (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
			}
		}
	}

	return (*dest);
}
