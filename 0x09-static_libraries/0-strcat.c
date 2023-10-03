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
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	if (dest[i] != '\0')
	{
		i++;
		dest[i] = '\0';
	}

	return (dest);
}
