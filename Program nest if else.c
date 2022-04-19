Input-
#include <stdio.h>

int main()
{
    int x,y;
    printf("Please enter mumber in between 0 to 39");
    scanf("%d",&y);
    if(y/10==0)
    {
        printf("you have entered the number between 0-9\n");
        
    }

 else if(y/10==1)
{
    printf("Your you have entered in the range of 10-19");
}
else if(y/10==2)
{
    printf("you hve entered the number between the the range of 20-29\n");
}
else if(y/10==3)
{
    printf("you have entered the number in rang of 30-39\n");
}
else 
{
    printf("the number is not in range ");
}
    return 0;
}
 
Output-
Please enter mumber in between 0 to 39
37
you have entered the number in rang of 30-39


...Program finished with exit code 0
Press ENTER to exit console.
