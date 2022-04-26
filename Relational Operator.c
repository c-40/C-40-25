input-
#include <stdio.h>

int
main ()
{
  int a, b;
  printf ("Enter the value of a and b\n");
  scanf ("%d%d", &a, &b);
  if (a > b)
  printf ("%d is greater than %d\n",a, b);
  else if (a < b)
  printf ("%d less than %d\n",a, b);
  if (a <= b)
    printf ("%d is less or equal to %d\n",a, b);
  else if (a >= b)
    printf ("%d is greater than or equal to %d\n",a, b);
  if (a == b)
  printf("%d is equal to %d\n",a,b);
  else if(a=!b)
  printf("%d is  not equal to %d\n",a,b);
  return 0;
}
OUTPUT-
8 is greater than 3
8 is greater than or equal to 3


...Program finished with exit code 0
Press ENTER to exit console.
