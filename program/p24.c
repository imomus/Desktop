#include <stdio.h>

int triangle(int x, int y, int z);
int main()
{
    int a,b,c;
    printf("Enter any three sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    triangle(a,b,c);

}

int triangle(int x, int y, int z)
{
    if(x+y > z && y+z > x && x+z > y)
    {
        printf("It will make a triangle.\n");
    }
    else
    {
        printf("It will not make a triangle.\n");
    }

    return 0;

}