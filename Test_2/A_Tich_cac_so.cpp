#include <iostream>

using namespace std ;

int MOD = 1e9 + 7 ;

int main()
{
    int n ;
    long long res = 1 ;
    while(cin >> n)
    {
        res *= n ;
        res %= MOD ;
    }
    cout << res ;
    return 0 ;
}