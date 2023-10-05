#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 *		2 dimensional array of integers.
 *@width: Integer input holds the width of the array.
 *@height: Integer input holds the height of the array.
 *Return: A pointer to a 2 dimensional array of integers
 *		or if width or height is 0 or negative return NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr_2D;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr_2D = malloc(sizeof(*arr_2D) * height);

		if (arr_2D == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			arr_2D[i] = malloc(sizeof(**arr_2D) * width);

			if (arr_2D[i] == NULL)
			{
				while (i--)
					free(arr_2D[i]);
				free(arr_2D);

				return (NULL);
			}

			for (j = 0; j < width; j++)
			{
				arr_2D[i][j] = 0;
			}
		}
	}

	return (arr_2D);
}
