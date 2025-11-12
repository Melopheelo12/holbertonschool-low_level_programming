#include "main.h"
#include <stdlib.h>
/**
*free_grid - libère une grille 2D précédemment allouée par alloc_grid
*
*@grid: le pointeur vers la grille
*@height: le nombre de lignes de la grille
*
*
*/
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
