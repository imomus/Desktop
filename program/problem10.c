#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the height of stack: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }printf("\n");
        if(i%2==0)
        {
           printf(" ");
        }
        
    }
}