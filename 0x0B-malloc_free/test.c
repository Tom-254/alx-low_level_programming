#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

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

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}

	free(grid);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
