#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d %d",&a, &b);

    if(a>0 && b>0)
    {
        printf("Both are positive integers.\n");
    }
    printf("a&b=%u",a&b);

}