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
                if i == 0 or not grid[i - 1][j]:
                    perimeter += 1
                if i == len(grid) - 1 or not grid[i + 1][j]:
                    perimeter += 1
                if j == 0 or not grid[i][j - 1]:
                    perimeter += 1
                if j == len(grid[i]) - 1 or not grid[i][j + 1]:
                    perimeter += 1

    return (perimeter)
