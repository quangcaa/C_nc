#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    long long n , m , k ; cin >> n >> m >> k ;
    long long lt = 1 ;
    long long x = pow(10,k) ;
    for(int i=1 ; i<=m ; i++)
    {
        lt = ((lt % x) * (n % x)) % x ;
    }
    cout << lt ;
    return 0 ;
}