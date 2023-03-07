#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    long long n , m , k ; cin >> n >> m >> k ;
    long long MOD = 1 ;
    for(int i=1 ; i<=k ; i++)
    {
        MOD *= 10 ;
    }
    long long res = 1 ;
    while (m > 0)
    {
        if (m & 1) 
        {
            res = (res * n) % MOD;
        }
        n = (n * n) % MOD;
        m >>= 1;
    }
    cout << res ;
    return 0 ;
}