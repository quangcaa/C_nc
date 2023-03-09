#include <iostream>

using namespace std ;

const int MOD = 1e9 + 7 ;

int main()
{
    long long a , b ; cin >> a >> b ;
    long long lt = 1 ;
    long long x = a % MOD ;
    while(b)
    {
        if(b%2!=0)
        {
            lt = (lt*x) % MOD ; 
        }
        x = (x*x) % MOD ;
        b/=2 ;
    }
    cout << lt ;
    return 0 ;
}