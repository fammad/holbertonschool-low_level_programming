#include <stdlib.h>
#include <time.h>
/* Main - is where main code located */

/* I hate betty */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	  {
	    printf("is positive \n");
	  }
	else if (n=0)
          {
            printf("is zero \n");
          }
	else (n<0)
          {
            printf("is negative \n");
          }
	return (0);
}
