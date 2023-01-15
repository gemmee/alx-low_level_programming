#!/usr/bin/python3
""" Module the calculates perimeter of an island

Technical interview task
"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid

    @param:
        grid: a list of list of integers, containing only 0 and 1
    """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:            # the grid is 1 means it's land
                if not grid[i - 1][j]:  # upper border is 0 means it's water
                    perimeter += 1
                if not grid[i + 1][j]:  # lower border is 0 means it's water
                    perimeter += 1
                if not grid[i][j - 1]:  # left border is 0 means it's water
                    perimeter += 1
                if not grid[i][j + 1]:  # right border is 0 means it's water
                    perimeter += 1

    return (perimeter)
