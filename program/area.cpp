// we are trying to create a function !

#include <iostream>
double area(double len , double width );

using namespace std;
int main()
{
    double len;
    cout<< " Enter the length: ";
    cin>> len;

    double width;
    cout<< "Enter the width: ";
    cin>> width;

   cout<< " The area of the rectangle is "<< area(len, width)<< endl;

}

double area(double len, double width)
{
    double s = len * width;
    return(s);
}



// there is something called function signature which is a term for function + its command line arguments and we have to make sure that
// all the function signatures have to be unique and for that matter we can have the same name of the function but all we have to do
// is to change the parameter that the function takes.