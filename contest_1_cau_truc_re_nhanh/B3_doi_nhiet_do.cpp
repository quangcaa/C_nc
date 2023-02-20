#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int c ; cin >> c ;
    double f = c*1.8 + 32 ;
    cout << fixed << setprecision(2) << f ; 
    return 0 ; 
}