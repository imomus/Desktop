#include <iostream>
#include <cmath>

/*int main()
{
    using namespace std;
    const double pi = 3.14;
    double radius = 2;

    double circum = pi*radius*2;
    cout << "The circumference is" << circum<< '\n';
}
*/


// typedef and using are used to decalre a data type or redeclare an existing data type.


namespace first
{
    std::string ujjwal;
}

namespace second
{
    std::string ujjwal;
}
int main()
{
    using namespace first;
    using namespace std;
    using om = std::string;
    cout<< ujjwal<<'\n';


// we can acheive the similar task by the use of typedef instead;


    using namespace second;
    typedef std::string om;
    om ujjwal = " How is you toe.";
    cout << ujjwal<< '\n';
    

    int age;
    string name;
    std::cout<< "what is your name: \n";
    std::getline(std::cin,name);
    std::cout<< "what is your age: ";
    std::cin>>age;
    std::cout<<"You are " << age<< " years old."<<'\n';
    std::cout<<"your name is "<< name <<'\n';

    // now there are functions in maths that might come handy when you are dealing with some problems.

    double a,b,c;
    a = 100;
    b = 100.1;

    std::cout<< std::max(a,b)<<'\n';
    std::cout<<std::min(a,b)<<'\n';
    double d = std::sqrt(c);

    c = pow(a,b);
    std::cout<< c <<"and"<< d<<'\n';

    // next we are going to see absolute value functions and round functions. if you put
    // negative value in absolute value function it is going to give you the positive version of the same.


    std::cout<< std::abs(-1001)<<"and"<< std::round(3.141)<<"and"<<std::ceil(3.14);

    //in the following program we are trying to calculate the hypotenous of a right angled triangle.

    double base, height, hypo;
    using namespace std;

    cout<< "Enter base: ";
    cin>>base;
    cout<< "Enter height: ";
    cin>>height;

    hypo = sqrt(pow(base,2)+pow(height,2));
    cout<<"Hypotenous is " << hypo <<endl;


    //age checker for dark websites

    int f;
    cout<<"Enter your age: ";
    cin>>f;
    if(f>18)
    {
        cout<<"you are allowed to enter.\n";
    }
    else
    {
        cout<<"grow up kid.\n";
    }
    






                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

}