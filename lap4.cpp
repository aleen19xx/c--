#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    double u, v ;
    string str ;

    u= 12.5 ;
    v= 3.0 ;

    cout << " the square root of " << u << " is " << static_cast<int>(sqrt (u));
    cout << endl;

    cout <<u<< " to the power " << v << " is " << pow (u,v) ;
    cout  << endl ; 

    str= "Hello" ;
    cout << str << " -----> " << str.length();



    return 0;
}