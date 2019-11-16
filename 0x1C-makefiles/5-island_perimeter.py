#!/usr/bin/python3
""" Technical Interview preparation
Function that returns the perimeter of a matrix that represents an island
"""


def one_direction_hor(grid, h, a):
    """ Checks for the perimeter in horizontal direction
    """
    count = 0

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


def one_direction_ver(grid, h, a):
    """ Returns the oerimeter in vertical direction
    """

    count = 0

    for i in range(h):
        for j in range(a):
            if i == 0 or i + 1 == h:
                if grid[i][j] == 1:
                    count += 1
            if grid[i][j] == 1:
                if grid[i + 1][j] == 0:
                    count += 1
                if grid[i - 1][j] == 0:
                    count += 1
    return count


def island_perimeter(grid):
    """ Returns an integer that represents the perimeter of an island
    """
    h = len(grid)
    if h == 0:
        return 0
    a = len(grid[0])
    if a == 0:
        return 0
    count_hor = one_direction_hor(grid, h, a)

    count_ver = one_direction_ver(grid, h, a)

    return count_hor + count_ver
