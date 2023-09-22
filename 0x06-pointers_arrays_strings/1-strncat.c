#include "main.h"

/**
 *_strncat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *@n: This input cut from the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; j <= n; j++)
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
