Input-
#include <stdio.h>

int main()
{
   int x,y;
   printf("Enter a number in between 0-39:");
   scanf("%d",&y);
   x=y/10;
   switch(x)
   {
        case 0:
        printf("Enter a number in between 0-9\n");
        break;
        case 1:
        printf("Enter a number in between 0-19\n");
        break;
        case 2:
        printf("Enter a number in between 0-29\n");
        break;
        case 3:
        printf("Enter a number in between 0-39\n");
        break;
        default:
        printf("number i not in range");
        break;
     }
   return 0;
}
    
Output-
Enter a number in between 0-39:32
Enter a number in between 0-39


...Program finished with exit code 0
Press ENTER to exit console.
    
    
    
   