#include <stdio.h>
#include "main.h"

/**
 *times_table - counts a day
 *
 *
 *
 */
void times_table(void)
{
	int cycle1;
	int cycle2;
	int value;

	for (cycle1 = 0; cycle1 <= 9; cycle1++)
	{
		for (cycle2 = 0; cycle2 <= 9; cycle2++)
		{
			value = cycle1 * cycle2;

			if (value >= 10 && cycle2 != 9)
			  {
				printf("%d, ", value);
			  }
			else if ((value >= 10 && cycle2 == 9))
			{
				printf("%d\n", value);
			}
			else if (value < 10 && cycle2 != 9)
			  {
				printf("%d,  ", value);
			  }
			else if
              {
                printf("%d\n", value);
              }
		}
	}
}
