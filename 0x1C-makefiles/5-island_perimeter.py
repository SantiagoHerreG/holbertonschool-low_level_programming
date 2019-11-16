#!/usr/bin/python3
""" Technical Interview preparation
Function that returns the perimeter of a matrix that represents an island
"""


def one_direction_check(grid):
    """ Checks for the perimeter in horizontal direction
    """
    count = 0
    h = len(grid)
    if h == 0:
        return 0
    a = len(grid[0])
    if a == 0:
        return 0

    for i in range(h):
        for j in range(a):
            if j == 0 or j + 1 == a:
                if grid[i][j] == 1:
                    count += 1
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    count += 1
                if grid[i][j + 1] == 0:
                    count += 1
    return count


def island_perimeter(grid):
    """ Returns an integer that represents the perimeter of an island
    """
    count_hor = one_direction_check(grid)
    transv_grid = [[grid[col][rows[col]] for rows in grid] for col in
                   range(len(grid))]
    count_ver = one_direction_check(grid)

    return count_hor + count_ver
