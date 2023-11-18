#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 *@width: Variable
 *@height: Variable
 *Return: Integer
 */
int **alloc_grid(int width, int height)
{
  int **ret;
  int i1, i2, iclean;

	if (width <= 0 || height <= 0)
		return (NULL);
	ret = (int **)malloc(height * sizeof(int *));
	if (ret == NULL)
		return (NULL);
	for (i1 = 0; i1 < height; i1++)
	{
		if (ret == NULL)
			for (iclean = 0; iclean < i1; iclean++)
			{
				free(ret[iclean]);
			}
			free(ret);
			return (NULL);
		
		ret[i1] = (int *)malloc(width * sizeof(int));
		for (i2 = 0; i2 < width; i2++)
		{
			ret[i1][i2] = 0;
		}
	}
	return (ret);
}
