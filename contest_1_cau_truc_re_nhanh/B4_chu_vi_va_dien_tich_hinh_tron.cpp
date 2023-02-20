#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int r ; cin >> r ;
    double pi = 3.14 ;
    cout << fixed << setprecision(4) << 2*pi*r << " " << fixed << setprecision(4) << pi*r*r ;
    return 0 ;
}