#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of stack: ");
    scanf("%d",&n);
    for( int i = n; 0< i && i<= n;i--)
    {
        for(int j=1;j<= i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}
