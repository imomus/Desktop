#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("It is positive number.\n");
    }
    else if(n==0)
    {
        printf("It is zero.\n");
    }
    else
    {
        printf("It is negative number.\n");
    }
}