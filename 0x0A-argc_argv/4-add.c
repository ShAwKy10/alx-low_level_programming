#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*(argv[i])))
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}

	printf("%d\n", add);

	return (0);

}
