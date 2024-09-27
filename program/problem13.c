#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of stair: ");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        for(int j =1;j<=i+1;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}
