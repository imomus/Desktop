// in the following lines of code we are trying to use break and continue keyword.

#include <iostream>

int main()
{
    using namespace std;
    for(int i = 1; i<= 20;i++)
    {
        if(i == 11)
        {
            continue; // it skips the current iteration in this case i = 11
        }
        if(i == 18)
        {
            break; // it breaks out of the loop
        }
        cout<< i << '\n';
    }
}