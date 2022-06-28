#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * string given as a parameter.
 * @width: width of the array.
 * @height: height of the array.
 * Return: integer pointer to two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **twoD, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		twoD[r] = malloc(width * sizeof(int));

		if (twoD[r] == NULL)
		{
			for (; r >= 0; r--)
			{
				free(twoD[r]);
			}

			free(twoD);

			return (NULL);
		}
	}


	for (r = 0; r < height; r++)
		for (c = 0; c < width; c++)
			twoD[r][c] = 0;

	return (twoD);
}
