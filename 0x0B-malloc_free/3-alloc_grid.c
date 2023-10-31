#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 *@width: width of the grid
 *@height: height of the grid
 *Return: pointer to a 2 dimensional array of integers
 *NULL on failure, NULL  width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **grd;
if (width <= 0 || height <= 0)
return (NULL);
grd = malloc(sizeof(int) * height);
if (grd == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grd[i] = malloc(sizeof(int) * width);
if (grd[i] == NULL)
{
while (i >= 0)
free(grd[i]);
free(grd);
return (NULL);
}
for (j = 0; j < width; j++)
{
grd[i][j] = 0;
}
return (grd);
}
