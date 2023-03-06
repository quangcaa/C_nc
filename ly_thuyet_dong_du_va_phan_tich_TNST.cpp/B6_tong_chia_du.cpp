#include <iostream>

using namespace std ;

const int MOD = 1e9 + 7 ;

int main()
{
    int n ; cin >> n ;
    long long x ;
    long long sum = 0 ;
    
    for(int i=0 ; i<n ; i++)
    {
        cin >> x ;
        sum = ((sum % MOD ) + (x % MOD)) % MOD ;
    }

    cout << sum ;
    return 0 ;
}