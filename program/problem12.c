#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    printf("Enter the height of triangle: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {   int p =1;
        for(int j = n-1;j>i;j--)
        {
            printf(" ");
        }
        for(int l =1;l<=(2*i+1);l++)
        {
            if(l<= i+1 || l == 1)
            {
                printf("%d",l);
            }
            else
            {
                printf("%d",l-(2*p));
                p++;
            }
        }
        for(int j = n-1;j>i;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
}