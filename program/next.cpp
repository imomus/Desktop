//using the ternary function , it is kind of like the substitute for the if else statement
#include <iostream>

int main()
{
    int n ;
    using namespace std;
    cout << "Enter your marks: ";
    cin>>n;
    n>60 ? cout<<"you get 1st grade":cout<<"you are fail\n";



 // we are checking if the number is even or odd

    int m; 
    cout<<"ENter a number: ";
    cin>>m;
    n%2 == 0 ? cout<<"It is even \n" : cout<< "IT is odd.\n";

// if we are dealing with bool then we dont have to mention == as 

    bool maried = true;

    maried ? cout<<"You are hapily maried: \n" : cout<<"it is oxymorone";

    // this is a basic programme that can create the temp conversion

    double temp, newtemp;
    int opt;
    cout<<"Enter the temp: ";
    cin>>temp;
    cout<<"What is the unit of temp \n 1.Celcius \n 2.Farenhite \n";
    cin>>opt;

    switch(opt)
    {
        case 1:
            cout<<"The Temp in farenhite is"<< (temp*9)/5 + 32 <<endl;
            break;
        case 2:
            cout<<"The Temp in celcius is "<<(temp -32)*5/9<<endl;
            break;       

    }

    //the next line of codes help us understand the users input 
    // name.length() will count the length of string and name.empty() will if the string is empty or not




    





    
}


