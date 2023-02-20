#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int x ; cin >> x ;
    double thuong2 = (double)x/2 ;
    cout << x*2 << "\n\n" << 1ll*x*10 << "\n\n" ;
    cout << x/2 << "\n\n" << fixed << setprecision(3) << thuong2 ;
    return 0 ;
}