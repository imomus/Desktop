#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i;
    int c = 0;
    printf("You want prime numbers upto: ");
    scanf("%d",&n);
    if(n < 2)
    {
        printf("The prime number is : NONE\n");
    }
    else
    {
        printf("The prime numbers are: 2, 3");
        for(i =4;i<=n;i++)
        {
            if(i%10 == 1|| i%10==3|| i%10==7|| i%10==9)
            {
                if(i%6== 5|| i%6==1)
                {
                    if((i*i-1) % 24 == 0)
                    {
                        printf(", %d",i);
                        c++;
                    }    
                }
            }
        }
        printf("\n");
        printf("The no. of prime numbers upto %d is %d",n,c+1);
        printf("\n");
    }
}
    