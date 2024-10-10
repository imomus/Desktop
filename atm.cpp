// in this program we are going to duplicate the atm and show all the features that you see in atm.

#include <iostream>
using namespace std;
int x;
double t;
double q;

int k = x;
double bankBalance = 0;
double withdraw = 0;
double deposit = 0;


int main()
{ 
    int storePin( int x);
    int y;
    cout<<"Enter your 4 digit ATM pin:";
    cin>>y;
    if(y == storePin(x))
    {
        int z;
        do
        {
            cout<<"************************************OM BANK SERVICES*************************************************\n";  
            cout<<"Choose the Service that you want to avail. \n1.Display Bank Balance\n2.Withdraw\n3.Deposit\n4.Change ATM Pin\n5.Take a loan\n6.Exit\n";
            cin>>z;
            switch(z)
            {
                case 1:
                    cout<<"Your bank balance is "<<bankBalance<<endl;
                    break;
                case 2:
                    double m;
                    cout<<"Enter the amount to Withdraw: ";
                    cin>> m;
                    if(m > bankBalance)
                    {
                        int g;
                        cout<<"Your bank balance is insufficient.Consider following options\n1.Take a loan\n2.Exit\n";
                        cin >> g;
                        switch(g)
                        {
                            case 1:
                                int SimInt(double x, double t);
                                cout<<"You have chosen to take a loan.\nEnter the amount of loan that you wish to take: ";
                                cin>>q;
                                cout<<"As you are our special customer we will take simple interest instead of\nour regular compound interest\n";
                                cout<<"The rate of interest will be 11.5% per annum\n";
                                cout<<"After how much time do you wish to pay: ";
                                cin>> t;
                                SimInt(q,t);
                                break;
                            case 2:
                                break;
                        }
                    }
                    else
                    {
                        bankBalance = bankBalance - m;
                    }
                    break;
                case 3:
                    double n;
                    cout<<"Enter the amount to deposit: ";
                    cin>> n;
                    bankBalance = bankBalance + n;
                    break;
                
                case 4:
                    int a;
                    int b;
                    cout<<"Enter new 4 digit ATM Pin: ";
                    cin>> a;
                    cout<<"Enter new 4 digit ATM Pin again: ";
                    cin>> b;
                    if(a == b)
                    {
                        x = a;
                        cout<<"Your ATM PIN has been updated";
                    }
                    break;
                case 5:
                    int SimInt(double x, double t);
                    cout<<"You have chosen to take a loan.\nEnter the amount of loan that you wish to take: ";
                    cin>>q;
                    cout<<"As you are our special customer we will take simple interest instead of our regular compound interest.\n";
                    cout<<"The rate of interest will be 11.5% per annum.\n";
                    cout<<"After how much time do you wish to pay: ";
                    cin>> t;
                    SimInt(q,t);
                    break;

            }      
        }while(z != 6);
    }
}
int storePin( int x)
{
    do
    {
        using namespace std;
        cout<<"Enter you 4 digit ATM pin: ";
        cin>> x;
    }while(999>x || x>9999);
    return(x);

}
int SimInt(double q, double t)
{
    double Sim = (q*11.5*t)/100;
    cout<<"Principal Amount of loan is ---------------> "<< q <<endl;
    cout<<"Simple Interest for "<< t<<" years is-------------> "<< Sim<<endl;
    cout<<"Total amount to be paid is------------------>"<<Sim+q<<endl;
    cout<<"Do you wish to continue\n1. YES\n2.NO\n";
    int d;
    cin>>d;
    switch(d)
    {
        case 1:
            cout<<"Your loan is sanctioned.\n";
            bankBalance = bankBalance + q;
            break;
        case 2:
            break;
    }
    return(0);
}
//an advanced version of the same is coming soon where you will be able to store the pin permanently and you have to register inorder to avial 
//the services and verify it with the otp send to your phone number and email.
