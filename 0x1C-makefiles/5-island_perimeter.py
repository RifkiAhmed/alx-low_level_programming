#!/usr/bin/python3
"""
    Function calculate the perimeter of the island
"""


def island_perimeter(grid):
    """ Calculate the perimeter of the island """
    if grid:
        perimeter = old_lands = 0
        for i in range(len(grid)):
            lands = above = current_lands = 0
            for j in range(len(grid[i])):
                if grid[i][j]:
                    lands += 1
                    current_lands += 1
                    if old_lands:
                        if grid[i - 1][j]:
                            above += 1
                elif lands:
                    perimeter += lands * 2 + 2
                    lands = 0
            if not current_lands and old_lands:
                break
            if lands:
                perimeter += lands * 2 + 2
            perimeter -= above * 2
            old_lands = current_lands
        return perimeter
    return 0
