#include <iostream> 
#include <cmath> 
using namespace std ;
int main () 
{
    double r ;
    const double PI = 3.14 ;
     
    cout << " Enter radius " ;
    cin >> r ; 

    double a = PI * pow ( r,2 ) ;
    cout << " area = " << a ;


    return 0; 
}
