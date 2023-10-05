#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings.
 * @s1: An array input holds the first string.
 * @s2: An array input holds the second string.
 * Return: Pointer should point to a newly allocated space in memory which
 *		contains the contents of s1,
 *		followed by the contents of s2, and null terminated,
 *		the function should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i = 0, ii = 0, j;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[ii] != '\0')
			ii++;
	}
	else
		s2 = "";
	newStr = malloc(sizeof(char) * (i + ii + 1));
	i = 0;
	ii = 0;
	for (j = 0; s2[ii] != '\0'; j++)
	{
		if (s1[i] != '\0')
		{
			newStr[j] = s1[i];
			i++;
		}
		else
		{
			newStr[j] = s2[ii];
			ii++;
		}
	}
	j++;
	newStr[j] = '\0';
	return (newStr);
}
