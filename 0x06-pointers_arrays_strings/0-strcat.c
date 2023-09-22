#include "main.h"

/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; src[j] != '\0'; i++)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
			}
		}
	}

	if (dest[i] != '\0')
	{
		i++;
		dest[i] = '\0';
	}

	return (dest);
}
