#include <stdio.h>
#include<string.h>
int main()
{
    char strname[30];
    printf("enter string");
    scanf("%[^\n]s",strname);
    printf("String=%s",strname);

    return 0;
}
