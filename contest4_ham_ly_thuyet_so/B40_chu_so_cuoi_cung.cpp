#include <iostream>

using namespace std ;

int main()
{
    long long n ; cin >> n ;
    long long res = 1 ;
    long long bp = 1378 % 10 ;
    while(n)
    {
        if(n%2!=0)
        {
            res = (res * bp) % 10 ;
        }
        bp = (bp* bp) % 10 ;
        n /= 2 ;
    }
    cout << res ;
    return 0 ;
}