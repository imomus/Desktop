#include <stdio.h>

int main(void)
{
    int count =0;
    char name[100];
    fgets(name,100,stdin);
    for(int i = 0;name[i] !='\0';i++)
    {
        if (name[i] != '\n')
        {
            count++;
        }
    }
    printf("length of the name is %d\n", count);
}