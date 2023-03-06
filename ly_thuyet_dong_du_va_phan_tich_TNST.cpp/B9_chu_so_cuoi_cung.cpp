#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    long long n , m , k ; cin >> n >> m >> k ;
    int MOD = pow(10,k) ;
    while(m--)
    {
        n*=n ;
        n%=MOD ;
    }
    cout << n ;
    return 0 ;
}