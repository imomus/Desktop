#include <iostream>

int main()
{
    using namespace std;
    string name;
    cout<<"Enter your name: ";
    cin>>name;

    if(name.empty())
    {
        cout<<"please type your name.\n";
    }
    else if(name.length()>12)
    {
        cout<< " your name is more than 12 characters. \n";
    }
    else
    {
        cout<<"You are welcome.";
    }
    
    //we can clear the name by using name.clear()


    name.append("@gmail.com");
    cout<<name<<'\n';

    
    name.clear();
    cout<<name << "is no more\n" <<endl;

    // we can also append a string to another string
}