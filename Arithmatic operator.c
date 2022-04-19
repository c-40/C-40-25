Input-
#include <stdio.h>

int main()
{
   int a,b;
   float c;
   a=5;
   b=2;
   c=a+b;
   printf("Sum of %d and %d is %.2f\n",a,b,c);
   c=a*b;
   printf("Product of %d amd %d id %.2f\n",a,b,c);
   c=a/b;
   printf("Division of %d by %d is %.2f\n",a,b,c);
   c=(float)a/b;
   printf("Real division of %d by %d is %.2f\n",a,b,c);
   return 0;
}
Output-
Sum of 5 and 2 is 7.00
Product of 5 amd 2 id 10.00
Division of 5 by 2 is 2.00
Real division of 5 by 2 is 2.50


...Program finished with exit code 0
Press ENTER to exit console.