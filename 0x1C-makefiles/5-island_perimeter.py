#!/usr/bin/python3
''' function island_perimeter'''
def island_perimeter(grid):
    '''function that returns the perimeter of the island described in grid'''
    p = 1
    c = 0
    if not grid:
        return 0
    for row in grid:
        for i in range(len(row)):
            if row[i] == 1 and row[i + 1] ==1 :
                p = p - 1
                p = p + 3
                c = i
            if row[i] == 1 and row[i + 1] == 0:
                if c == i:
                    p = p - 2
                p = p + 3
                c = i
    return p
