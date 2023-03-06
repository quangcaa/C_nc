#include <iostream>

using namespace std ;

const int MOD = 1e9 + 7 ;

int main()
{
    int n ; cin >> n ;
    long long res = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        res *= i ;
        res %= MOD ;
        cout << res << endl ;
    }
    return 0 ;
}