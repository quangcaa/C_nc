#include<iostream>

using namespace std ;

int main()
{
    long long n , a , b ; cin >> n >> a >> b ;
    if(b>=a*2)
    {
        cout << 1ll*n*a ;
    }
    else
    {
        long long res = 1ll*(n/2)*b + (n%2)*a ;
        cout << res ;
    }
    return 0 ;
}