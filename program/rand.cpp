// in this program we will try to create some random numbers will might be useful for ludo game or other.

#include <iostream>
#include <ctime>


int main()
{

    srand(time(NULL));
    using namespace std;
    int n = (rand()%6) +1;
    cout<< n <<endl; 

//now we are going to modify the same programme into random event generator;
 //it will generate number from 1 to 6

    switch(n)
    {
    case 1:
        cout<<"You win a mystery box\n";
        break;
    case 2:
        cout<<"You win a subscription to onlyfans account\n";
        break;

    case 3:
        cout<<"You win a free full body massage in bangkok\n";
        break;
    case 4:
        cout<<"You win a slap on cheek\n";
        break;
    case 5:
        cout<<"You win a kiss on lips\n";
        break;
    case 6:
        cout<<"You have to give me $100\n";
    }

}
