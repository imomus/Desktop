#include <stdio.h>
//all these program fail for large values of n;

int main()
{
    int n;
    printf("Enter the height of triangle: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i<2 || i==n-1)
        {
            for(int j = 0;j<=i;j++)
            {
               printf("*"); 
            }
        }
        else
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0|| j==i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }printf("\n");
    }
}