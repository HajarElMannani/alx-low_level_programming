#include<stdio.h>
#include<stdlib>
#include<time.h>
/* more headers goes there */

/**
 *main-Start of code 
 *Return:0 when success
 */
 main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
	/* your code goes there */
  if (n>0)
   printf("%d is positive\n",n);
  else if(n==0)
   printf("%d is zero\n",n);
  else
   printf("%d is negative\n",n);
  return (0);
}
