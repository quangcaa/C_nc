#include <iostream>

using namespace std ;

const int MOD = 1e9 + 7 ;

int main()
{
    int n ; cin >> n ;
    long long res = 1 ;
    for(int i=0 ; i<n ; i++)
    {
        int x ; cin >> x ;
        res =( (res % MOD) * (x % MOD) ) % MOD ;
    }
    cout << res ;
    return 0 ;
}