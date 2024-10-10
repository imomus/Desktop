// in this basic c++ program we will take inpit of rows and columns from the user 
// and allow then to print rectangle of any character

#include <iostream>

int main()
{
    int row,column;
    using namespace std;
    cout<<" Enter the no of rows: ";
    cin>>row;
    cout<<"ENter the no of columns: ";
    cin>>column;
    char ch;
    cout<<"Enter the char: ";
    cin>>ch;
    for(int i = 0; i <row;i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<< ch;
        }
        cout<< endl;
    }
}