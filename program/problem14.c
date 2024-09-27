#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of stack: ");
    scanf("%d",&n);
    for(int i =0; i<n; i++)
    {
        for(int j = n-1;j>i;j--)
        {
            printf(" ");
        }
        for(int l =0;l<(2*i+1);l++)
        {
            
                if( l==0 || l ==2*i || i == n-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            
        }
        for(int j = n-1;j>i;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
}