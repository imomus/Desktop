#include <stdio.h>

int main()
{
    int n; 
    printf("Enter the marks:");
    scanf("%d", &n);
    if(n>= 40)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
}