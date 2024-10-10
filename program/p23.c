#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n%2 != 0)
    {
       for(int i =3; i < 10;)
       {
            if(n % i == 0 && n!=i)
            {
                printf("It is not a prime number.\n");
                break;
            }
            if(n == i)
            {
                printf("It is a prime number.\n");
            }
            i=i+2;
       }
    }
    else
    {
        printf("It is not a prime number.\n");
    }
}