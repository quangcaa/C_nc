#include <iostream>
#include <cmath>

using namespace std ;

#define ll long long 

int main()
{
    ll n , m ; cin >> n >> m ; 
    long long res = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        res = ((res%m) * (28%m)) % m ;
    }
    cout << res ;
    return 0 ;
}