#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std ;

int main()
{
    int n ; cin >> n ;
    double c2 = sqrt(n) ;
    double c3 = cbrt(n) ;
    cout << fixed << setprecision(2) << c2 << endl ;
    cout << fixed << setprecision(3) << c3 ;
    return 0 ;
}