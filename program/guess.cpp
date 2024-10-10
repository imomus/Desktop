//in this program we are going to make a number guessing game

#include <iostream>

int main()
{
    using namespace std;
    int c=0;
    int n;
    srand(time(NULL));
    int m = (rand()%100)+1;
    cout<<"Guess the number(1-100)";
    do
    {
        cout<<"Enter the number: ";
        c++;
        cin>>n;
        if(n> m)
        {
            cout<<"try smaller number\n";
        }
        else if(n<m)
        {
            cout<<"Try higher number\n";
        }
        else
        {
            cout<<"Bang On!"<<" you tried "<< c <<" times.\n" ;
        }

        
    }while(n != m);
}