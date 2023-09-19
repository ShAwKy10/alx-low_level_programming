#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int counter = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
		arr[i] = s[i];
	}

	counter--;

	for (i = 0; counter >= 0; i++)
	{
		temp = s[counter];
		s[i] = temp;
		counter--;
	}
}
