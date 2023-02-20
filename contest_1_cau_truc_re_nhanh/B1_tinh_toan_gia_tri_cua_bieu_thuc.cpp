#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int x ; cin >> x ;
    long long res = pow(x,3) + 3*pow(x,2) + x + 1 ;
    cout << res ;
    return 0 ;
}