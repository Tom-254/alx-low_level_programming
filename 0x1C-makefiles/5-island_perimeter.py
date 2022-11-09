#!/usr/bin/python3
"""returns the perimeter of the
"""

def island_perimeter(grid):
    """returns the perimeter of the
        island described in grid
        Args:
            grid(list): list of integers
    """

    perimeter = 0
    row_length = len(grid)
    column_length = len(grid[0])

    for r in range(row_length):
        for c in range(column_length):
            if grid[r][c] == 0:
                continue
            perimeter += 4
            if r > 0:
                perimeter -= grid[r - 1][c]
            if c > 0:
                perimeter -= grid[r][c - 1]
            if r < row_length - 1:
                perimeter -= grid[r + 1][c]
            if c < column_length - 1:
                perimeter -= grid[r][c + 1]

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
