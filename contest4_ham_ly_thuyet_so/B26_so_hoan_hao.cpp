#include <iostream>
#include <cmath>

using namespace std ;

typedef long long ll ;

ll sum(ll n)
{
    ll res = 1 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            res += i ;
            if(i != n/i)
            {
                res += n/i ;
            }
        }
    }
    return res ;
}

int main()
{
    ll n ; cin >> n ;
    if(n == sum(n))
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0 ;
}